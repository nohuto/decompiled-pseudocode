/*
 * XREFs of ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180128560 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessDeviceLost(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 222) == -2003304307
    && !*((_BYTE *)this + 1040)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 66) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                + 66)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 120);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    v2 = *((_QWORD *)this + 61);
    *((_BYTE *)this + 1040) = 1;
    if ( v2 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this + 472);
    CD2DContext::DestroyDeviceResources(this);
    CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 56);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 888LL))(*((_QWORD *)this + 82));
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 472));
  }
}
