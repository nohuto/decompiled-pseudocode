/*
 * XREFs of MiRaisedIrqlFault @ 0x1401314B8
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x14003446C (MiCheckSystemNxFault.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiTransientCombineAddress @ 0x1401316EC (MiTransientCombineAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRaisedIrqlFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3,
        _QWORD *a4)
{
  __int64 v8; // r14
  ULONG_PTR v10; // rax
  int v11; // r9d
  ULONG_PTR v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  ULONG_PTR v16; // [rsp+78h] [rbp+10h] BYREF

  v8 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (BugCheckParameter3 & 1) != 0 && ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0
    || (BugCheckParameter3 & 1) == 0 && KeInvalidAccessAllowed(BugCheckParameter3)
    || (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), BugCheckParameter1) == 1 )
  {
    return 3221225477LL;
  }
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(*a4);
      if ( (v10 & 1) == 0 )
        return 3489660934LL;
      if ( (v10 & 0x80u) != 0LL )
      {
        if ( (BugCheckParameter2 & 2) != 0 && (v10 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, BugCheckParameter1, v10, BugCheckParameter3, 0xFuLL);
        MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v10, 3u);
        if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
        return 0LL;
      }
      ++a4;
    }
    while ( (unsigned int)(v11 + 1) < 3 );
    v12 = MI_READ_PTE_LOCK_FREE(v8);
    v16 = v12;
    v13 = v12;
    if ( (v12 & 1) == 0 )
      return 3489660934LL;
    if ( (BugCheckParameter2 & 2) != 0 )
    {
      if ( (v12 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v12 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, BugCheckParameter1, v12, BugCheckParameter3, 0xAuLL);
    }
    MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v12, 0);
    v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v16);
    if ( *(_WORD *)(48 * v14 - 0x58000000000LL + 32) > 1u
      || !*(_QWORD *)(48 * v14 - 0x58000000000LL)
      || (*(_BYTE *)(48 * v14 - 0x58000000000LL + 35) & 8) != 0 )
    {
      MiNoFaultFound(BugCheckParameter2, v8, BugCheckParameter1, v15, 0LL, 1u, v13);
      return 0LL;
    }
  }
  return 3489660934LL;
}
