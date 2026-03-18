/*
 * XREFs of SmKmCleanup @ 0x140701BC0
 * Callers:
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET **v2; // rdi
  __int64 v3; // r15
  struct _PRIVILEGE_SET *v4; // rsi
  volatile signed __int64 *p_Attributes; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14

  v2 = (struct _PRIVILEGE_SET **)a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      p_Attributes = (volatile signed __int64 *)&v4->Privilege[0].Attributes;
      v6 = 32LL;
      do
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Attributes, 0LL);
        v8 = *((_QWORD *)p_Attributes - 2);
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *((_QWORD *)p_Attributes - 2), 7LL);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)p_Attributes - 1);
        }
        else
        {
          *((_QWORD *)p_Attributes - 2) = -1LL;
        }
        if ( (_InterlockedExchangeAdd64(p_Attributes, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(p_Attributes);
        KeAbPostRelease((ULONG_PTR)p_Attributes);
        KeLeaveCriticalRegion();
        if ( v8 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v8, 1LL);
        p_Attributes += 5;
        --v6;
      }
      while ( v6 );
      MiDeleteSubsection(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
