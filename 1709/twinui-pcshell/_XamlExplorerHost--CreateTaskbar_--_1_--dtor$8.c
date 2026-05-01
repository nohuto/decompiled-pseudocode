/*
 * XREFs of _XamlExplorerHost::CreateTaskbar_::_1_::dtor$8 @ 0x1801EFB06
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180148C78 (--1-$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall XamlExplorerHost::CreateTaskbar_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 36) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlTaskbarProxy>::~ComPtr<XamlTaskbarProxy>((volatile signed __int32 **)(a2 + 40));
  }
  return result;
}
