/*
 * XREFs of ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180195868 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessDeviceLost(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 218) == -2003304307
    && !*((_BYTE *)this + 1121)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 70) + 120LL))(*((_QWORD *)g_pComposition
                                                                                                + 70)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 124);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    v2 = *((_QWORD *)this + 63);
    *((_BYTE *)this + 1121) = 1;
    if ( v2 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this + 488);
    CD2DContext::DestroyDeviceResources(this);
    CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 58);
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 488));
  }
}
