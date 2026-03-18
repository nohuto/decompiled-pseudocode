/*
 * XREFs of ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180045188
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::CDesktopRenderTarget(
        CDesktopRenderTarget *this,
        struct CComposition *a2)
{
  HANDLE v3; // rax
  PSECURITY_DESCRIPTOR v4; // rcx
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  CRenderTarget::CRenderTarget(this, a2);
  SecurityDescriptor = 0LL;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CDesktopRenderTarget::`vftable';
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 22) = (char *)this + 208;
  *((_QWORD *)this + 23) = (char *)this + 208;
  *((_DWORD *)this + 48) = 2;
  *((_DWORD *)this + 49) = 2;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 60) = 2;
  *((_DWORD *)this + 61) = 2;
  *((_QWORD *)this + 28) = (char *)this + 256;
  *((_QWORD *)this + 29) = (char *)this + 256;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 77) = 1065353216;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.bInheritHandle = 0;
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    v3 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
    v4 = SecurityDescriptor;
    *((_QWORD *)this + 42) = v3;
    LocalFree(v4);
  }
  return this;
}
