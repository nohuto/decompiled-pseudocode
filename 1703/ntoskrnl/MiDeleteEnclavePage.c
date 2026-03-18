/*
 * XREFs of MiDeleteEnclavePage @ 0x14021C7C0
 * Callers:
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     KeRemoveEnclavePage @ 0x1406ACF40 (KeRemoveEnclavePage.c)
 */

void __fastcall MiDeleteEnclavePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v10 )
  {
    v4 = (__int64)(a1 << 25) >> 16;
    KeRemoveEnclavePage(v4);
    v5 = MI_READ_PTE_LOCK_FREE(&v10);
    *(_QWORD *)a1 = 0LL;
    v6 = (v5 >> 12) & 0xFFFFFFFFFLL;
    if ( MiPteInShadowRange(a1) )
      MiWritePteShadow();
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v7);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v7 + 34) &= ~0x10u;
    v9 = *(_QWORD *)(v7 + 24);
    *(_WORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 24) = v9 ^ (v9 ^ (v9 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    MiInsertPageInFreeOrZeroedList(v6, 256);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    if ( a2 )
      MiInsertTbFlushEntry(a2, v4, 1LL, 0);
  }
}
