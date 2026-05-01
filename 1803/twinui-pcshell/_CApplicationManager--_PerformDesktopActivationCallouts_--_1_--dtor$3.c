/*
 * XREFs of _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$3 @ 0x1801111C8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 216) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 216) &= ~1u;
    return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 72));
  }
  return result;
}
