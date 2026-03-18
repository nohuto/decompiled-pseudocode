/*
 * XREFs of MiFillSystemPtes @ 0x14010B150
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiIoSpaceRunIsConstant @ 0x14013CD70 (MiIoSpaceRunIsConstant.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiAssignInitialPageAttribute @ 0x140181FB4 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int ProtectionPfnCompatible,
        char a5,
        _DWORD *a6)
{
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r12
  unsigned __int64 v23; // rdi
  __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // edx
  unsigned __int64 v30; // rcx
  unsigned __int8 v31; // cl
  __int64 ValidPte; // rax
  char v34; // cl
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r10
  int v42; // esi
  int v43; // eax
  __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 IsConstant; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h]
  unsigned int v47; // [rsp+B0h] [rbp+8h]
  __int64 v49; // [rsp+C0h] [rbp+18h]
  __int64 v50; // [rsp+C0h] [rbp+18h]
  unsigned __int16 v51; // [rsp+C8h] [rbp+20h]

  v7 = a2;
  v47 = 1;
  v8 = 0LL;
  v46 = 0LL;
  v10 = a1;
  *a6 = 0;
  v44 = 0LL;
  if ( ProtectionPfnCompatible == 31 )
  {
    v11 = 1LL;
    v47 = 1;
  }
  else if ( ProtectionPfnCompatible >> 3 == 3 )
  {
    if ( (ProtectionPfnCompatible & 7) == 0 )
      goto LABEL_4;
    v11 = 2LL;
    v47 = 2;
  }
  else
  {
    if ( ProtectionPfnCompatible >> 3 != 1 )
    {
LABEL_4:
      v11 = 1LL;
      goto LABEL_5;
    }
    v11 = 0LL;
    v47 = 0;
  }
LABEL_5:
  v12 = ProtectionPfnCompatible & 0x1F;
  v13 = MmProtectToPteMask[v12] & 0xFFFF000000000E5EuLL | 0x21;
  v14 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = MmProtectToPteMask[v12] & 0xFFFF000000000E5EuLL | 0x121;
  }
  else
  {
    v15 = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v13 = MmProtectToPteMask[v12] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (ProtectionPfnCompatible & 0x4000000) == 0 )
      {
        v13 = MmProtectToPteMask[v12] & 0x7FFF000000000E5ELL | 0x21;
      }
      v43 = MiUserPdeOrAbove(a1);
      v11 = v47;
      v7 = a2;
      v14 = 0xFFFFF6FFFFFFFFFFuLL;
      if ( v43 )
        v13 |= 4uLL;
      v8 = 0LL;
    }
    if ( v10 <= 0xFFFFF6BFFFFFFF78uLL )
      v13 |= 4uLL;
    if ( v15 < 0xFFFF800000000000uLL )
    {
      v16 = HIBYTE(word_1403CB7D0);
    }
    else if ( byte_1403CCF90[((v15 >> 39) & 0x1FF) - 256] == 1 )
    {
      v16 = 0;
    }
    else if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v15 < qword_1403CD100 || v15 > qword_1403CBB70 )
        v16 = (unsigned __int8)word_1403CB7D0;
      else
        v16 = HIBYTE(word_1403CB7D0);
    }
    else
    {
      v16 = 0;
    }
    v17 = v13 | 0x100;
    if ( !v16 )
      v17 = v13;
    v18 = v17;
  }
  v19 = v18 | 0x42;
  if ( (ProtectionPfnCompatible & 5) != 4 )
    v19 = v18;
  if ( (ProtectionPfnCompatible & 0x40000000) != 0 )
    v19 &= ~4uLL;
  v20 = ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100 ^ (unsigned __int64)v19;
  if ( (ProtectionPfnCompatible & 0x8000000) != 0 )
    v20 &= ~0x100uLL;
  if ( (ProtectionPfnCompatible & 0x4000000) != 0 )
    v20 |= 0x80uLL;
  IsConstant = 0LL;
  v49 = 0LL;
  v21 = 0LL;
  v22 = v7;
  v23 = v20 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( !v7 )
    return 0LL;
  v24 = a3 - 8;
  v25 = 0LL;
  if ( a3 >= 0 )
  {
    v25 = a3 - 1;
    v24 = 0LL;
  }
  while ( 1 )
  {
    v26 = 0xFFFFFA8000000028uLL;
    if ( v24 )
      v25 = *(_QWORD *)(v24 + 8);
    else
      ++v25;
    v27 = v24 + 8;
    if ( !v24 )
      v27 = 0LL;
    v24 = v27;
    if ( v25 > qword_1403CB780
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v25 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      if ( v8 || (IsConstant = MiIoSpaceRunIsConstant(v25, v27, v22, 0xFFFFFA8000000028uLL), (v8 = IsConstant) != 0) )
      {
        if ( v8 > 1 )
        {
          v37 = *(_DWORD *)(v8 + 40);
LABEL_69:
          ProtectionPfnCompatible &= 7u;
          if ( v37 )
          {
            if ( v37 == 2 )
              ProtectionPfnCompatible |= 0x18u;
          }
          else
          {
            ProtectionPfnCompatible |= 8u;
          }
          ValidPte = MiMakeValidPte(v10, v25, ProtectionPfnCompatible | 0xA0000000, v26);
          goto LABEL_63;
        }
      }
      else
      {
        IsConstant = 1LL;
      }
      if ( v21 )
      {
        v36 = v46;
      }
      else
      {
        if ( v24 )
        {
          v41 = 1LL;
        }
        else
        {
          v38 = v25;
          do
          {
            if ( (unsigned int)MiIsPfnInline(v38) )
              break;
            ++v41;
            if ( v40 == 1 )
              break;
            v38 = v39 + 1;
          }
          while ( (v38 & 0x1FF) != 0 );
        }
        v50 = v41;
        v42 = MiReferenceIoPages(1, v25, v41, v47, 0LL, (__int64)&v44);
        if ( v42 < 0 )
          goto LABEL_87;
        v21 = v50;
        *a6 |= 1u;
        v36 = v44;
      }
      v49 = --v21;
      v51 = *(_WORD *)(*(_QWORD *)(v36 + 48) + 2 * ((v25 & 0xFFFFFFFFFLL) - *(_QWORD *)(v36 + 40)));
      v46 = v44;
      v37 = v51 >> 14;
      goto LABEL_69;
    }
    v28 = 48 * v25 - 0x58000000000LL;
    v29 = a5 & 2;
    if ( (a5 & 2) != 0
      && ((*(_BYTE *)(v28 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v25 - 0x58000000000LL)) )
    {
      KeBugCheckEx(0x1Au, 0x1160CuLL, v25, 0LL, 0LL);
    }
    if ( !*(_WORD *)(v28 + 32)
      && (!v29 || (*(_BYTE *)(v28 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v25 - 0x58000000000LL)) )
    {
      MiShowBadMapper(v25);
      v11 = v47;
      v14 = 0xFFFFF6FFFFFFFFFFuLL;
    }
    if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) == 0 )
    {
      v30 = (__int64)(*(_QWORD *)(v28 + 8) << 25) >> 16;
      if ( v30 >= 0xFFFFF68000000000uLL && v30 <= v14 )
      {
        v34 = *(_BYTE *)(v28 + 34);
        if ( ((v34 & 0x20) == 0 || (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v28 + 32))
          && (v34 & 8) == 0
          && ((*(_QWORD *)v28 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
        {
          break;
        }
      }
    }
    v31 = *(_BYTE *)(v28 + 34);
    if ( (v31 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * v25 - 0x58000000000LL, (unsigned int)v11);
      v31 = *(_BYTE *)(v28 + 34);
      v11 = v47;
    }
    if ( (_DWORD)v11 == v31 >> 6 )
    {
      v21 = v49;
      ValidPte = v23 ^ (v23 ^ (v25 << 12)) & 0xFFFFFFFFF000LL;
      goto LABEL_44;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v25 - 0x58000000000LL);
    ValidPte = MiMakeValidPte(v10, v25, ProtectionPfnCompatible | 0xA0000000, v35);
    v21 = v49;
LABEL_63:
    v11 = v47;
LABEL_44:
    *(_QWORD *)v10 = ValidPte;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v10, ValidPte, v11);
      v11 = v47;
    }
    v10 += 8LL;
    if ( !--v22 )
      return 0LL;
    v8 = IsConstant;
    v14 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  v42 = -1073741800;
LABEL_87:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((v10 << 25) + ((v22 - a2) << 28)) >> 16, a2 - v22);
  return (unsigned int)v42;
}
