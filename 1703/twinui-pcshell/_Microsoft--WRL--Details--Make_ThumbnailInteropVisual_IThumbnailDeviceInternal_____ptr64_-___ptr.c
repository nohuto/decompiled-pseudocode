/*
 * XREFs of _Microsoft::WRL::Details::Make_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_&___ptr64_IThumbnailFactoryInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64_Windows::Foundation::Rect_____ptr64_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties_&___ptr64__::_1_::dtor$0 @ 0x1801A4D13
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180169EEC (--1-$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_ThumbnailInteropVisual_IThumbnailDeviceInternal_____ptr64_____ptr64_IThumbnailFactoryInternal_____ptr64_____ptr64_HWND_______ptr64_____ptr64_Windows::Foundation::Rect_____ptr64_____ptr64_Windows::UI::Composition::ICompositor_____ptr64_____ptr64_Windows::Foundation::Size_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ThumbnailProperties_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<SolidColorVisual>::~ComPtr<SolidColorVisual>(*(__int64 **)(a2 + 144));
  }
  return result;
}
