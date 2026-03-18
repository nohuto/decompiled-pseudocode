/*
 * XREFs of SepBlockAccessForLogonSession @ 0x1405799CC
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1405799A0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  unsigned int v6; // edi

  v2 = *a1 & 0xF;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( *(_QWORD *)(v3 + 160) == PsGetCurrentServerSilo()
      && *a1 == *(_DWORD *)(v3 + 8)
      && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 32) |= 0x20u;
      goto LABEL_7;
    }
  }
  v6 = -1073741729;
LABEL_7:
  ExReleaseResourceLite(v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
