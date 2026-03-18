/*
 * XREFs of EtwDeleteSiloState @ 0x140747D48
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1400FA200 (ExFreeCacheAwareRundownProtection.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
  v2 = *((_DWORD *)P + 2);
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_QWORD *)(*((_QWORD *)P + 53) + 8LL * i) != 1LL )
      KeBugCheck(0x11Du);
  }
  v4 = 0;
  v5 = (signed __int64 *)(P + 480);
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
  for ( k = 0; k < *((_DWORD *)P + 2); ++k )
  {
    v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*((_QWORD *)P + 52) + 8LL * k);
    if ( v9 )
      ExFreeCacheAwareRundownProtection(v9);
  }
  ExFreePoolWithTag(*((PVOID *)P + 513), 0x61777445u);
  ExFreePoolWithTag(*((PVOID *)P + 52), 0x61777445u);
  ExFreePoolWithTag(P, 0x61777445u);
}
