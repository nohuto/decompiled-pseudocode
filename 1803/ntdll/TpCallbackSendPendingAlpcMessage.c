/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x1801084F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080944 @ 0x180080944 (sub_180080944.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = sub_180080944(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    sub_1801086C8(a1, a2, a3);
    return 3221225485LL;
  }
  return result;
}
