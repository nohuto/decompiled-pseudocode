/*
 * XREFs of _Microsoft::WRL::Details::Make_SolidColorVisual_Windows::UI::Color_&___ptr64_Windows::UI::Composition::ICompositor_____ptr64_&___ptr64_Windows::Foundation::Size_&___ptr64__::_1_::dtor$0 @ 0x1801A4E15
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180169EEC (--1-$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_SolidColorVisual_Windows::UI::Color_____ptr64_Windows::UI::Composition::ICompositor_____ptr64_____ptr64_Windows::Foundation::Size_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<SolidColorVisual>::~ComPtr<SolidColorVisual>(*(__int64 **)(a2 + 96));
  }
  return result;
}
