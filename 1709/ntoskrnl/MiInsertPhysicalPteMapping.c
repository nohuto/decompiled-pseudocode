/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1401184C0
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiLookupIoPageNode @ 0x140118BA8 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x140154D24 (MiAssignInitialPageAttribute.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int ProtectionPfnCompatible; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 ValidPte; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 result; // rax

  ProtectionPfnCompatible = a3;
  v6 = MiProtectionToCacheAttribute(a3);
  if ( MiIsPfnInline(a2) )
  {
    v9 = 48 * a2 - 0x58000000000LL;
    if ( !*(_WORD *)(v9 + 32) )
      MiShowBadMapper(a2);
    if ( (*(_BYTE *)(v9 + 34) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(48 * a2 - 0x58000000000LL, v6, v7, v8);
    if ( *(unsigned __int8 *)(v9 + 34) >> 6 != v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * a2 - 0x58000000000LL);
  }
  else
  {
    v10 = MiLookupIoPageNode(a2);
    if ( !v10 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v10 + 40))) >> 14;
    if ( v11 )
    {
      if ( v11 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  *(_QWORD *)a1 = ValidPte;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
  v17 = MI_GET_PFN_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14, v15, v16);
  MiLockPageAtDpcInline(v17);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
