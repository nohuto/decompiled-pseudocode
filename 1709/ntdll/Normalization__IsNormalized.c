/*
 * XREFs of Normalization__IsNormalized @ 0x180001944
 * Callers:
 *     RtlIsNormalizedString @ 0x1800018C0 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1800F8BCC (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F9450 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800F95BC (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800F9600 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x1800F96DC (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned __int16 *v5; // r13
  unsigned __int64 v7; // rdi
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r12
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // r14
  unsigned __int8 v20; // r12
  unsigned __int8 v21; // r14
  int CanCombinableCharactersCombine; // eax
  unsigned int v23; // eax
  int CanCombineWithStartFirstPair; // eax
  unsigned __int8 v25; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v26; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v27; // [rsp+32h] [rbp-1Eh]
  unsigned __int8 v28; // [rsp+33h] [rbp-1Dh]
  unsigned int v29; // [rsp+34h] [rbp-1Ch] BYREF
  int v30; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-14h]
  int v32; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 *v33; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v34; // [rsp+98h] [rbp+48h] BYREF
  int v35; // [rsp+A0h] [rbp+50h]

  v35 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v29 = 0;
  v25 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v27 = 0;
  v33 = a2 - 1;
  v31 = 0;
  v26 = 0;
  while ( 1 )
  {
    if ( a3 <= 0 )
      goto LABEL_6;
    v7 = *v5;
    if ( (int)v7 >= *(_DWORD *)(a1 + 28) )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_BYTE *)((v7 >> 7) + v9);
      if ( v10 )
      {
        if ( v10 != 0xFB || !*(_BYTE *)(a1 + 113) )
          break;
      }
    }
LABEL_5:
    ++v5;
    v35 = --a3;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v10;
        if ( !v10 )
          goto LABEL_97;
        v12 = v10 - 251;
        if ( !v12 )
          goto LABEL_96;
        v13 = v12 - 1;
        if ( !v13 )
          return 3221227287LL;
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_89;
        v15 = v14 - 1;
        if ( v15 )
          break;
        if ( a3 <= 1 )
          return 3221227287LL;
        ++v5;
        v35 = --a3;
        if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
          return 3221227287LL;
        LODWORD(v7) = *v5 + (((_DWORD)v7 - 55287) << 10);
        v10 = *(_BYTE *)(((__int64)(int)v7 >> 7) + v9);
      }
      if ( v15 != 1 )
      {
        v16 = *(_BYTE *)((v7 & 0x7F) + (v11 << 7) + *(_QWORD *)(a1 + 40) - 128);
        if ( v16 )
        {
          v17 = v16 & 0xC0;
          v28 = v16 & 0xC0;
          v18 = v16 & 0x3F;
          if ( (v16 & 0x3F) != 0 && v18 != 63 )
          {
LABEL_48:
            if ( (v16 & 0x80) != 0 )
            {
              Normalization__GetLastChar(
                a1,
                (_DWORD)v5,
                (unsigned int)&v33,
                (unsigned int)&v29,
                (__int64)&v25,
                (__int64)&v34);
              v19 = v25;
              if ( !v25 || v25 == 63 )
              {
                v31 = v29;
                v26 = v25;
                v27 = v34;
                if ( ((v34 - 64) & 0xBF) != 0 || v17 != 0xC0 )
                  goto LABEL_95;
                CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                                   a1,
                                                   v29,
                                                   (unsigned int)v7);
                goto LABEL_88;
              }
              v17 = v34;
              if ( (v34 & 0xBF) != 0 )
              {
                if ( v25 > v18 )
                {
                  *a4 = 0;
                  return 0LL;
                }
                if ( v28 != 0xC0 || v25 == v18 )
                  goto LABEL_95;
                v20 = v27;
                v21 = v26;
                if ( ((((v26 | v27) - 64) & 0xBF) == 0 || v27 == 64 && (!v26 || v26 == 63))
                  && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v31, (unsigned int)v7) )
                {
                  goto LABEL_89;
                }
                if ( v18 >= v21 || (v20 & 0xBF) != 0 || (unsigned __int8)(v21 - 1) > 0x3Du )
                  goto LABEL_95;
                if ( v21 == *(_BYTE *)(a1 + 116) )
                {
                  if ( v18 >= *(_BYTE *)(a1 + 114) )
                  {
                    if ( v18 != *(_BYTE *)(a1 + 115) )
                      goto LABEL_95;
                    goto LABEL_69;
                  }
                }
                else if ( v21 == *(_BYTE *)(a1 + 118) && v18 == *(_BYTE *)(a1 + 117) )
                {
LABEL_69:
                  CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(
                                                     a1,
                                                     (unsigned int)&v32,
                                                     (unsigned int)&v30,
                                                     v31,
                                                     v7);
                  goto LABEL_88;
                }
                CanCombinableCharactersCombine = Normalization__CanCombineWithStartBase(a1, &v30, v31, (unsigned int)v7);
LABEL_88:
                if ( CanCombinableCharactersCombine )
                  goto LABEL_89;
                goto LABEL_95;
              }
              v23 = v29;
              v31 = v29;
              v30 = 0;
              v32 = 0;
              if ( v28 != 0xC0 )
                goto LABEL_84;
              if ( v34 == 64 )
              {
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v29, (unsigned int)v7) )
                  goto LABEL_89;
                v23 = v31;
              }
              if ( v19 <= v18 )
                goto LABEL_84;
              if ( v19 == *(_BYTE *)(a1 + 116) )
              {
                if ( v18 >= *(_BYTE *)(a1 + 114) )
                {
                  if ( v18 != *(_BYTE *)(a1 + 115) )
                  {
LABEL_84:
                    v26 = v19;
LABEL_94:
                    v27 = v17;
LABEL_95:
                    a3 = v35;
                    v29 = v7;
                    v34 = v28;
                    v25 = v18;
LABEL_98:
                    v33 = v5;
                    goto LABEL_5;
                  }
                  goto LABEL_79;
                }
              }
              else if ( v19 == *(_BYTE *)(a1 + 118) && v18 == *(_BYTE *)(a1 + 117) )
              {
LABEL_79:
                CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(
                                                 a1,
                                                 (unsigned int)&v32,
                                                 (unsigned int)&v30,
                                                 v23,
                                                 v7);
                goto LABEL_83;
              }
              CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v30, v23, (unsigned int)v7);
LABEL_83:
              if ( CanCombineWithStartFirstPair )
                goto LABEL_89;
              goto LABEL_84;
            }
            v30 = 0;
LABEL_93:
            v31 = v7;
            v26 = v18;
            goto LABEL_94;
          }
          if ( v16 == 64 )
            goto LABEL_93;
          if ( v16 != 127 )
          {
            switch ( v16 )
            {
              case 0x80u:
                goto LABEL_93;
              case 0xBFu:
                goto LABEL_89;
              case 0xC0u:
                Normalization__GetLastChar(
                  a1,
                  (_DWORD)v5,
                  (unsigned int)&v33,
                  (unsigned int)&v29,
                  (__int64)&v25,
                  (__int64)&v34);
                if ( (v25 | v34) == 0x80
                  && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v29, (unsigned int)v7) )
                {
                  goto LABEL_89;
                }
                goto LABEL_93;
              case 0xFFu:
                if ( (_DWORD)v7 || a3 > 1 )
                  return 3221227287LL;
LABEL_6:
                *a4 = 1;
                return 0LL;
            }
            goto LABEL_48;
          }
LABEL_96:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
        }
LABEL_97:
        v34 = 0;
        v25 = 0;
        v29 = v7;
        goto LABEL_98;
      }
      if ( (int)v7 >= 44032 )
        break;
      if ( a3 > 1 )
      {
        if ( (unsigned __int8)CanComposeHangul((unsigned int)v7, v5[1]) )
          goto LABEL_89;
        a3 = v35;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v7 - 4447) > 1 )
        goto LABEL_28;
LABEL_22:
      v10 = -5;
    }
    if ( (int)v7 < 55204 )
      break;
    if ( (unsigned int)(v7 - 55216) > 0x16 && (unsigned int)(v7 - 55243) > 0x30 )
      goto LABEL_22;
LABEL_28:
    v10 = 0;
  }
  if ( *(_BYTE *)(a1 + 112) != 1 )
  {
    if ( a3 <= 1 )
      goto LABEL_97;
    if ( !(unsigned __int8)CanComposeHangul((unsigned int)v7, v5[1]) )
    {
      a3 = v35;
      goto LABEL_97;
    }
  }
LABEL_89:
  *a4 = 0;
  return 0LL;
}
