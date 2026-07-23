/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x18007F150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = sub_18007F3E0(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = sub_1801058B8(v4, v3);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
