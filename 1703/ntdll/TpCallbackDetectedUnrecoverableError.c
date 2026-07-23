/*
 * XREFs of TpCallbackDetectedUnrecoverableError @ 0x180105670
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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
    sub_1801058B8(0LL);
    return 3221225485LL;
  }
  return result;
}
