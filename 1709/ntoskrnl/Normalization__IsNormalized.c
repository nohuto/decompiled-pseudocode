/*
 * XREFs of Normalization__IsNormalized @ 0x140725F14
 * Callers:
 *     RtlIsNormalizedString @ 0x140727000 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x140255A80 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x140725970 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x140725AE0 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x140725B2C (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x140725C4C (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned __int16 *v5; // r13
  int v8; // eax
  int v9; // edi
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // r12
  unsigned __int8 v19; // r15
  unsigned __int8 v20; // r14
  unsigned __int8 v21; // r12
  unsigned __int8 v22; // r14
  int CanCombinableCharactersCombine; // eax
  unsigned int v24; // eax
  int CanCombineWithStartFirstPair; // eax
  unsigned __int8 v26; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v27; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v28; // [rsp+32h] [rbp-1Eh]
  unsigned __int8 v29; // [rsp+33h] [rbp-1Dh]
  int v30; // [rsp+34h] [rbp-1Ch] BYREF
  int v31; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v32; // [rsp+3Ch] [rbp-14h]
  int v33; // [rsp+40h] [rbp-10h]
  int v34; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int16 *v35; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v36; // [rsp+98h] [rbp+48h] BYREF
  int v37; // [rsp+A0h] [rbp+50h]

  v37 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v30 = 0;
  v26 = 0;
  v31 = 0;
  v34 = 0;
  v36 = 0;
  v35 = a2 - 1;
  v32 = 0;
  v27 = 0;
  v28 = 0;
  if ( a3 <= 0 )
    goto LABEL_95;
  v8 = *(_DWORD *)(a1 + 28);
  v33 = v8;
  while ( 1 )
  {
    v9 = *v5;
    if ( v9 >= v8 )
      break;
LABEL_94:
    --a3;
    ++v5;
    v37 = a3;
    if ( a3 <= 0 )
      goto LABEL_95;
  }
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_BYTE *)(((unsigned __int64)*v5 >> 7) + v10);
  if ( !v11 || v11 == 0xFB && *(_BYTE *)(a1 + 113) )
  {
LABEL_93:
    v8 = v33;
    goto LABEL_94;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v11;
      if ( !v11 )
        goto LABEL_91;
      v13 = v11 - 251;
      if ( !v13 )
        goto LABEL_90;
      v14 = v13 - 1;
      if ( !v14 )
        return 3221227287LL;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_83;
      v16 = v15 - 1;
      if ( v16 )
        break;
      if ( a3 <= 1 )
        return 3221227287LL;
      ++v5;
      v37 = --a3;
      if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
        return 3221227287LL;
      v9 = *v5 + ((v9 - 55287) << 10);
      v11 = *(_BYTE *)(((__int64)v9 >> 7) + v10);
    }
    if ( v16 != 1 )
      break;
    if ( v9 < 44032 )
    {
      if ( a3 > 1 )
      {
        if ( CanComposeHangul((unsigned int)v9, v5[1]) )
          goto LABEL_83;
        a3 = v37;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) == 0 && (unsigned int)(v9 - 4447) <= 1 )
        goto LABEL_19;
LABEL_25:
      v11 = 0;
    }
    else
    {
      if ( v9 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( a3 <= 1 )
            goto LABEL_91;
          if ( !CanComposeHangul((unsigned int)v9, v5[1]) )
          {
            a3 = v37;
            goto LABEL_91;
          }
        }
LABEL_83:
        *a4 = 0;
        return 0LL;
      }
      if ( (unsigned int)(v9 - 55216) <= 0x16 || (unsigned int)(v9 - 55243) <= 0x30 )
        goto LABEL_25;
LABEL_19:
      v11 = -5;
    }
  }
  v17 = *(_BYTE *)((v9 & 0x7F) + (v12 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v17 )
    goto LABEL_91;
  v18 = v17 & 0xC0;
  v29 = v17 & 0xC0;
  v19 = v17 & 0x3F;
  if ( (v17 & 0x3F) != 0 && v19 != 63 )
  {
LABEL_42:
    if ( (v17 & 0x80) == 0 )
    {
      v31 = 0;
LABEL_87:
      v32 = v9;
      v27 = v19;
      goto LABEL_88;
    }
    Normalization__GetLastChar(a1, (__int64)v5, &v35, (unsigned int *)&v30, &v26, &v36);
    v20 = v26;
    if ( !v26 || v26 == 63 )
    {
      v32 = v30;
      v27 = v26;
      v28 = v36;
      if ( ((v36 - 64) & 0xBF) != 0 || v18 != 0xC0 )
        goto LABEL_89;
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v30, v9);
      goto LABEL_82;
    }
    v18 = v36;
    if ( (v36 & 0xBF) != 0 )
    {
      if ( v26 > v19 )
      {
        *a4 = 0;
        return 0LL;
      }
      if ( v29 != 0xC0 || v26 == v19 )
        goto LABEL_89;
      v21 = v28;
      v22 = v27;
      if ( ((((v27 | v28) - 64) & 0xBF) == 0 || v28 == 64 && (!v27 || v27 == 63))
        && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v32, v9) )
      {
        goto LABEL_83;
      }
      if ( v19 >= v22 || (v21 & 0xBF) != 0 || (unsigned __int8)(v22 - 1) > 0x3Du )
        goto LABEL_89;
      if ( v22 == *(_BYTE *)(a1 + 116) )
      {
        if ( v19 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v19 != *(_BYTE *)(a1 + 115) )
          {
LABEL_89:
            a3 = v37;
            v30 = v9;
            v36 = v29;
            v26 = v19;
LABEL_92:
            v35 = v5;
            goto LABEL_93;
          }
          goto LABEL_63;
        }
      }
      else if ( v22 == *(_BYTE *)(a1 + 118) && v19 == *(_BYTE *)(a1 + 117) )
      {
LABEL_63:
        CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(a1, &v34, &v31, v32, v9);
        goto LABEL_82;
      }
      CanCombinableCharactersCombine = Normalization__CanCombineWithStartBase(a1, &v31, v32, v9);
LABEL_82:
      if ( CanCombinableCharactersCombine )
        goto LABEL_83;
      goto LABEL_89;
    }
    v24 = v30;
    v32 = v30;
    v31 = 0;
    v34 = 0;
    if ( v29 != 0xC0 )
      goto LABEL_78;
    if ( v36 == 64 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v30, v9) )
        goto LABEL_83;
      v24 = v32;
    }
    if ( v20 <= v19 )
      goto LABEL_78;
    if ( v20 == *(_BYTE *)(a1 + 116) )
    {
      if ( v19 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v19 == *(_BYTE *)(a1 + 115) )
        {
LABEL_73:
          CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v34, &v31, v24, v9);
          goto LABEL_77;
        }
LABEL_78:
        v27 = v20;
LABEL_88:
        v28 = v18;
        goto LABEL_89;
      }
    }
    else if ( v20 == *(_BYTE *)(a1 + 118) && v19 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_73;
    }
    CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v31, v24, v9);
LABEL_77:
    if ( CanCombineWithStartFirstPair )
      goto LABEL_83;
    goto LABEL_78;
  }
  switch ( v17 )
  {
    case 0x40u:
      goto LABEL_87;
    case 0x7Fu:
LABEL_90:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_91:
      v30 = v9;
      v26 = 0;
      v36 = 0;
      goto LABEL_92;
    case 0x80u:
      goto LABEL_87;
    case 0xBFu:
      goto LABEL_83;
    case 0xC0u:
      Normalization__GetLastChar(a1, (__int64)v5, &v35, (unsigned int *)&v30, &v26, &v36);
      if ( (v26 | v36) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v30, v9) )
        goto LABEL_83;
      goto LABEL_87;
  }
  if ( v17 != 255 )
    goto LABEL_42;
  if ( !v9 && a3 <= 1 )
  {
LABEL_95:
    *a4 = 1;
    return 0LL;
  }
  return 3221227287LL;
}
