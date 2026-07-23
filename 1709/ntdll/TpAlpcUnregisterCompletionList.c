/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x18010A750
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180013AB0 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 1);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = TppRaiseInvalidParameter(v3);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
