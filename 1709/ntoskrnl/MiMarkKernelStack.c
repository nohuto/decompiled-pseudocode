/*
 * XREFs of MiMarkKernelStack @ 0x140029F00
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x14082EBE0 (MiMarkBootKernelStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiMarkKernelStack(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v5; // rsi
  __int64 PteShadow; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // al
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v5 = a1;
    do
    {
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v5, *v5);
      v15 = PteShadow;
      v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
      v11 = v10 + 48 * v7;
      v14 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v14);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
        v8 = 0xFEBFFFFFFFFFFFFFuLL;
        v9 = 0x80000000000000LL;
      }
      v12 = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        v12 = MiReadPteShadow(v5, *v5);
      if ( PteShadow == v12 )
      {
        *(_QWORD *)(v11 + 40) = v9 | v8 & *(_QWORD *)(v11 + 40);
        *(_QWORD *)v11 ^= (*(_QWORD *)v11 ^ (a3 >> 3)) & 0xFFFFFFFFFFELL;
        if ( a3 )
        {
          if ( (*(_QWORD *)v11 & 1) == 0 )
            *(_QWORD *)v11 |= 1uLL;
        }
        v13 = *(_BYTE *)(v11 + 35);
        *(_QWORD *)(v11 + 16) |= 0x3E0uLL;
        *(_BYTE *)(v11 + 35) = v13 & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v5;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( (unsigned __int64)v5 < a2 );
  }
}
