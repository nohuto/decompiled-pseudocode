/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140137EEC
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x140139B50 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x140181FB4 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int ProtectionPfnCompatible; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 UsedPtesHandle; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rax
  int v17; // eax

  ProtectionPfnCompatible = a3;
  v6 = MiProtectionToCacheAttribute(a3);
  if ( MiIsPfnInline(a2) )
  {
    v8 = 48 * a2 - 0x58000000000LL;
    if ( !*(_WORD *)(v8 + 32) )
      MiShowBadMapper(a2);
    v9 = *(_BYTE *)(v8 + 34);
    if ( (v9 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(48 * a2 - 0x58000000000LL, v6);
      v9 = *(_BYTE *)(v8 + 34);
    }
    if ( v9 >> 6 != v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * a2 - 0x58000000000LL);
  }
  else
  {
    v16 = MiLookupIoPageNode(a2);
    if ( !v16 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v17 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v16 + 40))) >> 14;
    if ( v17 )
    {
      if ( v17 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  *(_QWORD *)a1 = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000, v7);
  if ( MiPteInShadowRange(a1) )
    MiWritePteShadow(v11, v10, v12);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
  v14 = 48
      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
      - 0x58000000000LL;
  MiLockPageAtDpcInline(v14);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
