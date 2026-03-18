/*
 * XREFs of ExpTranslateHexStringToGUID @ 0x1407C1EB4
 * Callers:
 *     ExpParseSignatureName @ 0x1407C06C0 (ExpParseSignatureName.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     towlower @ 0x14018A470 (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToGUID(wint_t *a1, _OWORD *a2)
{
  __int64 v2; // rax
  wint_t *v4; // r14
  int v5; // ebx
  __int16 v6; // bp
  unsigned __int16 v7; // di
  int v8; // esi
  unsigned int i; // r15d
  wint_t v10; // dx
  int v11; // ebx
  __int64 v12; // rax
  __int16 v13; // ax
  unsigned __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // ax
  char v17; // cl
  unsigned __int16 v18; // di
  __int16 v19; // ax
  unsigned __int16 v20; // ax
  char v21; // cl
  __int64 result; // rax
  __int128 v23; // [rsp+20h] [rbp-58h]

  v2 = -1LL;
  v4 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (_DWORD)v2 != 32 )
    return 3221225485LL;
  v5 = 0;
  v23 = 0uLL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v10 = towlower(*v4);
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 97) > 5u )
        return 3221225485LL;
      v11 = 16 * v5 - 87;
    }
    else
    {
      v11 = 16 * v5 - 48;
    }
    v5 = v10 + v11;
    if ( (i & 1) != 0 )
    {
      if ( v6 )
      {
        switch ( v6 )
        {
          case 1:
            v17 = 8 * v7;
            v18 = v7 + 1;
            v8 += v5 << v17;
            if ( v18 == 2 )
            {
              WORD2(v23) = v8;
              v8 = 0;
            }
            v19 = v6 + 1;
            if ( v18 != 2 )
              v19 = v6;
            v6 = v19;
            v20 = 0;
            if ( v18 != 2 )
              v20 = v18;
            v7 = v20;
            break;
          case 2:
            v14 = v7 + 1;
            v8 += v5 << (8 * v7);
            v15 = v7 + 1;
            if ( v7 == 1 )
            {
              WORD3(v23) = v8;
              v8 = 0;
            }
            v16 = v6 + 1;
            v7 = 0;
            if ( v15 != 2 )
            {
              v16 = v6;
              v7 = v14;
            }
            v6 = v16;
            break;
          case 3:
            v12 = v7++;
            *((_BYTE *)&v23 + v12 + 8) = v5;
            v13 = v6 + 1;
            if ( v7 != 8 )
              v13 = v6;
            v6 = v13;
            break;
          default:
            return 3221225485LL;
        }
      }
      else
      {
        v21 = v7++;
        v8 += v5 << (8 * v21);
        if ( v7 == 4 )
        {
          LODWORD(v23) = v8;
          v6 = 1;
          v8 = 0;
          v7 = 0;
        }
      }
      v5 = 0;
    }
    ++v4;
  }
  result = 0LL;
  *a2 = v23;
  return result;
}
