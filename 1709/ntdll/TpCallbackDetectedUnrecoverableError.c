/*
 * XREFs of TpCallbackDetectedUnrecoverableError @ 0x18010AC50
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackDetectedUnrecoverableError(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_BYTE *)(a1 + 76) |= 4u;
    result = 0LL;
    *(_DWORD *)(a1 + 104) = 220;
  }
  else
  {
    TppRaiseInvalidParameter(0LL);
    return 3221225485LL;
  }
  return result;
}
