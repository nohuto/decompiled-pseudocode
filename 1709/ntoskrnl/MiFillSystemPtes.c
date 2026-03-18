/*
 * XREFs of MiFillSystemPtes @ 0x14009ABD0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiIoSpaceRunIsConstant @ 0x140118B54 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiAssignInitialPageAttribute @ 0x140154D24 (MiAssignInitialPageAttribute.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 */

__int64 __fastcall MiFillSystemPtes(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int ProtectionPfnCompatible,
        char a5,
        _DWORD *a6)
{
  BOOL v8; // ecx
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rbp
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // r13
  unsigned __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r9
  unsigned __int64 v33; // r8
  __int64 v34; // rdi
  int v35; // edx
  unsigned __int64 ValidPte; // rax
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // edi
  unsigned __int16 v42; // cx
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  __int64 IsConstant; // [rsp+48h] [rbp-50h]
  unsigned int v46; // [rsp+A0h] [rbp+8h]
  __int64 v48; // [rsp+B0h] [rbp+18h]

  v48 = 0LL;
  v44 = 0LL;
  v8 = 1;
  *a6 = 0;
  v10 = a2;
  v46 = 1;
  v11 = 0LL;
  if ( ProtectionPfnCompatible == 31 )
    goto LABEL_6;
  if ( ProtectionPfnCompatible >> 3 != 3 )
  {
    v8 = ProtectionPfnCompatible >> 3 != 1;
LABEL_6:
    v46 = v8;
    goto LABEL_7;
  }
  if ( (ProtectionPfnCompatible & 7) != 0 )
    v46 = 2;
LABEL_7:
  v12 = ProtectionPfnCompatible & 0x1F;
  v13 = MmProtectToPteMask[v12] & 0xFFFF000000000E5EuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = MmProtectToPteMask[v12] & 0xFFFF000000000E5EuLL | 0x121;
  }
  else
  {
    v14 = (__int64)(a1 << 25) >> 16;
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
      v15 = MiUserPdeOrAbove(a1);
      v10 = a2;
      if ( v15 )
        v13 |= 4uLL;
    }
    v16 = v13 | 4;
    if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
      v16 = v13;
    if ( v14 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403899D0[((v14 >> 39) & 0x1FF) - 256] == 1 )
      {
        v17 = 0;
      }
      else if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v14 < qword_140389B40 || (v17 = HIBYTE(word_1403885F8), v14 > qword_140388958) )
          v17 = (unsigned __int8)word_1403885F8;
      }
      else
      {
        v17 = 0;
      }
    }
    else
    {
      v17 = HIBYTE(word_1403885F8);
    }
    v11 = 0LL;
    v18 = v16 | 0x100;
    if ( !v17 )
      v18 = v16;
  }
  v19 = v18 | 0x42;
  v20 = 0LL;
  if ( (ProtectionPfnCompatible & 5) != 4 )
    v19 = v18;
  v21 = v19 & 0xFFFB;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v21 = v19;
  v22 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
  v23 = ((unsigned __int16)((unsigned __int8)word_1403885F8 << 8) ^ v21) & 0x100;
  if ( (ProtectionPfnCompatible & 0x40000000) == 0 )
    v22 = v19;
  v24 = v22 ^ v23;
  v25 = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (ProtectionPfnCompatible & 0x8000000) == 0 )
    v25 = v24;
  v26 = v25 | 0x80;
  if ( (ProtectionPfnCompatible & 0x4000000) == 0 )
    v26 = v25;
  v27 = 0LL;
  IsConstant = 0LL;
  v28 = v26 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 >= 0 )
  {
    v30 = a3 - 1;
    v29 = 0LL;
  }
  else
  {
    v29 = a3 - 8;
    v30 = 0LL;
  }
  v31 = v10;
  if ( !v10 )
    return 0LL;
  while ( 1 )
  {
    v32 = 0x20000000000000LL;
    v33 = 0xFFFFFA8000000028uLL;
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      v29 += 8LL;
    }
    else
    {
      ++v30;
    }
    if ( v30 <= qword_1403885E0
      && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
    {
      v34 = 48 * v30 - 0x58000000000LL;
      v35 = a5 & 2;
      if ( (a5 & 2) != 0
        && ((*(_BYTE *)(v34 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(48 * v30 - 0x58000000000LL)) )
      {
        KeBugCheckEx(0x1Au, 0x1160CuLL, v30, 0LL, 0LL);
      }
      if ( !*(_WORD *)(v34 + 32) && (!v35 || (*(_BYTE *)(v34 + 34) & 7) != 5 || !(unsigned int)MiIsPfnFileOnly(v34)) )
        MiShowBadMapper(v30);
      if ( (*(_BYTE *)(v34 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v34, v46, v33, v32);
      if ( v46 == *(unsigned __int8 *)(v34 + 34) >> 6 )
      {
        v11 = v48;
        ValidPte = v28 ^ (v28 ^ (v30 << 12)) & 0xFFFFFFFFF000LL;
      }
      else
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v34);
        ValidPte = MiMakeValidPte(a1, v30, ProtectionPfnCompatible | 0xA0000000);
        v11 = v48;
      }
      goto LABEL_86;
    }
    if ( !v27 )
    {
      IsConstant = MiIoSpaceRunIsConstant(v30, v29, v31, 0x20000000000000LL);
      v27 = IsConstant;
      if ( !IsConstant )
        break;
    }
    if ( v27 <= 1 )
      goto LABEL_69;
    v37 = *(_DWORD *)(v27 + 40);
LABEL_81:
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
    ValidPte = MiMakeValidPte(a1, v30, ProtectionPfnCompatible | 0xA0000000);
LABEL_86:
    *(_QWORD *)a1 = ValidPte;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a1, ValidPte);
    a1 += 8LL;
    if ( !--v31 )
      return 0LL;
    v27 = IsConstant;
  }
  IsConstant = 1LL;
LABEL_69:
  if ( v20 )
  {
LABEL_80:
    --v20;
    v42 = *(_WORD *)(*(_QWORD *)(v11 + 48) + 2 * ((v30 & 0xFFFFFFFFFLL) - *(_QWORD *)(v11 + 40)));
    v11 = v44;
    v37 = v42 >> 14;
    v48 = v44;
    goto LABEL_81;
  }
  if ( v29 )
  {
    v20 = 1LL;
  }
  else
  {
    v38 = v30;
    v20 = 0LL;
    do
    {
      if ( (unsigned int)MiIsPfnInline(v38) )
        break;
      ++v20;
      if ( v40 == 1 )
        break;
      v38 = v39 + 1;
    }
    while ( (v38 & 0x1FF) != 0 );
  }
  v41 = MiReferenceIoPages(1, v30, v20, v46, 0LL, (__int64)&v44);
  if ( v41 >= 0 )
  {
    *a6 |= 1u;
    v11 = v44;
    goto LABEL_80;
  }
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)((a1 << 25) + ((v31 - a2) << 28)) >> 16, a2 - v31);
  return (unsigned int)v41;
}
