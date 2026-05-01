/*
 * XREFs of ?Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z @ 0x180168C58
 * Callers:
 *     ??$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x1801687D8 (--$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@M.c)
 *     ??0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180168E30 (--0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VThumbnailEventRegistration@ThumbnailEventListener@@AEAPEAUIThumbnailEvents@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailEventRegistration@ThumbnailEventListener@@@12@AEAPEAUIThumbnailEvents@@@Z @ 0x180168BA0 (--$Make@VThumbnailEventRegistration@ThumbnailEventListener@@AEAPEAUIThumbnailEvents@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ThumbnailEventListener::Register(ThumbnailEventListener *this, struct IThumbnailDeviceInternal *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  const char *v8; // r9
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  __int64 v11; // r14
  volatile signed __int32 *v12; // rcx
  signed __int32 v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v4);
      v6 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v4 + 24) = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = 0LL;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
  }
  Microsoft::WRL::Details::Make<ThumbnailEventListener::ThumbnailEventRegistration,IThumbnailEvents * &>(
    &v15,
    (__int64 *)this);
  v9 = v15;
  if ( !v15 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x22,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\Device.h",
      v8);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(struct IThumbnailDeviceInternal *, volatile signed __int32 *))(*(_QWORD *)a2 + 32LL))(
          a2,
          v15);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\Device.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = *((_QWORD *)v9 + 3);
  *((_QWORD *)v9 + 3) = a2;
  (*(void (__fastcall **)(struct IThumbnailDeviceInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v9;
  do
    v13 = *((_DWORD *)v9 + 3);
  while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange(v9 + 3, v13 + 1, v13) );
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
}
