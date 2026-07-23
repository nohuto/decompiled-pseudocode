/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x18010A6F0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180013AB0 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rcx

  if ( !(unsigned int)TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 1) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    TppRaiseInvalidParameter(v2);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
