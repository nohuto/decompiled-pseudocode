/*
 * XREFs of TpCallbackDetectedUnrecoverableError @ 0x180108440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpCallbackDetectedUnrecoverableError(__int64 a1, __int64 a2, __int64 a3)
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
    sub_1801086C8(0LL, a2, a3);
    return 3221225485LL;
  }
  return result;
}
