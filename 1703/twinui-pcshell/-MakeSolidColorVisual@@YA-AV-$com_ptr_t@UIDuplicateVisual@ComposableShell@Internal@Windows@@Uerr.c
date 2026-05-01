/*
 * XREFs of ?MakeSolidColorVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UColor@UI@Windows@@PEAUICompositor@Composition@45@USize@Foundation@5@@Z @ 0x18016A9E0
 * Callers:
 *     ?MakeSolidColorBackgroundVisual@DesktopBackgroundFactory@@AEAA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@USize@Foundation@7@@Z @ 0x1801691AC (-MakeSolidColorBackgroundVisual@DesktopBackgroundFactory@@AEAA-AV-$com_ptr_t@UIDuplicateVisual@C.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNi.c)
 *     ??$com_query@UIDuplicateVisual@ComposableShell@Internal@Windows@@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@@Z @ 0x18016A268 (--$com_query@UIDuplicateVisual@ComposableShell@Internal@Windows@@AEAV-$ComPtr@VThumbnailInteropV.c)
 *     ??$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@wil@@YA?AV?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AA9C (--$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall MakeSolidColorVisual(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rcx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  v7[1] = -2LL;
  v7[0] = a4;
  ((void (__fastcall *)(__int64 **, int *, __int64 *, _QWORD *, _DWORD))wil::MakeOrThrow<SolidColorVisual,Windows::UI::Color &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &>)(
    &v8,
    &v9,
    &v10,
    v7,
    0);
  wil::com_query<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::ComPtr<ThumbnailInteropVisual> &>(
    a1,
    (__int64 *)&v8);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v5);
  }
  return a1;
}
