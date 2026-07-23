/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x1407AFEC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _RTL_BALANCED_NODE *v1; // rdi
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v1 = (_RTL_BALANCED_NODE *)a1[3];
  if ( v1 )
  {
    v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 4072, 0LL);
    v7 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (_QWORD *)a1[1], (_QWORD *)*v8 != a1) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    a1[3] = 0LL;
    if ( v1[1].Children[1] == (_RTL_BALANCED_NODE *)&v1[1].Right )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(v3 + 4056), v1);
      ExFreePoolWithTag(v1, 0);
    }
    ExReleasePushLockEx(v3 + 4072, 0LL, v5, v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
