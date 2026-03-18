/*
 * XREFs of PsGetJobSilo @ 0x14024E430
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1406A424C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x1406A4E34 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x14012CFAC (PspGetJobSilo.c)
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
