/*
 * XREFs of MiRaisedIrqlFault @ 0x140228D0C
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x140116D14 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x14012C034 (MiCheckSystemNxFault.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiTransientCombineAddress @ 0x140231B94 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3,
        __int64 **a4)
{
  volatile signed __int64 *v8; // rsi
  unsigned int v10; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 PteShadow; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v8 = (volatile signed __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (BugCheckParameter3 & 1) != 0 && ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0
    || (BugCheckParameter3 & 1) == 0 && KeInvalidAccessAllowed(BugCheckParameter3)
    || (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), BugCheckParameter1) == 1 )
  {
    return 3221225477LL;
  }
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    v10 = 0;
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      PteShadow = **a4;
      if ( (unsigned __int64)*a4 >= v11 && (unsigned __int64)*a4 <= v12 )
        PteShadow = MiReadPteShadow();
      if ( (PteShadow & 1) == 0 )
        return 3489660934LL;
      if ( (PteShadow & 0x80u) != 0LL )
      {
        if ( (BugCheckParameter2 & 2) != 0 && (PteShadow & 0x800) == 0 )
          KeBugCheckEx(0xBEu, BugCheckParameter1, PteShadow, BugCheckParameter3, 0xFuLL);
        MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, PteShadow, 3u);
        if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
        return 0LL;
      }
      ++v10;
      ++a4;
    }
    while ( v10 < 3 );
    v14 = *v8;
    if ( (unsigned __int64)v8 >= v11 && (unsigned __int64)v8 <= v12 )
      v14 = MiReadPteShadow();
    v17 = v14;
    if ( (v14 & 1) != 0 )
    {
      if ( (BugCheckParameter2 & 2) != 0 )
      {
        if ( (v14 & 0x200) != 0 )
          return 3489660934LL;
        if ( (v14 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, BugCheckParameter1, v14, BugCheckParameter3, 0xAuLL);
      }
      MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v14, 0);
      v15 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v17) - 0x58000000000LL;
      if ( *(_WORD *)(v15 + 32) > 1u || (*(_DWORD *)v15 & 1) == 0 || (*(_BYTE *)(v15 + 35) & 8) != 0 )
      {
        MiNoFaultFound(BugCheckParameter2, v8, BugCheckParameter1, v16, 0LL, 1u, v14);
        return 0LL;
      }
    }
  }
  return 3489660934LL;
}
