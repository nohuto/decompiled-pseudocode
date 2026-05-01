/*
 * XREFs of _CortanaDesktopExperienceView::GetViewWrapper_::_1_::dtor$0 @ 0x1800B4DA7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetViewWrapper_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(*(_QWORD *)(a2 + 72));
  }
  return result;
}
