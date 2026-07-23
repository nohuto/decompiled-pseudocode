/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x18007F190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( !(unsigned int)sub_18007F3E0(a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    sub_1801058B8(v3, v2);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return sub_18007F1E0(a1);
}
