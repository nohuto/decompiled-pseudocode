/*
 * XREFs of MiInitializeNonPagedPool @ 0x14082D7A8
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400F5A50 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013985C (MiInitializeNonPagedPoolThresholds.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeNonPagedPool()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  ULONG_PTR v13; // rbp
  unsigned int v15; // ecx
  __int64 v16; // r14
  __int64 v17; // rsi
  PSLIST_HEADER v18; // rdi
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  _SLIST_HEADER *v23; // rbx
  PSLIST_HEADER v24; // rbp
  ULONG_PTR v25; // rdi
  unsigned __int64 *p_Alignment; // rbp
  __int64 *v27; // rdi
  __int64 PteShadow; // rbx
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r8
  _SLIST_HEADER *v33; // r15
  __int64 v34; // r14
  unsigned __int64 Alignment; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r10
  __int64 *v39; // r14
  __int64 v40; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+40h] [rbp-88h]
  PSLIST_HEADER v43; // [rsp+48h] [rbp-80h]
  unsigned __int64 v44; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  unsigned __int64 v47; // [rsp+70h] [rbp-58h]
  __int64 v48; // [rsp+D0h] [rbp+8h] BYREF
  int v49; // [rsp+D8h] [rbp+10h] BYREF
  ULONG_PTR v50; // [rsp+E0h] [rbp+18h]
  __int64 v51; // [rsp+E8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  qword_140389280 = v3;
  if ( (MiFlags & 1) == 0 && !MmSpecialPoolTag && MmProtectFreedNonPagedPool != 1 )
  {
    dword_140388008[0] = 4;
    if ( qword_14038B750 < 0x80000 )
    {
      if ( qword_14038B750 < 0x40000 )
        goto LABEL_11;
      v4 = 8;
    }
    else
    {
      v4 = 32;
    }
    dword_140388008[0] = v4;
LABEL_11:
    v5 = (unsigned int *)&unk_14038800C;
    v6 = 2LL;
    do
    {
      *v5++ = (unsigned int)dword_140388008[0] >> 1;
      --v6;
    }
    while ( v6 );
  }
  v7 = MmPfnDatabase + (MxPfnAllocation << 12);
  v44 = v7;
  v8 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  qword_140389350 = 0x100000000LL;
  v41 = qword_140389AD0[0];
  v9 = (0x200000 - v8) & -(__int64)(v8 != 0);
  v10 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v40 = v10;
  v11 = ((v10 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v42 = v10 << 9;
  v12 = (((v10 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v13 = MiReservePtes((__int64)&qword_140389360, ((unsigned __int16)KeNumberNodes * (v12 + 2 * v11)) >> 12, 1LL);
  if ( !v13 )
    return 0LL;
  v15 = 0;
  if ( KeNumberNodes )
  {
    v16 = 8 * (v12 >> 12);
    v46 = v16;
    v17 = 8 * (v11 >> 12);
    v47 = v10 << 21;
    do
    {
      v18 = qword_140388510;
      v19 = v15;
      v20 = 25LL * v15;
      v21 = v41 + ((v42 * v15) << 12);
      v22 = v15 + 1;
      LODWORD(v48) = v22;
      v45 = v19;
      v43 = qword_140388510;
      qword_140388510[v20 + 20].Alignment = v21;
      v18[v20 + 20].Region = v41 + ((v42 * v22) << 12);
      MiInitializeDynamicBitmap(&v18[v20 + 23].Alignment, (__int64)(v13 << 25) >> 16, v42, 19);
      v51 = 2LL;
      v23 = &v18[v20 + 24];
      v50 = v16 + v13;
      v24 = v18 + 21;
      v25 = v50;
      p_Alignment = &v24[v20].Alignment;
      do
      {
        MiInitializeDynamicBitmap(p_Alignment, (__int64)(v25 << 25) >> 16, v40, 3);
        v25 += v17;
        v43[v20 + 11].Alignment = *p_Alignment;
        *p_Alignment = 8LL;
        p_Alignment += 2;
        v23->Alignment = 8LL;
        v23 = (_SLIST_HEADER *)((char *)v23 + 8);
        --v51;
      }
      while ( v51 );
      v16 = v46;
      v9 = (0x200000 - v8) & -(__int64)(v8 != 0);
      v50 = v25;
      v7 = v44;
      if ( !(unsigned int)MiBuildDynamicRegion(
                            (__int64 *)&qword_140388510[v20 + 11].Region,
                            v41 + ((v40 * v45) << 21),
                            v47) )
        return 0LL;
      v15 = v48;
      v13 = v50;
    }
    while ( (unsigned int)v48 < (unsigned __int16)KeNumberNodes );
  }
  v27 = (__int64 *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( v9 )
  {
    PteShadow = *v27;
    if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v29 = v9 & -(__int64)((PteShadow & 0x80u) != 0LL);
  }
  else
  {
    PteShadow = 0LL;
    v29 = 0LL;
  }
  v48 = PteShadow;
  if ( v29 )
  {
    v30 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v48);
    v31 = v30 + (v8 >> 12);
    v32 = *(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) >> 58;
    v33 = &qword_140388510[25 * v32];
    v34 = MiExpandNonPagedPool(512, 0x200uLL, v32, ((_WORD)v30 + (unsigned __int16)(v8 >> 12)) & 0x1FF, 0, &v49);
    if ( v34 == -1 )
      return 0LL;
    Alignment = v33[20].Alignment;
    v36 = v8 + Alignment + (v34 << 12);
    v37 = (v36 - Alignment) >> 12;
    RtlClearBitsEx((__int64)&v33[23], v37, v29 >> 12);
    _bittestandreset64((signed __int64 *)v33[21].Region, v37 >> 9);
    v38 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = (__int64 *)(((v36 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v39 = PteShadow;
    if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    MiInitializeLargeNonPagedPoolLeafFrames(v38, v31);
    v33[16].Alignment = v31;
    v33[16].Region = v31 | 0x1FF;
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
