/*
 * XREFs of PsIsThreadInSilo @ 0x1400F17F4
 * Callers:
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1407082FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140708654 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407088BC (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140708F80 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407097C0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x1400F0EC0 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x140580A88 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 2000) == -3LL )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 2000)) != 0;
}
