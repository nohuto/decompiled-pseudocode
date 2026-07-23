/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x180082E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180082E68 @ 0x180082E68 (sub_180082E68.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = sub_180082E68(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    sub_1801058B8(a1);
    return 3221225485LL;
  }
  return result;
}
