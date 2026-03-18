/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x14017CABC
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14041D6E8 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x14041D938 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbp
  _QWORD *v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v18[8]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v19[5]; // [rsp+28h] [rbp-70h] BYREF

  v5 = a2;
  v7 = a2;
  v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v19[v7 + 1] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v7;
    }
    while ( v7 < 4 );
  }
  v9 = 17;
  v10 = a2;
  v11 = 0LL;
  v18[0] = 17;
  v19[0] = 0LL;
  v12 = v8;
  do
  {
    v13 = v19[v10--];
    if ( v10 == 3 )
    {
      v14 = (_QWORD *)(v12 + 8 * ((v13 >> 3) & 0x1FF));
    }
    else
    {
      if ( v9 != 17 )
        MiUnmapPageInHyperSpaceWorker(v8, v9);
      v15 = MI_READ_PTE_LOCK_FREE(v19);
      v8 = MiMapPageInHyperSpaceWorker((v15 >> 12) & 0xFFFFFFFFFLL, v18, 0x80000000);
      v14 = (_QWORD *)(v8 + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( a3 && v10 == v5 )
    {
      if ( (a4 & 1) != 0 && !v10 )
        a4 |= 0x100uLL;
      *v14 = a4;
      if ( MiPteInShadowRange((unsigned __int64)v14) )
        MiWritePteShadow(v16);
    }
    else
    {
      v11 = MI_READ_PTE_LOCK_FREE(v14);
      v19[0] = v11;
    }
  }
  while ( v10 != v5 );
  if ( v9 != 17 )
    MiUnmapPageInHyperSpaceWorker(v8, v9);
  return v11;
}
