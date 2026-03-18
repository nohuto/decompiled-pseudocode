/*
 * XREFs of IsKeyStateCached @ 0x1C00505F0
 * Callers:
 *     NtUserGetKeyboardState @ 0x1C0050280 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C0050420 (NtUserGetKeyState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsKeyStateCached(int a1)
{
  int v1; // edx
  unsigned __int8 *i; // rax

  v1 = 0;
  if ( a1 >= 32 )
  {
    for ( i = byte_1C02E2010; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 <= 165 && (a1 < 93 || a1 >= 160) && a1 >= 91 && (a1 <= 92 || (unsigned int)(a1 - 160) <= 5);
    }
  }
  return 1LL;
}
