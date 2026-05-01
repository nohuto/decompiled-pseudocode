/*
 * XREFs of __lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()_::_1_::dtor$1 @ 0x1800B0B7C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 120);
  }
  return result;
}
