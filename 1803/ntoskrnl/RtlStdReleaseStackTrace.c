/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1402868F0
 * Callers:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x140163474 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rcx
  unsigned int v5; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rbx
  KSPIN_LOCK *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rbx

  v2 = 0;
  v4 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v4;
    }
    while ( v4 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v5 % *(_DWORD *)(a1 + 720) + 2LL * (v5 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      v12 = (_QWORD *)*v8;
      if ( *v8 )
      {
        while ( v12 != (_QWORD *)a2 )
        {
          v8 = v12;
          v12 = (_QWORD *)*v12;
          if ( !v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD *)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v2 = 1;
    }
  }
  v13 = *((unsigned __int8 *)v9 + 8);
  KxReleaseSpinLock(v9);
  __writecr8(v13);
  if ( v2 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
      (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
