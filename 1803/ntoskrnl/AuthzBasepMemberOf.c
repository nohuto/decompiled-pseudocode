/*
 * XREFs of AuthzBasepMemberOf @ 0x1402C4330
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepGetNextValue @ 0x14004493C (AuthzBasepGetNextValue.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v10; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  char v14; // al
  _BYTE v16[24]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-A0h]
  void *Src; // [rsp+60h] [rbp-98h]
  _BYTE v19[80]; // [rsp+70h] [rbp-88h] BYREF

  v10 = a5 != 0;
  *a6 = 0;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)v16);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = v17;
    if ( v17 >= 0x44 )
      v13 = 68LL;
    memmove(v19, Src, v13);
    v14 = SepSidInToken(a2, 0LL, v19, a3, a4, 0, 0);
    if ( a5 )
    {
      v10 &= v14;
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 |= v14;
      if ( v10 )
        goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  if ( v12 >= 0 )
    *a6 = v10;
  return (unsigned int)v12;
}
