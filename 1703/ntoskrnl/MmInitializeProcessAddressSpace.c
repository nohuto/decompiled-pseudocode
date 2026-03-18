/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14049DBB4
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x1408244AC (MiInitializeBootProcess.c)
 * Callees:
 *     MiInitializeWorkingSetList @ 0x1400644D4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x140064644 (MiAllowWorkingSetExpansion.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiReferenceCfgVad @ 0x14044CB68 (MiReferenceCfgVad.c)
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14049E028 (MiInitializeProcessTopDownEntropy.c)
 *     MiInsertProcessVads @ 0x14049E0E0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14049E15C (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14049E620 (MiInitializeProcessBottomUpEntropy.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1406B2DB0 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1406B2E0C (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        __int64 a1,
        __int64 BugCheckParameter1,
        __int64 a3,
        unsigned int *a4,
        int a5)
{
  PVOID PoolWithTag; // rax
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 *v12; // r8
  int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  int inserted; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r8
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 *v27; // rax
  _QWORD *v28; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int128 v31; // xmm0
  _QWORD *v32; // rax
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int16 v36; // cx
  __int64 v37; // rcx
  __int16 v38; // r8
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  _OWORD v44[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Src[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[80]; // [rsp+E0h] [rbp-20h] BYREF

  Src[0] = 0;
  memset(&Src[2], 0, 0x48uLL);
  memset(&v46[48], 0, 0x20uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A0uLL, 0x3250694Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1A0uLL);
    if ( BugCheckParameter1 )
    {
      v30 = *(_QWORD *)(BugCheckParameter1 + 1296);
      v41 = *(_QWORD *)(v30 + 40);
      memmove(Src, (const void *)(v30 + 48), 0x50uLL);
      v31 = *(_OWORD *)(v30 + 272);
      v32 = &v44[1];
      v33 = *(_OWORD *)(v30 + 288);
      v42 = *(_QWORD *)(v30 + 240);
      v34 = 2LL;
      v44[0] = v31;
      v35 = *(_OWORD *)(v30 + 304);
      v44[1] = v33;
      v44[2] = v35;
      do
      {
        *v32 = 0LL;
        v32 += 3;
        --v34;
      }
      while ( v34 );
    }
    else
    {
      v41 = 0LL;
      v42 = 0LL;
      memset(v44, 0, sizeof(v44));
    }
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v46);
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_QWORD *)(a1 + 880) = 0LL;
    *(_QWORD *)(a1 + 1576) = 0LL;
    if ( (MmTrackLockedPages & 0x10000001) == 1 )
      MiInitializeLockedPagesTracking(a1);
    P = 0LL;
    v43 = a1 + 1280;
    MiInitializeWorkingSetList(a1 + 1280, v10, 0, 0LL);
    v11 = *(_QWORD *)(a1 + 1296);
    v12 = (__int64 *)&v46[56];
    v13 = 256;
    v14 = 1;
    *(_DWORD *)(v11 + 136) = 1;
    *(_QWORD *)(v11 + 360) = v11 + 320;
    v15 = 4LL;
    *(_DWORD *)(v11 + 352) = 256;
    *(_QWORD *)&v46[56] = qword_14036C5C8 + 0x10000000;
    *(_QWORD *)&v46[64] = qword_14036C5C8 + 268451840;
    v16 = v11 + 368;
    do
    {
      v17 = *v12;
      if ( !*v12 )
        break;
      v13 <<= 9;
      ++v14;
      *(_DWORD *)v16 = v13;
      ++v12;
      *(_QWORD *)(v16 + 8) = v17;
      v16 += 16LL;
    }
    while ( v14 < 4 );
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x400u);
    v40 = 0LL;
    inserted = MiComputeProcessUserVa(a1, BugCheckParameter1, a3, (unsigned int)&P, (__int64)&v40);
    if ( inserted >= 0 )
    {
      if ( BugCheckParameter1
        || (MiInitializeProcessBottomUpEntropy(a1),
            MiInitializeProcessTopDownEntropy(a1, a3, 0LL),
            inserted = MiInitializeVadBitMap(0LL),
            inserted >= 0) )
      {
        inserted = MiInsertProcessVads(a1, &P, v19, v20);
        if ( inserted >= 0 )
        {
          if ( a3 )
          {
            v21 = MiMapProcessExecutable(a1, a3, a4, v40);
            LOBYTE(v22) = 1;
            inserted = v21;
            MiInitializeProcessTopDownEntropy(a1, a3, v22);
LABEL_15:
            MiAllowWorkingSetExpansion(v43);
LABEL_16:
            KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)v46, 0LL);
            return (unsigned int)inserted;
          }
          if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 && !BugCheckParameter1 )
            goto LABEL_15;
          *a4 &= ~0x10u;
          if ( !BugCheckParameter1 )
          {
            KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)v46, 0LL);
            return 0;
          }
          if ( *(_QWORD *)(BugCheckParameter1 + 720) )
          {
            inserted = -1073741595;
          }
          else
          {
            *(_QWORD *)(a1 + 1104) = *(_QWORD *)(BugCheckParameter1 + 1104);
            *(_DWORD *)(a1 + 1112) = *(_DWORD *)(BugCheckParameter1 + 1112);
            *(_WORD *)(a1 + 1116) = *(_WORD *)(BugCheckParameter1 + 1116);
            *(_BYTE *)(a1 + 1118) = *(_BYTE *)(BugCheckParameter1 + 1118);
            *(_QWORD *)(a1 + 1152) = *(_QWORD *)(BugCheckParameter1 + 1152);
            memmove((void *)(v11 + 48), Src, 0x50uLL);
            v24 = v44[0];
            v25 = v44[1];
            *(_QWORD *)(v11 + 40) = v41;
            *(_OWORD *)(v11 + 272) = v24;
            v26 = v44[2];
            *(_OWORD *)(v11 + 288) = v25;
            *(_OWORD *)(v11 + 304) = v26;
            inserted = MiInitializeVadBitMap(1LL);
            if ( inserted >= 0 )
            {
              v27 = *(__int64 **)(BugCheckParameter1 + 1064);
              if ( v27 )
              {
                v36 = *((_WORD *)v27 + 4);
                if ( v36 == 332 || v36 == 452 )
                {
                  if ( *v27 )
                  {
                    v37 = 0LL;
                    v38 = *((_WORD *)v27 + 4);
                    if ( v38 == 332 || v38 == 452 )
                      v37 = *v27;
                    **(_QWORD **)(a1 + 1064) = v37;
                  }
                }
              }
              if ( (*a4 & 0x80u) != 0 )
                inserted = MiSessionCreate();
              else
                inserted = 0;
              if ( (a5 & 1) != 0 )
                *(_QWORD *)(v11 + 240) = v42 + 1;
              else
                *(_QWORD *)(v11 + 240) = 0LL;
              v28 = (_QWORD *)(v11 + 168);
              do
              {
                v28[1] = v28;
                *v28 = v28;
                v28 += 2;
                --v15;
              }
              while ( v15 );
              KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)v46, 0LL);
              if ( inserted >= 0 )
              {
                inserted = MiCloneProcessAddressSpace(BugCheckParameter1, (_KPROCESS *)a1, a5);
                if ( inserted >= 0 )
                {
                  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v46);
                  CurrentThread = KeGetCurrentThread();
                  if ( *(_QWORD *)&v44[2] )
                    MiReferenceCfgVad((__int64)CurrentThread, *((unsigned __int64 *)&v44[1] + 1), 1);
                  if ( *((_QWORD *)&v44[0] + 1) )
                    MiReferenceCfgVad((__int64)CurrentThread, *(unsigned __int64 *)&v44[0], 0);
                  KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)v46, 0LL);
                }
              }
              MiAllowWorkingSetExpansion(v43);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_16;
  }
  return 3221225626LL;
}
