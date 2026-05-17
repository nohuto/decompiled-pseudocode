/*
 * XREFs of Normalization__NormalizeCharacter @ 0x180080920
 * Callers:
 *     Normalization__Normalize @ 0x1800807A4 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x1800F9344 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x180080768 (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x1800808F8 (NormBuffer__Append.c)
 *     IsHangulLV @ 0x1800905C0 (IsHangulLV.c)
 *     ComposeHangulLV @ 0x1800F8C0C (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1800F8C34 (ComposeHangulLVT.c)
 *     NormBuffer__GetLastChar @ 0x1800F8D44 (NormBuffer__GetLastChar.c)
 *     NormBuffer__Insert @ 0x1800F8DD4 (NormBuffer__Insert.c)
 *     NormBuffer__IsBlocked @ 0x1800F8E98 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1800F8F38 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1800F8F60 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800F8FA8 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800F9118 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800F9188 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800F9244 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1800F9344 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F9450 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  unsigned __int8 v17; // r15
  char v18; // cl
  unsigned __int8 v19; // r15
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // dl
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  _WORD *v30; // rcx
  unsigned int StartBasePair; // eax
  __int64 v32; // r9
  unsigned int v33; // r10d
  unsigned int StartBase; // eax
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  char v38; // di
  char v39; // di
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // eax
  int CanCombinableCharactersCombine; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int16 *v53; // rax
  __int64 v54; // rdx
  unsigned __int16 *v55; // r10
  __int64 v56; // rcx
  unsigned __int16 *v57; // rax
  signed int v58; // esi
  __int64 v59; // rcx
  unsigned __int16 v60; // di
  __int64 v61; // rcx
  unsigned __int16 v62; // si
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned int v69; // r9d
  unsigned int v70; // eax
  unsigned int LastChar; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  unsigned int v74; // r9d
  unsigned __int16 *v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // eax
  unsigned __int16 *v78; // r8
  __int64 v79; // r10

  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_130;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_130:
          v9 = NormBuffer__Append(a4, a2);
          goto LABEL_10;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
      }
      if ( v5 != 254 )
        break;
      v30 = *(_WORD **)(a4 + 16);
      if ( v30 == *(_WORD **)(a4 + 8) )
        return 3221227287LL;
      *(_QWORD *)(a4 + 16) = v30 + 1;
      if ( (unsigned __int16)(*v30 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = (unsigned __int16)*v30 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_61:
      if ( !v5 )
        goto LABEL_26;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v75 = *(unsigned __int16 **)(a4 + 16);
        if ( v75 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v76 = *v75;
        *(_QWORD *)(a4 + 16) = v75 + 1;
        v77 = ComposeHangulLV(a2, v76);
        if ( v77 )
        {
          a2 = v77;
          if ( v78 == *(unsigned __int16 **)(a4 + 8) )
            goto LABEL_26;
          v54 = *v78;
          v55 = v78 + 1;
          v56 = v77;
          goto LABEL_127;
        }
        v57 = v78 - 1;
LABEL_110:
        *(_QWORD *)(a4 + 16) = v57;
        goto LABEL_26;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( LastChar - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4, v72, v73, LastChar);
        v70 = ComposeHangulLV(v74, a2);
LABEL_122:
        a2 = v70;
        goto LABEL_26;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        v63 = NormBuffer__GetLastChar(a4);
        if ( (unsigned __int8)IsHangulLV(v63, v64, v65, v63) )
        {
          NormBuffer__RewindOutputCharacter(a4, v66, v67, v68);
          v70 = ComposeHangulLVT(v69, a2);
          goto LABEL_122;
        }
LABEL_26:
        v15 = NormBuffer__Append(a4, a2);
        return v15 == 0 ? 0xC0000023 : 0;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_26;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v58 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0) )
            return 3221225507LL;
          v60 = (int)(a2 - 44032) % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v59, v60, 0) )
            return 3221225507LL;
          v62 = (unsigned __int16)(v58 % 28) != 0 ? v58 % 28 + 4519 : 0;
          if ( v62 )
          {
            if ( !NormBuffer__AppendEx(v61, v62, 0) )
              return 3221225507LL;
            v60 = v62;
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v60;
          goto LABEL_12;
        }
        if ( !(unsigned __int8)IsHangulLV(a2, v5, a3, a4) )
          goto LABEL_26;
        v53 = *(unsigned __int16 **)(a4 + 16);
        if ( v53 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v54 = *v53;
        v55 = v53 + 1;
        v56 = a2;
LABEL_127:
        *(_QWORD *)(a4 + 16) = v55;
        v70 = ComposeHangulLVT(v56, v54);
        if ( v70 )
          goto LABEL_122;
        v57 = (unsigned __int16 *)(v79 - 2);
        goto LABEL_110;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_26;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v8 )
    goto LABEL_9;
  v11 = v8 & 0xC0;
  v12 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v12 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      if ( !NormBuffer__AppendEx(a4, a2, v8 & 0x3F) )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      *(_BYTE *)(a4 + 92) = v12;
      *(_BYTE *)(a4 + 93) = v11;
      return 0LL;
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
    if ( v11 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
    {
      LOBYTE(v16) = v12;
      NormBuffer__IsBlocked(a4, v16);
      goto LABEL_64;
    }
    if ( !v17 || v17 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), a2);
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(a4, v50, v51, CanCombinableCharactersCombine);
        a2 = v52;
        v12 = *(_BYTE *)((v52 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v52 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128) & 0x3F;
      }
LABEL_19:
      v13 = a2;
      v14 = a4;
LABEL_20:
      v15 = NormBuffer__AppendEx(v14, v13, v12);
      return v15 == 0 ? 0xC0000023 : 0;
    }
    if ( v18 )
    {
      if ( v18 != 64 )
      {
        LOBYTE(v16) = v12;
        if ( (unsigned __int8)NormBuffer__IsBlocked(a4, v16) )
          goto LABEL_64;
        v19 = *(_BYTE *)(a4 + 92);
        if ( !v19 || v19 == 63 || *(_BYTE *)(a4 + 93) == 64 )
        {
          v20 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), a2);
          v21 = v20;
          if ( v20 )
          {
            v22 = *(_QWORD *)(a1 + 32);
            v23 = *(_QWORD *)(a4 + 80);
            *(_DWORD *)(a4 + 88) = v21;
            v24 = *(_BYTE *)((v21 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v21 >> 7) + v22) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(v23 - 2) = v21;
            *(_BYTE *)(a4 + 93) = v24 & 0xC0;
            v25 = (v24 & 0xC0) == 64;
            *(_BYTE *)(a4 + 92) = v24 & 0x3F;
            goto LABEL_81;
          }
          if ( !v19 || v19 == 63 )
            goto LABEL_64;
        }
        if ( v19 <= v12 )
          goto LABEL_64;
        if ( v19 == *(_BYTE *)(a1 + 116) )
        {
          if ( v12 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v12 != *(_BYTE *)(a1 + 115) )
              goto LABEL_64;
            goto LABEL_75;
          }
        }
        else if ( v19 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
        {
LABEL_75:
          StartBasePair = NormBuffer__LastStartBasePair(a4);
          v33 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
          if ( v33 )
          {
LABEL_94:
            v47 = *(_QWORD *)(a1 + 40);
            v39 = *(_BYTE *)((v33 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + v47
                           - 128) & 0xC0;
            LOBYTE(v32) = v39;
            v40 = NormBuffer__ReplaceLastStartBasePair(
                    a4,
                    v33,
                    *(_BYTE *)((v33 & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                             + v47
                             - 128) & 0x3F,
                    v32);
LABEL_79:
            if ( v40 )
            {
              v25 = v39 == 64;
LABEL_81:
              if ( v25 )
                NormBuffer__RecheckStartCombinations(a4);
              return 0LL;
            }
            return 3221225507LL;
          }
LABEL_64:
          v14 = a4;
          v13 = a2;
          if ( *(_QWORD *)(a4 + 104) != *(_QWORD *)(a4 + 40) )
          {
            v15 = NormBuffer__Insert(a4, a2);
            return v15 == 0 ? 0xC0000023 : 0;
          }
          goto LABEL_20;
        }
        StartBase = NormBuffer__LastStartBase(a4);
        v35 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v35 )
          goto LABEL_64;
LABEL_78:
        v36 = v35 & 0x7F;
        v37 = v36 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v35 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v38 = *(_BYTE *)(v37 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v37) = v38 & 0x3F;
        v39 = v38 & 0xC0;
        LOBYTE(v36) = v39;
        v40 = NormBuffer__ReplaceLastStartBase(a4, v35, v37, v36);
        goto LABEL_79;
      }
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), a2) )
      {
        NormBuffer__RewindOutputCharacter(a4, v41, v42, v43);
        if ( !NormBuffer__AppendEx(
                a4,
                (unsigned int)v44,
                *(_BYTE *)((v44 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)((v44 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128) & 0x3F) )
          return 3221225507LL;
        v45 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v45 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
    }
    if ( v17 <= v12 )
      goto LABEL_19;
    if ( v17 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_19;
LABEL_93:
        v46 = NormBuffer__LastStartBasePair(a4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, v46, a2);
        if ( !v33 )
          goto LABEL_19;
        goto LABEL_94;
      }
    }
    else if ( v17 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_93;
    }
    v48 = NormBuffer__LastStartBase(a4);
    v35 = Normalization__CanCombinableCharactersCombine(a1, v48, a2);
    if ( !v35 )
      goto LABEL_19;
    goto LABEL_78;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = NormBuffer__AppendEx(a4, a2, 0);
LABEL_10:
      if ( !v9 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
LABEL_12:
      *(_WORD *)(a4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    case 0xC0u:
      v26 = NormBuffer__GetLastChar(a4);
      v27 = Normalization__CanCombinableCharactersCombine(a1, v26, a2);
      if ( !v27 )
        goto LABEL_19;
      NormBuffer__RewindOutputCharacter(a4, v28, v29, v27);
      a2 = a4;
      goto LABEL_61;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_19;
  return 3221227287LL;
}
