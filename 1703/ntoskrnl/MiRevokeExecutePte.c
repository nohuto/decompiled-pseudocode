/*
 * XREFs of MiRevokeExecutePte @ 0x140078450
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 << 25 >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    if ( v9 >= 0 )
    {
      v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v9);
      if ( (MiGetPfnProtection(v6, v4, 48 * v5 - 0x58000000000LL) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2, v7 | 0x8000000000000000uLL);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 136), v4, 1LL, 0LL);
      }
    }
  }
  return 0LL;
}
