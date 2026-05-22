/*
 * XREFs of _lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_ @ 0x18003DCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_9e3b67bfe06f1aa7e93951d645f6530a_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 1224);
  v2 = *(_BYTE *)(a1 + 3880) && !v1;
  if ( (*(_DWORD *)(a1 + 324) != *(_DWORD *)(a1 + 3884) || *(_DWORD *)(a1 + 328) != *(_DWORD *)(a1 + 3888)) && !v1 || v2 )
    *(_BYTE *)(a1 + 4080) = 1;
  *(_QWORD *)(a1 + 3884) = *(_QWORD *)(a1 + 324);
  result = 0LL;
  *(_BYTE *)(a1 + 3880) = v1 != 0;
  return result;
}
