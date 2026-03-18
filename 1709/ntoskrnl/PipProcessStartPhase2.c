/*
 * XREFs of PipProcessStartPhase2 @ 0x140555E8C
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x1401FDF90 (IoRequestDeviceEject.c)
 *     McTemplateK0qz @ 0x14020097C (McTemplateK0qz.c)
 *     IopDoDeferredSetInterfaceState @ 0x140555F3C (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406CA724 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x1406CA854 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x140849DA0 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  int v7; // eax
  __int64 v8; // r8

  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 2, *(const wchar_t **)(a1 + 48));
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
    McTemplateK0qz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceStart_Stop, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
