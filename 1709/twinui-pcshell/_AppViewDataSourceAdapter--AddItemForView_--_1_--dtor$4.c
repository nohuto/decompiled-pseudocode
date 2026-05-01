/*
 * XREFs of _AppViewDataSourceAdapter::AddItemForView_::_1_::dtor$4 @ 0x1801F5CA4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B31D0 (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall AppViewDataSourceAdapter::AddItemForView_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 112) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>((volatile signed __int64 **)(a2 + 136));
  }
  return result;
}
