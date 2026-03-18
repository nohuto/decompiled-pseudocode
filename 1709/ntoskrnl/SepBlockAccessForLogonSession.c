/*
 * XREFs of SepBlockAccessForLogonSession @ 0x14072F038
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x14072F4E0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
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
  do
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
    {
      v6 = -1073741729;
      goto LABEL_7;
    }
  }
  while ( *(_QWORD *)(v3 + 160) != PsGetCurrentServerSilo()
       || *a1 != *(_DWORD *)(v3 + 8)
       || a1[1] != *(_DWORD *)(v3 + 12) );
  *(_DWORD *)(v3 + 32) |= 0x20u;
LABEL_7:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
