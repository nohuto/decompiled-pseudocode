/*
 * XREFs of VRegEnabledInJob @ 0x1407080AC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x140707FEC (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1407082FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140708654 (VrpHandleIoctlCreateNamespaceNode.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  unsigned __int64 CurrentSilo; // rbx
  __int64 HostSilo; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentSilo = PsGetCurrentSilo();
  HostSilo = PsGetHostSilo();
  if ( CurrentSilo == HostSilo )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo, v4, v5, v6);
    if ( CurrentSilo == HostSilo )
      return 0LL;
  }
  return 1LL;
}
