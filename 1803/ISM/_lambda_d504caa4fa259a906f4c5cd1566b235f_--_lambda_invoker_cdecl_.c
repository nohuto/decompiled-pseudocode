/*
 * XREFs of _lambda_d504caa4fa259a906f4c5cd1566b235f_::_lambda_invoker_cdecl_ @ 0x180032A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d504caa4fa259a906f4c5cd1566b235f_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 2876);
  v2 = *(_BYTE *)(a1 + 6920) && !v1;
  if ( (*(_DWORD *)(a1 + 1956) != *(_DWORD *)(a1 + 6924) || *(_DWORD *)(a1 + 1960) != *(_DWORD *)(a1 + 6928)) && !v1
    || v2 )
  {
    *(_BYTE *)(a1 + 7120) = 1;
  }
  *(_QWORD *)(a1 + 6924) = *(_QWORD *)(a1 + 1956);
  result = 0LL;
  *(_BYTE *)(a1 + 6920) = v1 != 0;
  return result;
}
