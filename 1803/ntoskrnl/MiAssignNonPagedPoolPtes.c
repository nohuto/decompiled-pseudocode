/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x1400A5A10
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 *__fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v5; // r14
  int v6; // r9d
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 ValidPte; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int16 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 *v25; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 *v27; // rax
  __int64 v28; // r8
  unsigned int v29; // ecx
  char v30; // cl
  unsigned __int64 v31; // rax
  int v33; // [rsp+68h] [rbp+20h] BYREF

  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v8 = v5 + 8 * (a2 - 1);
  ValidPte = MiMakeValidPte(v5, 0LL, v6 | 0xA0000000, v6 | 0xA0000000);
  MiFlushTbAsNeeded(v5, a2, 0, 1);
  if ( v5 <= v8 )
  {
    v10 = 0x2AAAAAAAAAAAAAABLL;
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFFFFFFLL;
    do
    {
      v13 = *(_QWORD *)v5;
      if ( v5 >= v11
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v5 >> 3) & 0x1FF));
          v16 = v13 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v13;
          LOWORD(v13) = v16;
          if ( (v15 & 0x42) != 0 )
            LOWORD(v13) = v16 | 0x42;
        }
      }
      if ( (v13 & 0xC01) == 0 && (v13 & 0x3E0) == 0 )
      {
        v17 = v10;
        v18 = a3[5];
        ValidPte ^= (ValidPte ^ ((((unsigned __int64)((unsigned __int128)((__int64)(a3 + 0xB000000000LL) * (__int128)v17) >> 64) >> 63)
                                + ((__int64)((unsigned __int128)((__int64)(a3 + 0xB000000000LL) * (__int128)v17) >> 64) >> 3)) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*((_BYTE *)a3 + 35) & 0x10) == 0 )
        {
          v18 &= ~0x200000000000000uLL;
          a3[2] = DemandZeroPte;
          a3[5] = v18;
        }
        v19 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v20 = *v19;
        if ( (unsigned __int64)v19 >= v11
          && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 8 * ((v21 >> 3) & 0x1FF));
            v24 = v20 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v20;
            v20 = v24;
            if ( (v23 & 0x42) != 0 )
              v20 = v24 | 0x42;
          }
        }
        v25 = (__int64 *)*a3;
        a3[5] = v18 ^ v12 & (v18 ^ (v20 >> 12));
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v33 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)a3 + 6, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v33);
            while ( a3[3] < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)a3 + 6, 0x3FuLL) );
          v11 = 0xFFFFF6FB7DBED000uLL;
          v12 = 0xFFFFFFFFFLL;
        }
        *a3 = 0LL;
        a3[5] &= ~0x200000000000000uLL;
        v27 = MiLargePageContainingFrames;
        v28 = a3[5];
        v29 = 0;
        while ( (v12 & a3[5]) != *v27 )
        {
          ++v29;
          ++v27;
          if ( v29 >= 3 )
            goto LABEL_38;
        }
        v28 &= 0xFFFFFFF000000000uLL;
        a3[5] = v28;
LABEL_38:
        v30 = *((_BYTE *)a3 + 34);
        if ( (v30 & 0xC0) != 0x40 )
        {
          MiChangePageAttribute(a3, 1LL, 1LL);
          v30 = *((_BYTE *)a3 + 34);
          v12 = 0xFFFFFFFFFLL;
          v11 = 0xFFFFF6FB7DBED000uLL;
        }
        v31 = a3[3] & 0xC000000000000001uLL;
        a3[1] = v5;
        a3[3] = v31 | 1;
        *((_WORD *)a3 + 16) = 1;
        *((_BYTE *)a3 + 34) = v30 & 0xF8 | 6;
        _InterlockedAnd64(a3 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        *(_QWORD *)v5 = ValidPte;
        if ( v5 >= v11 && v5 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v5, ValidPte, v28);
        a3 = v25;
        v10 = 0x2AAAAAAAAAAAAAABLL;
      }
      v5 += 8LL;
    }
    while ( v5 <= v8 );
  }
  return a3;
}
