/*
 * XREFs of MxMovePageTables @ 0x14082BBDC
 * Callers:
 *     MxRelocatePageTables @ 0x14082A08C (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x14082BBDC (MxMovePageTables.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxMovePageTables @ 0x14082BBDC (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x14082C240 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 */

__int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 *v8; // rcx
  __int64 PteShadow; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h]

  v22 = a4;
  v5 = a1;
  v8 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v8;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v21 = PteShadow;
  result = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v21);
  v13 = result;
  while ( v5 <= a2 )
  {
    if ( (v5 & 0xFFF) == 0 )
    {
      v14 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = *v14;
      if ( (unsigned __int64)v14 >= v12 && (unsigned __int64)v14 <= v11 )
        v15 = MiReadPteShadow();
      v21 = v15;
      v13 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v21);
    }
    result = *(_QWORD *)v5;
    if ( v5 >= v12 && v5 <= v11 )
      result = MiReadPteShadow();
    v21 = result;
    if ( (result & 1) != 0 && v5 != ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (!a3 || (result & 0x80u) == 0LL) )
    {
      v16 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v21);
      if ( a3 )
      {
        MxSwapPages(a5, v5);
        MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, v22, a5);
        v18 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
          v18 = MiReadPteShadow();
        v21 = v18;
        v19 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v21);
LABEL_23:
        v20 = 48 * v19 - 0x58000000000LL;
        result = (v13 ^ *(_QWORD *)(v20 + 40)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v20 + 40) ^= result;
      }
      else
      {
        result = MiIsRegularMemory(v17, v16);
        if ( (_DWORD)result )
          goto LABEL_23;
      }
      v11 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v5 += 8LL;
  }
  return result;
}
