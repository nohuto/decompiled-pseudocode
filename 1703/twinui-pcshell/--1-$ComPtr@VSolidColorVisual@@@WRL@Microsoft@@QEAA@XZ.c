/*
 * XREFs of ??1?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180169EEC
 * Callers:
 *     _MakeThumbnailInteropVisual_::_1_::dtor$0 @ 0x1801A4CE1 (_MakeThumbnailInteropVisual_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_&___ptr64_IThumbnailFactoryInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64_Windows::Foundation::Rect_____ptr64_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties_&___ptr64__::_1_::dtor$0 @ 0x1801A4CED (_wil--MakeOrThrow_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_-___ptr64_IThumbnail.c)
 *     _Microsoft::WRL::Details::Make_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_&___ptr64_IThumbnailFactoryInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64_Windows::Foundation::Rect_____ptr64_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties_&___ptr64__::_1_::dtor$0 @ 0x1801A4D13 (_Microsoft--WRL--Details--Make_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_-___ptr.c)
 *     _MakeSolidColorVisual_::_1_::dtor$0 @ 0x1801A4DE3 (_MakeSolidColorVisual_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_SolidColorVisual_Windows::UI::Color_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64__::_1_::dtor$0 @ 0x1801A4DEF (_wil--MakeOrThrow_SolidColorVisual_Windows--UI--Color_-___ptr64_Windows--UI--Composition--ICompo.c)
 *     _Microsoft::WRL::Details::Make_SolidColorVisual_Windows::UI::Color_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64__::_1_::dtor$0 @ 0x1801A4E15 (_Microsoft--WRL--Details--Make_SolidColorVisual_Windows--UI--Color_-___ptr64_Windows--UI--Compos.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNi.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SolidColorVisual>::~ComPtr<SolidColorVisual>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
