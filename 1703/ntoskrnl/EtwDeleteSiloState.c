/*
 * XREFs of EtwDeleteSiloState @ 0x14070C6D8
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140005C00 (ExFreeCacheAwareRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwDeleteSiloState(PVOID *a1)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  signed __int64 *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed int i; // ecx
  PEX_RUNDOWN_REF_CACHE_AWARE *v9; // rdi

  if ( !a1 )
    KeBugCheck(0x11Du);
  v2 = 0;
  v3 = a1 + 115;
  v4 = 64LL;
  do
  {
    if ( *v3 != 1LL )
      KeBugCheck(0x11Du);
    ++v2;
    ++v3;
  }
  while ( v2 < 0x40 );
  v5 = 0;
  v6 = (signed __int64 *)(a1 + 185);
  do
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v6, 0LL);
    for ( i = 0; (unsigned int)i < 3; ++i )
    {
      if ( (signed __int64 *)v6[2 * i - 6] != &v6[2 * i - 6] )
        KeBugCheck(0x11Du);
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegion();
    ++v5;
    v6 += 7;
  }
  while ( v5 < 0x40 );
  v9 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 51);
  do
  {
    if ( *v9 )
      ExFreeCacheAwareRundownProtection(*v9);
    ++v9;
    --v4;
  }
  while ( v4 );
  ExFreePoolWithTag(a1[638], 0x61777445u);
  ExFreePoolWithTag(a1, 0x61777445u);
}
