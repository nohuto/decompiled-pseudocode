/*
 * XREFs of PipProcessStartPhase2 @ 0x1405CA7BC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14023A960 (IoRequestDeviceEject.c)
 *     McTemplateK0qz @ 0x14023D790 (McTemplateK0qz.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     IopDoDeferredSetInterfaceState @ 0x1405CA86C (IopDoDeferredSetInterfaceState.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140731D64 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x1408BF88C (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  int v8; // r8d

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
    v8 = 10;
    if ( v4 == -1073741102 )
      v8 = 14;
    PnpRequestDeviceRemoval(a1, 0, v8, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  else
  {
    IopDoDeferredSetInterfaceState(a1);
    if ( !IopBootConfigsReserved )
    {
      v7 = *(unsigned int *)(a1 + 448);
      if ( (_DWORD)v7 != -1 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
          v7 = *(unsigned int *)(a1 + 448);
        }
        IopAllocateLegacyBootResources(v7, *(unsigned int *)(a1 + 452));
      }
    }
    PipSetDevNodeState(a1, 775);
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceStart_Stop, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
