/*
 * XREFs of PipProcessStartPhase2 @ 0x14044F9D8
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x1401F7E60 (IoRequestDeviceEject.c)
 *     Template_qz @ 0x1401FAC80 (Template_qz.c)
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14069FE00 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x140819E18 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  int v7; // eax
  __int64 v8; // r8

  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 2, *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 < 0 )
      PpProfileCancelHardwareProfileTransition();
    else
      PpProfileCommitTransitioningDock(a1);
  }
  if ( v4 < 0 )
  {
    v8 = 10LL;
    if ( v4 == -1073741102 )
      v8 = 14LL;
    PnpRequestDeviceRemoval(a1, 0LL, v8, (unsigned int)v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  else
  {
    IopDoDeferredSetInterfaceState(a1);
    if ( !IopBootConfigsReserved )
    {
      v7 = *(_DWORD *)(a1 + 448);
      if ( v7 != -1 )
      {
        if ( v7 == 1 )
          IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
        IopAllocateLegacyBootResources(*(unsigned int *)(a1 + 448), *(unsigned int *)(a1 + 452));
      }
    }
    PipSetDevNodeState(a1, 775);
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    Template_qz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceStart_Stop, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
