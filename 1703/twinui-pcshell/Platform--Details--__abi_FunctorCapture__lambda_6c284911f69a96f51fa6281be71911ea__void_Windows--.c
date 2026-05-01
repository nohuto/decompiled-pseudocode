/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_6c284911f69a96f51fa6281be71911ea__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x18011EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_6c284911f69a96f51fa6281be71911ea__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  SetWindowPos(a3, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
}
