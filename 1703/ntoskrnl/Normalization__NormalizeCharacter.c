/*
 * XREFs of Normalization__NormalizeCharacter @ 0x1406EE17C
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x1406ED278 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x1406EDFCC (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x14023F7A8 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x14023F7D8 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x14023F80C (IsHangulLV.c)
 *     NormBuffer__Append @ 0x14023F848 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x14023F910 (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x14023F9A8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x14023FA34 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x14023FB08 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x14023FB90 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x14023FBC0 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x14023FC10 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x14023FD4C (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14023FDC4 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x14023FE38 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1406ED278 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1406ED384 (Normalization__CanCombinableCharactersCombine.c)
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
  unsigned __int16 *v15; // rax
  unsigned __int16 v16; // cx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // dl
  __int16 *v20; // r8
  __int64 v21; // rcx
  int v22; // edx
  unsigned __int8 v23; // r15
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // dl
  __int64 v29; // rax
  bool v30; // zf
  int v31; // eax
  int CanCombinableCharactersCombine; // r10d
  int v33; // eax
  int v34; // eax
  __int64 v35; // r10
  __int64 v36; // r10
  __int64 v37; // rax
  int StartBasePair; // eax
  __int64 v39; // rax
  char v40; // di
  char v41; // al
  int StartBase; // eax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r9
  char v46; // al
  unsigned __int16 *v47; // rcx
  __int64 v48; // rdx
  unsigned __int16 *v49; // r10
  __int64 v50; // rcx
  unsigned __int16 *v51; // rax
  int v52; // esi
  __int64 v53; // rcx
  unsigned __int16 v54; // di
  __int64 v55; // rcx
  unsigned __int16 v56; // si
  int LastChar; // eax
  unsigned int v58; // r11d
  int v59; // eax
  int v60; // r11d
  unsigned __int16 *v61; // r8
  int v62; // edx
  unsigned int v63; // eax
  unsigned __int16 *v64; // r8
  unsigned __int16 *v65; // r9
  __int64 v66; // r10

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
          v46 = NormBuffer__Append(a4, a2);
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
          v52 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((a2 - 44032) / 588 + 4352), 0) )
            return 3221225507LL;
          v54 = (a2 - 44032) % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v53, v54, 0) )
            return 3221225507LL;
          v56 = (unsigned __int16)(v52 % 28) != 0 ? v52 % 28 + 4519 : 0;
          if ( v56 )
          {
            if ( !NormBuffer__AppendEx(v55, v56, 0) )
              return 3221225507LL;
            v54 = v56;
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v54;
LABEL_109:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( !IsHangulLV(a2) || (v47 = *(unsigned __int16 **)(a4 + 16), v47 == *(unsigned __int16 **)(a4 + 8)) )
        {
LABEL_26:
          v13 = NormBuffer__Append(a4, a2);
          return v13 == 0 ? 0xC0000023 : 0;
        }
        v48 = *v47;
        v49 = v47 + 1;
        v50 = (unsigned int)a2;
        goto LABEL_120;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v61 = *(unsigned __int16 **)(a4 + 16);
        if ( v61 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v62 = *v61;
        *(_QWORD *)(a4 + 16) = v61 + 1;
        v63 = ComposeHangulLV(a2, v62);
        if ( !v63 )
        {
          v51 = v64 - 1;
LABEL_101:
          *(_QWORD *)(a4 + 16) = v51;
          goto LABEL_26;
        }
        a2 = v63;
        if ( v64 == v65 )
          goto LABEL_26;
        v48 = *v64;
        v49 = v64 + 1;
        v50 = v63;
LABEL_120:
        *(_QWORD *)(a4 + 16) = v49;
        v59 = ComposeHangulLVT(v50, v48);
        if ( v59 )
          goto LABEL_115;
        v51 = (unsigned __int16 *)(v66 - 2);
        goto LABEL_101;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v59 = ComposeHangulLV(v60, a2);
        goto LABEL_115;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(LastChar) )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v59 = ComposeHangulLVT(v58, (unsigned int)a2);
LABEL_115:
        a2 = v59;
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
LABEL_20:
      v5 = -5;
    }
    v8 = *(_BYTE *)((a2 & 0x7F) + ((__int64)(v5 - 1) << 7) + *(_QWORD *)(a1 + 40));
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
      v46 = NormBuffer__AppendEx(a4, a2, 0);
LABEL_126:
      if ( !v46 )
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
      v22 = a2;
      v21 = a4;
LABEL_45:
      v13 = NormBuffer__AppendEx(v21, v22, v10);
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
  if ( v9 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & v17) == 0 )
  {
    NormBuffer__IsBlocked((_QWORD *)a4, v10);
    goto LABEL_44;
  }
  if ( !v18 || v18 == 63 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v45;
      v10 = *(_BYTE *)((v45 & 0x7F)
                     + ((__int64)(*(unsigned __int8 *)((v45 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                     + *(_QWORD *)(a1 + 40)) & 0x3F;
    }
    goto LABEL_73;
  }
  if ( (v19 & v17) == 0 )
  {
    if ( v19 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      if ( NormBuffer__AppendEx(
             a4,
             v36,
             *(_BYTE *)((v36 & 0x7F)
                      + ((__int64)(*(unsigned __int8 *)((v36 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                      + *(_QWORD *)(a1 + 40)) & 0x3F) )
      {
        v37 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v37 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
    if ( v18 <= v10 )
      goto LABEL_73;
    if ( v18 == *(_BYTE *)(a1 + 116) )
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
    else if ( v18 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_76;
    }
    StartBase = NormBuffer__LastStartBase(a4);
    v43 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
    v35 = v43;
    if ( !v43 )
      goto LABEL_73;
    goto LABEL_83;
  }
  if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
    goto LABEL_44;
  v23 = *(_BYTE *)(a4 + 92);
  if ( v23 && v23 != 63 && *(_BYTE *)(a4 + 93) != 64 )
  {
LABEL_54:
    if ( v23 <= v10 )
      goto LABEL_44;
    if ( v23 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 == *(_BYTE *)(a1 + 115) )
          goto LABEL_61;
LABEL_44:
        v20 = *(__int16 **)(a4 + 104);
        v21 = a4;
        v22 = a2;
        if ( v20 == *(__int16 **)(a4 + 40) )
          goto LABEL_45;
        v13 = NormBuffer__Insert((_QWORD *)a4, a2, v20);
        return v13 == 0 ? 0xC0000023 : 0;
      }
    }
    else if ( v23 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
LABEL_61:
      v31 = NormBuffer__LastStartBasePair(a4);
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v31, a2);
      if ( CanCombinableCharactersCombine )
      {
LABEL_77:
        v39 = *(_QWORD *)(a1 + 40);
        v40 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                       + ((__int64)(*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                       + *(_QWORD *)(a1 + 32))
                                  - 1) << 7)
                       + v39) & 0xC0;
        v41 = NormBuffer__ReplaceLastStartBasePair(
                a4,
                CanCombinableCharactersCombine,
                *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                         + ((__int64)(*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                         + *(_QWORD *)(a1 + 32))
                                    - 1) << 7)
                         + v39) & 0x3F,
                v40);
        goto LABEL_78;
      }
      goto LABEL_44;
    }
    v33 = NormBuffer__LastStartBase(a4);
    v34 = Normalization__CanCombinableCharactersCombine(a1, v33, a2);
    v35 = v34;
    if ( !v34 )
      goto LABEL_44;
LABEL_83:
    v44 = *(_QWORD *)(a1 + 40);
    v40 = *(_BYTE *)((v35 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v35 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7) + v44) & 0xC0;
    v41 = NormBuffer__ReplaceLastStartBase(
            a4,
            v35,
            *(_BYTE *)((v35 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v35 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7) + v44) & 0x3F,
            v40);
LABEL_78:
    if ( v41 )
    {
      v30 = v40 == 64;
      goto LABEL_80;
    }
    return 3221225507LL;
  }
  v24 = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
  v25 = v24;
  if ( !v24 )
  {
    if ( !v23 || v23 == 63 )
      goto LABEL_44;
    goto LABEL_54;
  }
  v26 = *(_QWORD *)(a1 + 32);
  v27 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a4 + 88) = v25;
  v28 = *(_BYTE *)((v25 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v25 >> 7) + v26) - 1) << 7) + v27);
  v29 = *(_QWORD *)(a4 + 80);
  *(_BYTE *)(a4 + 93) = v28 & 0xC0;
  v30 = (v28 & 0xC0) == 64;
  *(_BYTE *)(a4 + 92) = v28 & 0x3F;
  *(_WORD *)(v29 - 2) = v25;
LABEL_80:
  if ( v30 )
    NormBuffer__RecheckStartCombinations(a4);
  return 0LL;
}
