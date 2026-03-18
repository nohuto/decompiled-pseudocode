/*
 * XREFs of CmpGetBiosVersion @ 0x14083B7EC
 * Callers:
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strstr @ 0x14015E110 (strstr.c)
 */

char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // rbx
  char *p_Str; // rdi
  unsigned __int16 v7; // cx
  char *v8; // rbx
  char v9; // al
  char *v10; // rbx
  __int16 v11; // si
  char **v12; // rax
  unsigned __int16 i; // dx
  char v14; // r8
  __int64 v15; // rcx
  char result; // al
  char Str; // [rsp+9Fh] [rbp-39h] BYREF

  if ( a1 )
  {
    BiosBegin = a1;
    Start = a1 + 1;
    End = a2 + a1 - 2;
  }
  do
  {
LABEL_3:
    v4 = (_BYTE *)Start;
    v5 = 0LL;
    if ( Start > (unsigned __int64)End )
      return 0;
    while ( *v4 != 46 || (unsigned __int8)(v4[1] - 48) > 9u || (unsigned __int8)(*(v4 - 1) - 48) > 9u )
    {
      Start = (__int64)++v4;
      if ( (unsigned __int64)v4 > End )
        goto LABEL_10;
    }
    v5 = v4;
LABEL_10:
    if ( (unsigned __int64)v4 > End )
      return 0;
    Str = 0;
    Start = (__int64)(v4 + 2);
    p_Str = &Str;
    v7 = 0;
    v8 = v5 - 1;
    do
    {
      if ( (unsigned __int64)v8 < BiosBegin )
        break;
      v9 = *v8;
      if ( *v8 < 32 )
        break;
      if ( v9 == 36 )
        break;
      --p_Str;
      --v8;
      ++v7;
      *p_Str = v9;
    }
    while ( v7 < 0x78u );
    v10 = v8 + 1;
    v11 = 0;
  }
  while ( !SearchStrings[0] );
  v12 = SearchStrings;
  while ( !strstr(p_Str, *v12) )
  {
    v12 = &SearchStrings[(unsigned __int16)++v11];
    if ( !*v12 )
      goto LABEL_3;
  }
  for ( ; v10; ++v10 )
  {
    if ( *v10 != 32 )
      break;
  }
  for ( i = 0; i < 0x7Fu; ++i )
  {
    if ( !v10 )
      break;
    if ( (unsigned __int64)v10 > End + 1 )
      break;
    v14 = *v10;
    if ( *v10 < 32 )
      break;
    if ( v14 == 36 )
      break;
    v15 = i;
    ++v10;
    *(_BYTE *)(v15 + a3) = v14;
  }
  result = 1;
  *(_BYTE *)(i + a3) = 0;
  return result;
}
