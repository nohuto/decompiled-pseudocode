/*
 * XREFs of MxZeroBootMappings @ 0x14084A468
 * Callers:
 *     MiZeroBootMappings @ 0x14084A3F8 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x14084A468 (MxZeroBootMappings.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxZeroBootMappings @ 0x14084A468 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x14084A574 (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rbx
  __int64 PteShadow; // rax
  ULONG_PTR v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = 0xFFFFF6FB7DBED7F8uLL;
    v6 = a1;
    do
    {
      PteShadow = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v9 = PteShadow;
      if ( PteShadow )
      {
        if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            MxZeroBootMappings((__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4096);
          v8 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v9);
          MiFreeBootPageTable(v8);
          v5 = 0xFFFFF6FB7DBED7F8uLL;
        }
        *(_QWORD *)v6 = 0LL;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= v5 )
          MiWritePteShadow();
      }
      v6 += 8LL;
      v5 = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v6 < a2 );
  }
}
