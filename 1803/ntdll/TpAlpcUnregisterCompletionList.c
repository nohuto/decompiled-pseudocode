/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x180107F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  result = sub_180056970((PPEB_LDR_DATA)a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = sub_1801086C8(v4, v3, v5);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
