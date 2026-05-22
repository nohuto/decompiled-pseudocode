/*
 * XREFs of _lambda_c88a0564d6fae1946d42cf268bfdb624_::_lambda_invoker_cdecl_ @ 0x1800B7320
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800B76AC (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_c88a0564d6fae1946d42cf268bfdb624_::_lambda_invoker_cdecl_(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax

  v1 = 0;
  result = 0LL;
  if ( *(_BYTE *)(a1 + 18) )
  {
    result = ButtonRecognizer::OnSendComboButtonInvokeEvent((ButtonRecognizer *)a1);
    if ( (int)result < 0 )
      return result;
    v1 = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 17) = 0;
  }
  *(_BYTE *)(a1 + 16) = v1;
  *(_DWORD *)(a1 + 24) = 3;
  return result;
}
