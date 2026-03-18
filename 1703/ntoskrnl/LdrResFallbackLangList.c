/*
 * XREFs of LdrResFallbackLangList @ 0x140429D14
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x140136BB0 (LdrpGetParentLangId.c)
 */

__int64 __fastcall LdrResFallbackLangList(__int64 a1, __int64 a2, unsigned __int16 a3, char a4, _WORD *a5)
{
  _WORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v9; // rcx
  unsigned __int16 v10; // r11
  int v11; // r10d
  unsigned __int16 v12; // r14
  int v13; // r15d
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v22; // edx
  unsigned __int16 v23; // r9
  unsigned int i; // r8d
  __int64 v25; // [rsp+58h] [rbp+38h] BYREF

  v25 = a2;
  v5 = a5;
  v6 = 0;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v9 = (unsigned __int16)v25;
  v10 = PsMachineUILanguageId;
  v11 = 0;
  v12 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  v13 = PsDefaultSystemLocaleId;
  *a5 = 0;
  *((_BYTE *)v5 + 516) = 0;
  while ( 1 )
  {
    v14 = v11;
    v15 = v11++;
    if ( v14 )
      break;
    v9 = a3;
    v22 = 1;
LABEL_14:
    LOWORD(v25) = v9;
LABEL_15:
    if ( (_WORD)v9 != 0xEEEE )
    {
LABEL_16:
      v23 = *v5;
      for ( i = 0; i < v23; ++i )
      {
        if ( v5[4 * i + 2] == (_WORD)v9 )
          break;
      }
      if ( i >= v23 )
      {
        if ( v23 >= 0x40u )
          return v6;
        v5[4 * v23 + 2] = v9;
        *(_DWORD *)&v5[4 * (unsigned __int16)(*v5)++ + 4] = v22;
      }
    }
  }
  v16 = v14 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
              return v6;
            v9 = 4660LL;
            v22 = 9;
            LOWORD(v25) = 4660;
          }
          else
          {
            v9 = 1033LL;
            v22 = 8;
            LOWORD(v25) = 1033;
          }
          goto LABEL_16;
        }
        v9 = (unsigned __int16)v13;
        if ( !v13 )
          v9 = 61166LL;
        v22 = 7;
      }
      else
      {
        v9 = v12;
        if ( !v12 )
          v9 = 61166LL;
        v22 = 6;
      }
    }
    else
    {
      v9 = v10;
      if ( !v10 )
        v9 = 61166LL;
      v22 = 5;
    }
    goto LABEL_14;
  }
  if ( (a4 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(v9, &v25) >= 0 )
      {
        v9 = (unsigned __int16)v25;
      }
      else
      {
        v9 = 0LL;
        LOWORD(v25) = 0;
      }
      v10 = PsMachineUILanguageId;
      v12 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      v13 = PsDefaultSystemLocaleId;
      v11 = v15;
      if ( !(_WORD)v9 )
        v11 = -1;
    }
    else
    {
      v9 = 61166LL;
      LOWORD(v25) = -4370;
    }
    v22 = 2;
    goto LABEL_15;
  }
  *((_BYTE *)v5 + 516) = 1;
  return v6;
}
