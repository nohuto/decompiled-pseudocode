/*
 * XREFs of MxZeroPageTablePfns @ 0x14089BDC8
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1408997A0 (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x14089BDC8 (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MxZeroPageTablePfns @ 0x14089BDC8 (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 ContainingPageTable; // rax
  __int64 v11; // r9
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  if ( a1 <= a2 )
  {
    v13 = a4;
    v6 = a1;
    do
    {
      v12 = (void *)MI_READ_PTE_LOCK_FREE(v6);
      v7 = (char)v12;
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v8 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)&v12);
        v12 = (void *)(v9 + 48 * v8);
        ContainingPageTable = MiGetContainingPageTable(v6);
        memset((void *)(v11 + 48 * ContainingPageTable), 0, 0x30uLL);
        if ( !a3 || v7 >= 0 )
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
