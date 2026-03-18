/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x140176218
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int8 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v20[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v21; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v7 = a2;
  v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v20[v6 + 1] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  v9 = 17;
  v10 = a2;
  v11 = 0LL;
  v21 = 17;
  v20[0] = 0LL;
  v12 = v8;
  do
  {
    v13 = v20[v10--];
    if ( v10 == 3 )
    {
      v16 = (__int64 *)(v12 + 8 * ((v13 >> 3) & 0x1FF));
    }
    else
    {
      if ( v9 != 17 )
        MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000);
      v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v20);
      v8 = MiMapPageInHyperSpaceWorker((v14 >> 12) & 0xFFFFFFFFFLL, &v21, 0x80000000, v15);
      v16 = (__int64 *)(v8 + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( a3 && v10 == v7 )
    {
      if ( (a4 & 1) != 0 && !v10 )
        a4 |= 0x100uLL;
      *v16 = a4;
      if ( MiPteInShadowRange((unsigned __int64)v16) )
        MiWritePteShadow(v18, a4, v19);
    }
    else
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
      v20[0] = v11;
    }
  }
  while ( v10 != v7 );
  if ( v9 != 17 )
    MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000);
  return v11;
}
