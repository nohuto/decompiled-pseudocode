/*
 * XREFs of VRegEnabledInJob @ 0x1406A3A3C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1406A33F0 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1406A397C (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  unsigned __int64 CurrentSilo; // rbx
  __int64 HostSilo; // rdi

  CurrentSilo = PsGetCurrentSilo();
  HostSilo = PsGetHostSilo();
  if ( CurrentSilo == HostSilo )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == HostSilo )
      return 0LL;
  }
  return 1LL;
}
