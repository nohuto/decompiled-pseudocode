/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x14025A9C0
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1407A883C (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r9
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v7 = (__int64 *)qword_1403CC580;
  if ( (__int64 *)qword_1403CC580 != &qword_1403CC580 )
  {
    v8 = (unsigned __int64 *)(a1 + 24);
    do
    {
      if ( v8 - 3 == v6 )
      {
        v4 = -1073741820;
      }
      else
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v7 - 34);
        v9 = v7[374];
        v8[1] = v9;
        v10 = v7[373];
        *(v8 - 2) = v10;
        v11 = v7[8];
        *v8 = v11;
        v12 = *(v7 - 12);
        *(v8 - 1) = v12;
        if ( v11 >= v12 )
          v11 = v12;
        *v8 = v11;
        if ( v9 >= v10 )
          v9 = v10;
        if ( v9 < v12 )
          v12 = v9;
        v8[1] = v12;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_1403CC580 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = v4;
  *a2 = v5;
  return result;
}
