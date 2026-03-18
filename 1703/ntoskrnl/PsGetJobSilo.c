/*
 * XREFs of PsGetJobSilo @ 0x140239490
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140679694 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406799C8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140679C08 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x14067A6E8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PspConvertJobToMixed @ 0x1406E146C (PspConvertJobToMixed.c)
 * Callees:
 *     PspGetJobSilo @ 0x14003A23C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v3; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v3 = JobSilo;
  return 0LL;
}
