/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180107EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( !(unsigned int)sub_180056970((PPEB_LDR_DATA)a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    sub_1801086C8(v3, v2, v4);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return sub_180107F84(a1);
}
