/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140123724
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiLookupIoPageNode @ 0x140124B28 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x140163838 (MiAssignInitialPageAttribute.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
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
  *(_QWORD *)a1 = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow(v13);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16, v12, v14, v15);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
  v20 = MI_GET_PFN_FROM_PTE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v17, v18, v19);
  MiLockPageAtDpcInline(v20);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
