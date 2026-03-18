/*
 * XREFs of _GetAsyncKeyState @ 0x1C004E6C0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C004E480 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int64 v1; // r9
  __int16 v2; // bx
  unsigned int v3; // r10d
  int v4; // eax
  __int16 result; // ax

  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v1 = (unsigned __int64)(unsigned __int8)a1 >> 3;
    v2 = 0;
    v3 = a1 & 7;
    v4 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v1);
    if ( _bittest(&v4, v3) )
    {
      v2 = 1;
      *((_BYTE *)&gafAsyncKeyStateRecentDown + v1) = v4 & ~(1 << v3);
    }
    result = v2 | 0x8000;
    if ( (*((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)a1 >> 2)) & (unsigned __int8)(1 << (2 * (a1 & 3)))) == 0 )
      return v2;
  }
  return result;
}
