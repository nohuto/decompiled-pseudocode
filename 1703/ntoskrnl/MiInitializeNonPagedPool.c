/*
 * XREFs of MiInitializeNonPagedPool @ 0x140803DE4
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140127490 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140154930 (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeNonPagedPool()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // r12
  unsigned int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rdi
  PSLIST_HEADER v19; // rbp
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  _SLIST_HEADER *v24; // r14
  _SLIST_HEADER *v25; // r13
  unsigned __int64 v26; // r10
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  _SLIST_HEADER *v30; // r14
  int v31; // r10d
  __int64 v32; // r12
  unsigned __int64 Alignment; // rax
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdi
  __int64 *v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // [rsp+30h] [rbp-A8h]
  __int64 v39; // [rsp+38h] [rbp-A0h]
  __int64 v40; // [rsp+40h] [rbp-98h]
  PSLIST_HEADER v41; // [rsp+50h] [rbp-88h]
  unsigned __int64 v42; // [rsp+58h] [rbp-80h]
  __int64 v43; // [rsp+60h] [rbp-78h]
  __int64 v44; // [rsp+68h] [rbp-70h]
  unsigned __int64 v45; // [rsp+70h] [rbp-68h]
  unsigned __int64 v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+80h] [rbp-58h]
  __int64 v48; // [rsp+E0h] [rbp+8h] BYREF
  int v49; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v50; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+F8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  qword_14036CFC0 = v3;
  if ( (MiFlags & 1) == 0 && !MmSpecialPoolTag && MmProtectFreedNonPagedPool != 1 )
  {
    v4 = 4;
    dword_14036BD08[0] = 4;
    if ( qword_1403817D0 < 0x80000 )
    {
      if ( qword_1403817D0 < 0x40000 )
        goto LABEL_11;
      v4 = 8;
    }
    else
    {
      v4 = 32;
    }
    dword_14036BD08[0] = v4;
LABEL_11:
    v5 = (unsigned int *)&unk_14036BD0C;
    v6 = 2LL;
    while ( 1 )
    {
      *v5++ = v4 >> 1;
      if ( !--v6 )
        break;
      v4 = dword_14036BD08[0];
    }
  }
  v7 = MmPfnDatabase + (MxPfnAllocation << 12);
  v42 = v7;
  v8 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  v45 = v8;
  if ( (((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF) != 0 )
    v9 = 0x200000 - v8;
  else
    v9 = 0LL;
  v51 = v9;
  qword_14036D090 = 0x100000000LL;
  v40 = qword_14036D800[0];
  v10 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v39 = v10;
  v11 = v10 << 9;
  v47 = v10 << 9;
  v12 = ((v10 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v13 = (((v10 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v14 = MiReservePtes((__int64)&qword_14036D0A0, ((unsigned __int16)KeNumberNodes * (v13 + 2 * v12)) >> 12, 0LL);
  if ( !v14 )
    return 0LL;
  v16 = 0;
  if ( KeNumberNodes )
  {
    v17 = 8 * (v13 >> 12);
    v43 = v17;
    v18 = 8 * (v12 >> 12);
    v46 = v10 << 21;
    do
    {
      v19 = qword_14036C1C8;
      v20 = v16;
      v21 = 25LL * v16;
      v22 = v40 + ((v11 * v16) << 12);
      v23 = v16 + 1;
      v44 = v20;
      LODWORD(v48) = v23;
      v41 = qword_14036C1C8;
      v38 = v21 * 16;
      qword_14036C1C8[v21 + 20].Alignment = v22;
      v19[v21 + 20].Region = v40 + ((v11 * v23) << 12);
      MiInitializeDynamicBitmap(&v19[v21 + 23].Alignment, (__int64)(v14 << 25) >> 16, v11, 19);
      v24 = &v19[v21 + 24];
      v50 = 2LL;
      v14 += v17;
      v25 = &v19[v21 + 21];
      do
      {
        MiInitializeDynamicBitmap(v25, (__int64)(v14 << 25) >> 16, v39, 3);
        v14 += v18;
        v41[v21 + 11].Alignment = v25->Alignment;
        v25->Alignment = 8LL;
        ++v25;
        v24->Alignment = 8LL;
        v24 = (_SLIST_HEADER *)((char *)v24 + 8);
        --v50;
      }
      while ( v50 );
      v7 = v42;
      v9 = v51;
      v17 = v43;
      v8 = v45;
      if ( !(unsigned int)MiBuildDynamicRegion(
                            (__int64 *)((char *)&qword_14036C1C8[11].Region + v38),
                            v40 + ((v39 * v44) << 21),
                            v46) )
        return 0LL;
      v16 = v48;
      v11 = v47;
    }
    while ( (unsigned int)v48 < (unsigned __int16)KeNumberNodes );
  }
  if ( v9 )
  {
    v48 = MI_READ_PTE_LOCK_FREE(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v27 = v48;
    if ( (v48 & 0x80u) == 0LL )
      v9 = v26;
  }
  else
  {
    v27 = 0LL;
    v48 = 0LL;
  }
  if ( v9 )
  {
    v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
    v29 = (v8 >> 12) + ((v28 >> 12) & 0xFFFFFFFFFLL);
    v30 = &qword_14036C1C8[25 * ((unsigned __int8)HIBYTE(*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL)) >> 2)];
    v32 = MiExpandNonPagedPool(
            512,
            0x200uLL,
            (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL)) >> 2,
            ((unsigned __int16)(v8 >> 12) + (unsigned __int16)(v28 >> 12)) & 0x1FF,
            v31,
            &v49);
    if ( v32 == -1 )
      return 0LL;
    Alignment = v30[20].Alignment;
    v34 = v8 + Alignment + (v32 << 12);
    v35 = (v34 - Alignment) >> 12;
    RtlClearBitsEx((__int64)&v30[23], v35, v9 >> 12);
    _bittestandreset64((signed __int64 *)v30[21].Region, v35 >> 9);
    v36 = (__int64 *)(((v34 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v36 = v27;
    if ( MiPteInShadowRange((unsigned __int64)v36) )
      MiWritePteShadow();
    MiInitializeLargeNonPagedPoolLeafFrames(v37, v29);
    v30[16].Alignment = v29;
    v30[16].Region = v29 | 0x1FF;
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
