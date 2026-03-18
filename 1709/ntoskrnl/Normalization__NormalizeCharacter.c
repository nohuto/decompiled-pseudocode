/*
 * XREFs of Normalization__NormalizeCharacter @ 0x140726788
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x140725860 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x1407265D8 (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x140255AC4 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x140255AF4 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x140255B28 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x140255B64 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x140255C2C (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x140255CC4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x140255D50 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x140255E20 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x140255EA8 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x140255ED8 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140255F28 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x140256064 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1402560D8 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x14025614C (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x140725860 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x140725970 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  char v13; // al
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // dx
  unsigned __int8 v17; // r15
  char v18; // dl
  __int16 *v19; // r8
  __int64 v20; // rcx
  int v21; // edx
  unsigned __int8 v22; // r15
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // dl
  bool v28; // zf
  int v29; // eax
  int CanCombinableCharactersCombine; // r10d
  int v31; // eax
  int v32; // eax
  __int64 v33; // r10
  __int64 v34; // rax
  int StartBasePair; // eax
  __int64 v36; // rax
  char v37; // di
  char v38; // al
  int StartBase; // eax
  char v40; // di
  char v41; // r8
  __int64 v42; // r9
  char v43; // al
  unsigned __int16 *v44; // rax
  __int64 v45; // rdx
  unsigned __int16 *v46; // r10
  __int64 v47; // rcx
  unsigned __int16 *v48; // rax
  int v49; // esi
  __int64 v50; // rcx
  unsigned __int16 v51; // di
  __int64 v52; // rcx
  unsigned __int16 v53; // si
  int LastChar; // eax
  unsigned int v55; // r9d
  int v56; // eax
  int v57; // r9d
  unsigned __int16 *v58; // rax
  int v59; // edx
  unsigned int v60; // eax
  unsigned __int16 *v61; // r8
  unsigned __int16 *v62; // r9
  __int64 v63; // r10

  v5 = a3;
  if ( !a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_125;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_125:
          v43 = NormBuffer__Append(a4, a2);
          goto LABEL_126;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
        case 0xFEu:
          v15 = *(unsigned __int16 **)(a4 + 16);
          if ( v15 == *(unsigned __int16 **)(a4 + 8) )
            return 3221227287LL;
          v16 = *v15;
          *(_QWORD *)(a4 + 16) = v15 + 1;
          if ( (unsigned __int16)(v16 + 9216) > 0x3FFu )
            return 3221227287LL;
          a2 = v16 + ((a2 - 55287) << 10);
          v5 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
          goto LABEL_31;
      }
      if ( v5 != 255 )
        break;
      if ( a2 >= 44032 )
      {
        if ( a2 >= 55204 )
        {
          if ( (unsigned int)(a2 - 55216) <= 0x16 || (unsigned int)(a2 - 55243) <= 0x30 )
            goto LABEL_26;
          goto LABEL_20;
        }
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v49 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0) )
            return 3221225507LL;
          v51 = (a2 - 44032) % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v50, v51, 0) )
            return 3221225507LL;
          v53 = (unsigned __int16)(v49 % 28) != 0 ? v49 % 28 + 4519 : 0;
          if ( v53 )
          {
            if ( !NormBuffer__AppendEx(v52, v53, 0) )
              return 3221225507LL;
            v51 = v53;
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v51;
LABEL_109:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( !IsHangulLV(a2) || (v44 = *(unsigned __int16 **)(a4 + 16), v44 == *(unsigned __int16 **)(a4 + 8)) )
        {
LABEL_26:
          v13 = NormBuffer__Append(a4, a2);
          return v13 == 0 ? 0xC0000023 : 0;
        }
        v45 = *v44;
        v46 = v44 + 1;
        v47 = (unsigned int)a2;
        goto LABEL_120;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v58 = *(unsigned __int16 **)(a4 + 16);
        if ( v58 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v59 = *v58;
        *(_QWORD *)(a4 + 16) = v58 + 1;
        v60 = ComposeHangulLV(a2, v59);
        if ( !v60 )
        {
          v48 = v61 - 1;
LABEL_101:
          *(_QWORD *)(a4 + 16) = v48;
          goto LABEL_26;
        }
        a2 = v60;
        if ( v61 == v62 )
          goto LABEL_26;
        v45 = *v61;
        v46 = v61 + 1;
        v47 = v60;
LABEL_120:
        *(_QWORD *)(a4 + 16) = v46;
        v56 = ComposeHangulLVT(v47, v45);
        if ( v56 )
          goto LABEL_115;
        v48 = (unsigned __int16 *)(v63 - 2);
        goto LABEL_101;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v56 = ComposeHangulLV(v57, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(LastChar) )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v56 = ComposeHangulLVT(v55, (unsigned int)a2);
LABEL_115:
        a2 = v56;
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
LABEL_20:
      v5 = -5;
    }
    v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
    if ( !v8 )
      goto LABEL_94;
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v10 != 63 )
      break;
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_94:
      v43 = NormBuffer__AppendEx(a4, a2, 0);
LABEL_126:
      if ( !v43 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      goto LABEL_109;
    }
    if ( v8 == 191 )
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    if ( v8 != 192 )
    {
      if ( v8 == 255 && (a2 || *(_QWORD *)(a4 + 16) != *(_QWORD *)(a4 + 8)) )
        return 3221227287LL;
LABEL_73:
      v21 = a2;
      v20 = a4;
LABEL_46:
      v13 = NormBuffer__AppendEx(v20, v21, v10);
      return v13 == 0 ? 0xC0000023 : 0;
    }
    v11 = NormBuffer__GetLastChar(a4);
    if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
      goto LABEL_73;
    NormBuffer__RewindOutputCharacter(a4);
    a2 = v12;
LABEL_31:
    if ( !v5 )
      goto LABEL_26;
  }
  if ( (v8 & 0x80) == 0 )
  {
    if ( NormBuffer__AppendEx(a4, a2, v8 & 0x3F) )
    {
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      *(_BYTE *)(a4 + 92) = v10;
      *(_BYTE *)(a4 + 93) = v9;
      return 0LL;
    }
    return 3221225507LL;
  }
  NormBuffer__GetLastChar(a4);
  v17 = *(_BYTE *)(a4 + 72);
  if ( !v17 || v17 == 63 || (v18 = *(_BYTE *)(a4 + 73), (v18 & 0xBF) == 0) )
  {
    v18 = *(_BYTE *)(a4 + 73);
    *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
    *(_BYTE *)(a4 + 92) = v17;
    *(_BYTE *)(a4 + 93) = v18;
    *(_QWORD *)(a4 + 96) = 0LL;
  }
  if ( v9 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
  {
    NormBuffer__IsBlocked((_QWORD *)a4, v10);
    goto LABEL_45;
  }
  if ( !v17 || v17 == 63 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v42;
      v10 = *(_BYTE *)((v42 & 0x7F)
                     + ((unsigned __int64)*(unsigned __int8 *)((v42 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                     + *(_QWORD *)(a1 + 40)
                     - 128) & 0x3F;
    }
    goto LABEL_73;
  }
  if ( !v18 )
  {
LABEL_69:
    if ( v17 <= v10 )
      goto LABEL_73;
    if ( v17 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_73;
LABEL_76:
        StartBasePair = NormBuffer__LastStartBasePair(a4);
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
        if ( !CanCombinableCharactersCombine )
          goto LABEL_73;
        goto LABEL_77;
      }
    }
    else if ( v17 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_76;
    }
    StartBase = NormBuffer__LastStartBase(a4);
    v32 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
    if ( !v32 )
      goto LABEL_73;
    goto LABEL_83;
  }
  if ( v18 == 64 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      if ( NormBuffer__AppendEx(
             a4,
             v33,
             *(_BYTE *)((v33 & 0x7F)
                      + ((unsigned __int64)*(unsigned __int8 *)((v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                      + *(_QWORD *)(a1 + 40)
                      - 128) & 0x3F) )
      {
        v34 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v34 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
    goto LABEL_69;
  }
  if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
    goto LABEL_45;
  v22 = *(_BYTE *)(a4 + 92);
  if ( v22 && v22 != 63 && *(_BYTE *)(a4 + 93) != 64 )
  {
LABEL_55:
    if ( v22 <= v10 )
      goto LABEL_45;
    if ( v22 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 == *(_BYTE *)(a1 + 115) )
          goto LABEL_62;
LABEL_45:
        v19 = *(__int16 **)(a4 + 104);
        v20 = a4;
        v21 = a2;
        if ( v19 == *(__int16 **)(a4 + 40) )
          goto LABEL_46;
        v13 = NormBuffer__Insert((_QWORD *)a4, a2, v19);
        return v13 == 0 ? 0xC0000023 : 0;
      }
    }
    else if ( v22 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
LABEL_62:
      v29 = NormBuffer__LastStartBasePair(a4);
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v29, a2);
      if ( CanCombinableCharactersCombine )
      {
LABEL_77:
        v36 = *(_QWORD *)(a1 + 40);
        v37 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                               + *(_QWORD *)(a1 + 32)) << 7)
                       + v36
                       - 128) & 0xC0;
        v38 = NormBuffer__ReplaceLastStartBasePair(
                a4,
                CanCombinableCharactersCombine,
                *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                                 + *(_QWORD *)(a1 + 32)) << 7)
                         + v36
                         - 128) & 0x3F,
                v37);
        goto LABEL_78;
      }
      goto LABEL_45;
    }
    v31 = NormBuffer__LastStartBase(a4);
    v32 = Normalization__CanCombinableCharactersCombine(a1, v31, a2);
    if ( !v32 )
      goto LABEL_45;
LABEL_83:
    v40 = *(_BYTE *)((v32 & 0x7F)
                   + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v32 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                   + *(_QWORD *)(a1 + 40)
                   - 128);
    v41 = v40 & 0x3F;
    v37 = v40 & 0xC0;
    v38 = NormBuffer__ReplaceLastStartBase(a4, v32, v41, v37);
LABEL_78:
    if ( v38 )
    {
      v28 = v37 == 64;
      goto LABEL_80;
    }
    return 3221225507LL;
  }
  v23 = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
  v24 = v23;
  if ( !v23 )
  {
    if ( !v22 || v22 == 63 )
      goto LABEL_45;
    goto LABEL_55;
  }
  v25 = *(_QWORD *)(a1 + 32);
  v26 = *(_QWORD *)(a4 + 80);
  *(_DWORD *)(a4 + 88) = v24;
  v27 = *(_BYTE *)((v24 & 0x7F)
                 + ((unsigned __int64)*(unsigned __int8 *)((v24 >> 7) + v25) << 7)
                 + *(_QWORD *)(a1 + 40)
                 - 128);
  *(_WORD *)(v26 - 2) = v24;
  *(_BYTE *)(a4 + 93) = v27 & 0xC0;
  v28 = (v27 & 0xC0) == 64;
  *(_BYTE *)(a4 + 92) = v27 & 0x3F;
LABEL_80:
  if ( v28 )
    NormBuffer__RecheckStartCombinations(a4);
  return 0LL;
}
