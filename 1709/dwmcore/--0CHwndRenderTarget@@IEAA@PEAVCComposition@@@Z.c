/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801358F4
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1801324D4 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180078184 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  float v2; // xmm0_4
  CHwndRenderTarget *result; // rax

  v2 = CCommonRegistryData::m_flSDRBoostOverride;
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_QWORD *)this + 61) = (char *)this + 520;
  *((_QWORD *)this + 62) = (char *)this + 520;
  *((_DWORD *)this + 126) = 8;
  *(_QWORD *)((char *)this + 508) = 8LL;
  *((_QWORD *)this + 81) = (char *)this + 680;
  *((_QWORD *)this + 82) = (char *)this + 680;
  *((_DWORD *)this + 166) = 5;
  *(_QWORD *)((char *)this + 668) = 5LL;
  *((_QWORD *)this + 90) = (char *)this + 752;
  *((_QWORD *)this + 91) = (char *)this + 752;
  *((_DWORD *)this + 184) = 5;
  *(_QWORD *)((char *)this + 740) = 5LL;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 102) = 1065353216;
  *((_BYTE *)this + 800) = 1;
  *((_BYTE *)this + 816) = 1;
  *((_BYTE *)this + 802) = 1;
  *((float *)this + 114) = v2;
  *((_DWORD *)this + 111) = CDisplay::GetDefaultSRGBFormat();
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 38) = 1;
  CMILMatrix::operator=((__int64)this + 164);
  CMILMatrix::operator=((__int64)this + 232);
  CMILMatrix::operator=((__int64)this + 300);
  result = this;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  return result;
}
