/*
 * XREFs of ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801DFA14 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801E0E20 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessDeviceLost(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 222) == -2003304307
    && !*((_BYTE *)this + 1048)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                + 69)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 120);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    v2 = *((_QWORD *)this + 61);
    *((_BYTE *)this + 1048) = 1;
    if ( v2 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this + 472);
    CD2DContext::DestroyDeviceResources(this);
    CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 896));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 888LL))(*((_QWORD *)this + 82));
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 472));
  }
}
