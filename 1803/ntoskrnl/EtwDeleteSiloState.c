/*
 * XREFs of EtwDeleteSiloState @ 0x1407A948C
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407792DC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140006330 (ExFreeCacheAwareRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwDeleteSiloState(char *P)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  unsigned int v4; // esi
  signed __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed int j; // ecx
  unsigned int k; // edi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx

  if ( !P )
    KeBugCheck(0x11Du);
  v2 = *((_DWORD *)P + 4);
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_QWORD *)(*((_QWORD *)P + 54) + 8LL * i) != 1LL )
      KeBugCheck(0x11Du);
  }
  v4 = 0;
  v5 = (signed __int64 *)(P + 488);
  do
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    for ( j = 0; (unsigned int)j < 3; ++j )
    {
      if ( (signed __int64 *)v5[2 * j - 6] != &v5[2 * j - 6] )
        KeBugCheck(0x11Du);
    }
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegion();
    ++v4;
    v5 += 7;
  }
  while ( v4 < 0x40 );
  for ( k = 0; k < *((_DWORD *)P + 4); ++k )
  {
    v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*((_QWORD *)P + 53) + 8LL * k);
    if ( v9 )
      ExFreeCacheAwareRundownProtection(v9);
  }
  ExFreePoolWithTag(*((PVOID *)P + 514), 0x61777445u);
  ExFreePoolWithTag(*((PVOID *)P + 53), 0x61777445u);
  ExFreePoolWithTag(P, 0x61777445u);
}
