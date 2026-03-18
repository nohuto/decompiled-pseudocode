/*
 * XREFs of MxCreatePfns @ 0x14082BE2C
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140829FE8 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x14082BE2C (MxCreatePfns.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxCreatePfns @ 0x14082BE2C (MxCreatePfns.c)
 *     MxCreatePfn @ 0x14082C120 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x14082C240 (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 PteShadow; // r9
  __int64 v7; // rsi
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r9
  int v13; // r10d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v19 = a1;
    v4 = a1;
    v5 = a4;
    do
    {
      PteShadow = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v18[0] = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v7 = MI_GET_PAGE_FRAME_FROM_PTE(v18);
        v9 = (__int64 *)(v8 + ((v4 >> 9) & 0x7FFFFFFFF8LL));
        v10 = *v9;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
          v10 = MiReadPteShadow();
        v18[0] = v10;
        v11 = MI_GET_PAGE_FRAME_FROM_PTE(v18);
        *(_QWORD *)(48 * v11 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v11 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v11 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v13 )
        {
          if ( (v12 & 0x80u) == 0LL )
          {
            MxCreatePfn(v7, v4, v11, 0LL);
            if ( v4 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v4 << 25) >> 16, ((__int64)(v4 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), v5);
          }
          else
          {
            v15 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v15 & 0x42) != 0 )
              v15 |= 0x800uLL;
            MiWriteValidPteNewPage(
              (unsigned __int64 *)v4,
              v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100);
            v16 = (__int64)(v4 << 25) >> 16;
            if ( v16 >= v16 + 4096 )
            {
              v5 = a4;
            }
            else
            {
              v17 = v16 + 4096;
              do
              {
                if ( (unsigned int)MiIsRegularMemory(a4, v7) )
                  MxCreatePfn(v7, v16, v11, 1LL);
                ++v7;
                v16 += 8LL;
              }
              while ( v16 < v17 );
              v4 = v19;
              v5 = a4;
            }
          }
        }
        else
        {
          v14 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
          if ( (v14 & 0x42) != 0 )
            v14 |= 0x800uLL;
          MiWriteValidPteNewPage(
            (unsigned __int64 *)v4,
            v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100);
          if ( (unsigned int)MiIsRegularMemory(v5, v7) )
            MxCreatePfn(v7, v4, v11, 1LL);
        }
      }
      v4 += 8LL;
      v19 = v4;
    }
    while ( v4 <= a2 );
  }
}
