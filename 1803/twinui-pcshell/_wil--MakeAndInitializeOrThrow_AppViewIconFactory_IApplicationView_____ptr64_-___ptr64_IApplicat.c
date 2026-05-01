/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180233A4D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180234BC8 (--1-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView_____ptr64_____ptr64_IApplicationViewIconLoader_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
