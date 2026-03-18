/*
 * XREFs of MiRevokeExecutePte @ 0x140125040
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 PteShadow; // r11
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v6 = (__int64)(a2 << 25) >> 16;
  if ( v6 <= 0x7FFFFFFEFFFFLL )
  {
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    v11 = PteShadow;
    if ( PteShadow >= 0 )
    {
      MI_GET_PFN_FROM_PTE(&v11, a2, a3, a4);
      if ( (MiGetPfnProtection(v8, v6) & 2) == 0 )
      {
        MiWriteValidPteNewPage((unsigned __int64 *)a2, v9 | 0x8000000000000000uLL);
        MiInsertTbFlushEntry(*(int **)(a1 + 144), v6, 1LL, 0);
      }
    }
  }
  return 0LL;
}
