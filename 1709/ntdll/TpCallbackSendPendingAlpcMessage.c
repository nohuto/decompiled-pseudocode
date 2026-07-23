/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x18010AD00
 * Callers:
 *     <none>
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008662C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    TppRaiseInvalidParameter(a1);
    return 3221225485LL;
  }
  return result;
}
