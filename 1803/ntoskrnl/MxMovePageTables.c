/*
 * XREFs of MxMovePageTables @ 0x14089B144
 * Callers:
 *     MxRelocatePageTables @ 0x1408998F4 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x14089B144 (MxMovePageTables.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x14089B144 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x14089B71C (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 */

unsigned __int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  v5 = a1;
  v20 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
  v10 = (result >> 12) & 0xFFFFFFFFFLL;
  while ( v5 <= a2 )
  {
    if ( (v5 & 0xFFF) == 0 )
    {
      v20 = MI_READ_PTE_LOCK_FREE(v9 + ((v5 >> 9) & 0x7FFFFFFFF8LL));
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
      v10 = v18 & (v17 >> 12);
    }
    result = MI_READ_PTE_LOCK_FREE(v5);
    v20 = result;
    if ( (result & 1) != 0 && v5 != 0xFFFFF6FB7DBEDF68uLL && (!a3 || (result & 0x80u) == 0LL) )
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
      if ( a3 )
      {
        MxSwapPages(a5, v5);
        MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, v21, a5);
        v20 = MI_READ_PTE_LOCK_FREE(v5);
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
        v15 = 0xFFFFFFFFFLL;
        v14 = (v19 >> 12) & 0xFFFFFFFFFLL;
LABEL_10:
        v16 = 48 * v14 - 0x58000000000LL;
        result = v15 & (v10 ^ *(_QWORD *)(v16 + 40));
        *(_QWORD *)(v16 + 40) ^= result;
      }
      else
      {
        result = MiIsRegularMemory(v12, v13 & (v11 >> 12));
        if ( (_DWORD)result )
          goto LABEL_10;
      }
      v9 = 0xFFFFF68000000000uLL;
    }
    v5 += 8LL;
  }
  return result;
}
