/*
 * XREFs of MxZeroPageTablePfns @ 0x14082C984
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140829FE8 (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x14082C984 (MxZeroPageTablePfns.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxZeroPageTablePfns @ 0x14082C984 (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  __int64 PteShadow; // rbx
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 ContainingPageTable; // rax
  __int64 v11; // r11
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  if ( a1 <= a2 )
  {
    v13 = a4;
    v6 = a1;
    do
    {
      PteShadow = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v12 = (void *)PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v8 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v12);
        v12 = (void *)(v9 + 48 * v8);
        ContainingPageTable = MiGetContainingPageTable(v6);
        memset((void *)(v11 + 48 * ContainingPageTable), 0, 0x30uLL);
        if ( !a3 || (PteShadow & 0x80u) == 0LL )
        {
          memset(v12, 0, 0x30uLL);
          if ( v6 != 0xFFFFF6FB7DBEDF68uLL && a3 > 1 )
            MxZeroPageTablePfns((__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4088, a3 - 1, v13);
        }
      }
      v6 += 8LL;
    }
    while ( v6 <= a2 );
  }
}
