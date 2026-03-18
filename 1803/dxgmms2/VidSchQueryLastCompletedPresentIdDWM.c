/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C0001BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v3 = a2;
  if ( a1 && a3 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( a2 >= *(_DWORD *)(v6 + 40) )
    {
      v11 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v11 + 24) = v3;
      *(_QWORD *)(v11 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v11);
      return 3221225485LL;
    }
    else
    {
      _mm_lfence();
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1904), &LockHandle);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1912), &v13);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v3 + 492);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8 * v3 + 560);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8 * v3 + 688);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v13);
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v3 + 3032) + 28032LL);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 8 * v3 + 3032) + 28040LL);
      v7 = 0;
      v8 = *(int *)(*(_QWORD *)(v6 + 8 * v3 + 3032) + 140LL);
      if ( (int)v8 > -1 )
        v9 = *(_QWORD *)(v6 + 3160) + 136 * v8;
      else
        v9 = 0LL;
      if ( v9 )
        v7 = *(_DWORD *)(v9 + 100);
      *(_DWORD *)(a3 + 32) = v7;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
}
