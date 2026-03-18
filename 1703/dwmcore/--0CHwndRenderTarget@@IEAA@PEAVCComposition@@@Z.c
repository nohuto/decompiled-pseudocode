/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800CA2C8 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x180155938 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x180155E04 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  CHwndRenderTarget *v4; // r8
  CHwndRenderTarget *result; // rax
  __int64 v6; // r9

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_QWORD *)this + 59) = (char *)this + 504;
  *((_QWORD *)this + 60) = (char *)this + 504;
  *((_DWORD *)this + 122) = 8;
  *(_QWORD *)((char *)this + 492) = 8LL;
  *((_QWORD *)this + 79) = (char *)this + 664;
  *((_QWORD *)this + 80) = (char *)this + 664;
  *((_DWORD *)this + 162) = 5;
  *(_QWORD *)((char *)this + 652) = 5LL;
  *((_DWORD *)this + 180) = 5;
  *(_QWORD *)((char *)this + 724) = 5LL;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_WORD *)this + 393) = 257;
  *((_DWORD *)this + 102) = 1065353216;
  *((_BYTE *)this + 784) = 1;
  *(_QWORD *)((char *)this + 444) = 87LL;
  *((_DWORD *)this + 38) = 1;
  CMILMatrix::operator=((char *)this + 164);
  CMILMatrix::operator=(v2 + 232);
  CMILMatrix::operator=(v3 + 300);
  result = v4;
  *((_QWORD *)v4 + 101) = v6;
  *((_QWORD *)v4 + 102) = v6;
  return result;
}
