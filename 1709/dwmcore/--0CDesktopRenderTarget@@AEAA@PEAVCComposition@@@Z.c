/*
 * XREFs of ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18013266C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::CDesktopRenderTarget(
        CDesktopRenderTarget *this,
        struct CComposition *a2)
{
  HANDLE v3; // rax
  PSECURITY_DESCRIPTOR v4; // rcx
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  SecurityDescriptor = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &CDesktopRenderTarget::`vftable';
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_DWORD *)this + 34) = 2;
  *((_DWORD *)this + 35) = 2;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 2;
  *((_DWORD *)this + 47) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 27) = (char *)this + 248;
  *((_QWORD *)this + 28) = (char *)this + 248;
  *((_DWORD *)this + 58) = 2;
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 70) = 2;
  *((_DWORD *)this + 71) = 2;
  *((_QWORD *)this + 33) = (char *)this + 296;
  *((_QWORD *)this + 34) = (char *)this + 296;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 90) = 1065353216;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.bInheritHandle = 0;
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    v3 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
    v4 = SecurityDescriptor;
    *((_QWORD *)this + 48) = v3;
    LocalFree(v4);
  }
  return this;
}
