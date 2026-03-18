/*
 * XREFs of Normalization__NormalizeCharacter @ 0x14078A100
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x1407891D0 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x140789F5C (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x14028DB94 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x14028DBC4 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x14028DBF8 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x14028DC34 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x14028DD00 (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x14028DDA0 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x14028DE24 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x14028DEF0 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x14028DF78 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x14028DFA4 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x14028DFF0 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x14028E128 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14028E19C (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x14028E210 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1407891D0 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1407892E0 (Normalization__CanCombinableCharactersCombine.c)
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
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // dl
  __int16 *v20; // r8
  __int64 v21; // rcx
  int v22; // edx
  unsigned __int8 v23; // r15
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // dl
  bool v29; // zf
  int v30; // eax
  int CanCombinableCharactersCombine; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // r10
  char v35; // r9
  __int64 v36; // rax
  int StartBasePair; // eax
  char v38; // di
  char v39; // r8
  char v40; // di
  char v41; // al
  int StartBase; // eax
  char v43; // di
  char v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // al
  unsigned __int16 *v49; // r10
  __int64 v50; // rcx
  int v51; // esi
  __int64 v52; // rcx
  unsigned __int16 v53; // di
  __int64 v54; // rcx
  unsigned __int16 v55; // si
  int LastChar; // eax
  unsigned int v57; // r11d
  int v58; // eax
  int v59; // r11d
  unsigned __int16 *v60; // r8
  int v61; // edx
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned __int16 *v64; // r9
  __int64 v65; // r10

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
          v48 = NormBuffer__Append(a4, a2);
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
          v51 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0, 0) )
            return 3221225507LL;
          v53 = (a2 - 44032) % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v52, v53, 0, 0) )
            return 3221225507LL;
          v55 = (unsigned __int16)(v51 % 28) != 0 ? v51 % 28 + 4519 : 0;
          if ( v55 )
          {
            if ( !NormBuffer__AppendEx(v54, v55, 0, 0) )
              return 3221225507LL;
            v53 = v55;
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v53;
LABEL_109:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( !IsHangulLV(a2) )
          goto LABEL_26;
        v49 = *(unsigned __int16 **)(a4 + 16);
        if ( v49 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v50 = (unsigned int)a2;
        *(_QWORD *)(a4 + 16) = v49 + 1;
        goto LABEL_120;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v60 = *(unsigned __int16 **)(a4 + 16);
        if ( v60 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v61 = *v60;
        *(_QWORD *)(a4 + 16) = v60 + 1;
        v62 = ComposeHangulLV(a2, v61);
        if ( !v62 )
        {
          *(_QWORD *)(a4 + 16) = v63;
          goto LABEL_26;
        }
        a2 = v62;
        if ( v49 == v64 )
          goto LABEL_26;
        *(_QWORD *)(a4 + 16) = v49 + 1;
        v50 = v62;
LABEL_120:
        v58 = ComposeHangulLVT(v50, *v49);
        if ( v58 )
          goto LABEL_115;
        *(_QWORD *)(a4 + 16) = v65;
LABEL_26:
        v13 = NormBuffer__Append(a4, a2);
        return v13 == 0 ? 0xC0000023 : 0;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v58 = ComposeHangulLV(v59, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(LastChar) )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v58 = ComposeHangulLVT(v57, (unsigned int)a2);
LABEL_115:
        a2 = v58;
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
LABEL_20:
      v5 = -5;
    }
    v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
    if ( !v8 )
      goto LABEL_95;
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v10 != 63 )
      break;
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_95:
      v48 = NormBuffer__AppendEx(a4, a2, 0, 0);
LABEL_126:
      if ( !v48 )
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
LABEL_74:
      v22 = a2;
      v21 = a4;
LABEL_46:
      v13 = NormBuffer__AppendEx(v21, v22, v10, v9);
      return v13 == 0 ? 0xC0000023 : 0;
    }
    v11 = NormBuffer__GetLastChar(a4);
    if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
      goto LABEL_74;
    NormBuffer__RewindOutputCharacter(a4);
    a2 = v12;
LABEL_31:
    if ( !v5 )
      goto LABEL_26;
  }
  if ( (v8 & 0x80) == 0 )
  {
    if ( NormBuffer__AppendEx(a4, a2, v8 & 0x3F, v8 & 0xC0) )
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
  v18 = *(_BYTE *)(a4 + 72);
  if ( !v18 || v18 == 63 || (v19 = *(_BYTE *)(a4 + 73), (v19 & v17) == 0) )
  {
    v19 = *(_BYTE *)(a4 + 73);
    *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
    *(_BYTE *)(a4 + 92) = v18;
    *(_BYTE *)(a4 + 93) = v19;
    *(_QWORD *)(a4 + 96) = 0LL;
  }
  if ( v9 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(a4 + 92) | *(_BYTE *)(a4 + 93)) + 64) & v17) == 0 )
  {
    NormBuffer__IsBlocked((_QWORD *)a4, v10);
    goto LABEL_45;
  }
  if ( !v18 || v18 == 63 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v45;
      v46 = *(_QWORD *)(a1 + 40);
      v47 = (v45 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v45 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
      v9 = *(_BYTE *)(v47 + v46 - 128) & 0xC0;
      v10 = *(_BYTE *)(v47 + v46 - 128) & 0x3F;
    }
    goto LABEL_74;
  }
  if ( !v19 )
  {
LABEL_70:
    if ( v18 <= v10 )
      goto LABEL_74;
    if ( v18 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_74;
LABEL_77:
        StartBasePair = NormBuffer__LastStartBasePair(a4);
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
        if ( !CanCombinableCharactersCombine )
          goto LABEL_74;
        goto LABEL_78;
      }
    }
    else if ( v18 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_77;
    }
    StartBase = NormBuffer__LastStartBase(a4);
    v33 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
    if ( !v33 )
      goto LABEL_74;
    goto LABEL_84;
  }
  if ( v19 == 64 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      v35 = *(_BYTE *)((v34 & 0x7F)
                     + ((unsigned __int64)*(unsigned __int8 *)((v34 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                     + *(_QWORD *)(a1 + 40)
                     - 128);
      if ( NormBuffer__AppendEx(a4, v34, v35 & 0x3F, v35 & 0xC0) )
      {
        v36 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v36 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
    goto LABEL_70;
  }
  if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
    goto LABEL_45;
  v23 = *(_BYTE *)(a4 + 92);
  if ( v23 && v23 != 63 && *(_BYTE *)(a4 + 93) != 64 )
  {
LABEL_55:
    if ( v23 <= v10 )
      goto LABEL_45;
    if ( v23 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 == *(_BYTE *)(a1 + 115) )
          goto LABEL_62;
LABEL_45:
        v20 = *(__int16 **)(a4 + 104);
        v21 = a4;
        v22 = a2;
        if ( v20 == *(__int16 **)(a4 + 40) )
          goto LABEL_46;
        v13 = NormBuffer__Insert((_QWORD *)a4, a2, v20);
        return v13 == 0 ? 0xC0000023 : 0;
      }
    }
    else if ( v23 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
LABEL_62:
      v30 = NormBuffer__LastStartBasePair(a4);
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v30, a2);
      if ( CanCombinableCharactersCombine )
      {
LABEL_78:
        v38 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                               + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128);
        v39 = v38 & 0x3F;
        v40 = v38 & 0xC0;
        v41 = NormBuffer__ReplaceLastStartBasePair(a4, CanCombinableCharactersCombine, v39, v40);
        goto LABEL_79;
      }
      goto LABEL_45;
    }
    v32 = NormBuffer__LastStartBase(a4);
    v33 = Normalization__CanCombinableCharactersCombine(a1, v32, a2);
    if ( !v33 )
      goto LABEL_45;
LABEL_84:
    v43 = *(_BYTE *)((v33 & 0x7F)
                   + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                   + *(_QWORD *)(a1 + 40)
                   - 128);
    v44 = v43 & 0x3F;
    v40 = v43 & 0xC0;
    v41 = NormBuffer__ReplaceLastStartBase(a4, v33, v44, v40);
LABEL_79:
    if ( v41 )
    {
      v29 = v40 == 64;
      goto LABEL_81;
    }
    return 3221225507LL;
  }
  v24 = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
  v25 = v24;
  if ( !v24 )
  {
    if ( !v23 || v23 == 63 )
      goto LABEL_45;
    goto LABEL_55;
  }
  v26 = *(_QWORD *)(a1 + 32);
  v27 = *(_QWORD *)(a4 + 80);
  *(_DWORD *)(a4 + 88) = v25;
  v28 = *(_BYTE *)((v25 & 0x7F)
                 + ((unsigned __int64)*(unsigned __int8 *)((v25 >> 7) + v26) << 7)
                 + *(_QWORD *)(a1 + 40)
                 - 128);
  *(_WORD *)(v27 - 2) = v25;
  *(_BYTE *)(a4 + 93) = v28 & 0xC0;
  v29 = (v28 & 0xC0) == 64;
  *(_BYTE *)(a4 + 92) = v28 & 0x3F;
LABEL_81:
  if ( v29 )
    NormBuffer__RecheckStartCombinations(a4);
  return 0LL;
}
