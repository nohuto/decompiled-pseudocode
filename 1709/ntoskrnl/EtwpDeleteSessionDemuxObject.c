/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14074F0A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 4064, 0LL);
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[3] = 0LL;
    if ( (_QWORD *)v1[4] == v1 + 4 )
    {
      RtlRbRemoveNode(v3 + 4048, (unsigned __int64)v1);
      ExFreePoolWithTag(v1, 0);
    }
    ExReleasePushLockEx(v3 + 4064, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
