/*
 * XREFs of PsIsThreadInSilo @ 0x140089378
 * Callers:
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1406A424C (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x14059803C (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 2000) == -3LL )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 2000)) != 0;
}
