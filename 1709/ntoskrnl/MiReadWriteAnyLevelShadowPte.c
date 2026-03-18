/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x14017C214
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14043D2B4 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // r11
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 v23[8]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v24[5]; // [rsp+28h] [rbp-38h] BYREF

  v6 = a2;
  v7 = a2;
  v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v24[v6 + 1] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  v9 = 17;
  v10 = a2;
  v11 = 0LL;
  v23[0] = 17;
  v24[0] = 0LL;
  v12 = v8;
  v13 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v14 = v24[v10--];
    if ( v10 == 3 )
    {
      v12 += 8 * ((v14 >> 3) & 0x1FF);
    }
    else
    {
      if ( v9 != 17 )
      {
        LOBYTE(v13) = v9;
        MiUnmapPageInHyperSpaceWorker(v8, v13, 0x80000000LL);
      }
      v15 = v11;
      if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v11 = v24[0];
        v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)v24 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v15 = v24[0] | 0x20LL;
          if ( (v17 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
        else
        {
          v15 = v24[0];
        }
      }
      v18 = MiMapPageInHyperSpaceWorker((v15 >> 12) & 0xFFFFFFFFFLL, v23, 0x80000000);
      v9 = v23[0];
      v8 = v18;
      v12 = v18 + 8 * ((v14 >> 3) & 0x1FF);
    }
    if ( a3 && v10 == v7 )
    {
      if ( (a4 & 1) != 0 )
      {
        v19 = a4 | 0x100;
        if ( v10 )
          v19 = a4;
        a4 = v19;
      }
      *(_QWORD *)v12 = a4;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v12, a4);
    }
    else
    {
      v11 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v21 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v21 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
        v9 = v23[0];
      }
      v24[0] = v11;
    }
    v13 = 0xFFFFF6FB7DBED7F8uLL;
  }
  while ( v10 != v7 );
  if ( v9 != 17 )
  {
    LOBYTE(v13) = v9;
    MiUnmapPageInHyperSpaceWorker(v8, v13, 0x80000000LL);
  }
  return v11;
}
