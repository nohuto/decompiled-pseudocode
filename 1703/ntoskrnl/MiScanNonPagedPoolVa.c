/*
 * XREFs of MiScanNonPagedPoolVa @ 0x1400AC920
 * Callers:
 *     MiFindNonPagedPoolVa @ 0x1400AD2B4 (MiFindNonPagedPoolVa.c)
 *     MiFindContiguousMemoryInPool @ 0x1401241D8 (MiFindContiguousMemoryInPool.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x140217C74 (MiRemoveFreePoolMemoryFromDump.c)
 *     MiScrubNonPagedPool @ 0x1406B6538 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400ACB30 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiScanLeafNonPagedPool @ 0x1400ACC90 (MiScanLeafNonPagedPool.c)
 */

__int64 __fastcall MiScanNonPagedPoolVa(_SLIST_ENTRY *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  _SLIST_HEADER *v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 result; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  _SLIST_HEADER *v17; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v18; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+D8h] [rbp+20h]

  v17 = &qword_14036C1C8[25 * a2];
  v5 = (int)a3 + 48LL;
  v6 = *(&v17->Alignment + v5);
  v7 = &v17[(int)a3 + 21];
  v18 = &v17->Alignment + v5;
  if ( *(_BYTE *)(a4 + 48) == 1 )
    v6 = *(_QWORD *)(a4 + 40);
  v8 = v6 >> 9;
  v9 = ((unsigned __int64)&a1[31].Next + 15) >> 9;
  v10 = v6 >> 9;
  v21 = v6 >> 9;
  v11 = -1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(v7, v8, a3, &v16);
      v13 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v14 = v16;
      if ( v16 >= v11 )
        return -1LL;
      if ( NextForwardRunClearCapped < v9 )
      {
        v8 = v16 + NextForwardRunClearCapped;
        v10 = v21;
      }
      else
      {
        if ( v8 != v21 || v16 == v8 || v9 != 1 || *(_DWORD *)a4 )
        {
          if ( (v6 >> 9 < v16 || v6 >> 9 >= v8) && *(_DWORD *)a4 <= 1u )
            v6 = v16 << 9;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&v17[19].Alignment, &LockHandle);
          if ( v6 == *v18 )
          {
            v6 = v14 << 9;
            *v18 = v14 << 9;
          }
          else
          {
            v6 = v14 << 9;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
        if ( *(_BYTE *)(a4 + 48) == 1 && v6 < v14 << 9 )
          v6 = v14 << 9;
        result = MiScanLeafNonPagedPool(a1, v14 << 9, v13 << 9, v6);
        if ( result != -1 )
          return result;
        v8 = v14 + v13;
        v10 = v21;
      }
    }
    if ( v11 != -1LL || !v10 || *(_BYTE *)(a4 + 48) )
      break;
    v8 = 0LL;
    v11 = v10;
    v10 = 0LL;
    v21 = 0LL;
  }
  return -1LL;
}
