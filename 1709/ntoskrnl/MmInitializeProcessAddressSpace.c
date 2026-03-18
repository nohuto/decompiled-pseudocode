/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14045E2B4
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140855684 (MiInitializeBootProcess.c)
 * Callees:
 *     MiInitializeWorkingSetList @ 0x1400145B4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x140014724 (MiAllowWorkingSetExpansion.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiReferenceCfgVad @ 0x14045DBA8 (MiReferenceCfgVad.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14045E728 (MiInitializeProcessTopDownEntropy.c)
 *     MiInsertProcessVads @ 0x14045E7E0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14045E85C (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x14045EAE8 (MiComputeProcessUserVa.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14045EE48 (MiInitializeProcessBottomUpEntropy.c)
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1406DED70 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1406DEDD8 (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        char a5)
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
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int128 v31; // xmm0
  _QWORD *v32; // rax
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int16 v36; // cx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  _OWORD v42[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Src[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v44[80]; // [rsp+E0h] [rbp-20h] BYREF

  Src[0] = 0;
  memset(&Src[2], 0, 0x48uLL);
  memset(&v44[48], 0, 0x20uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1A0uLL, 0x3250694Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1A0uLL);
    if ( a2 )
    {
      v30 = *(_QWORD *)(a2 + 1296);
      v39 = *(_QWORD *)(v30 + 40);
      memmove(Src, (const void *)(v30 + 48), 0x50uLL);
      v31 = *(_OWORD *)(v30 + 272);
      v32 = &v42[1];
      v33 = *(_OWORD *)(v30 + 288);
      v40 = *(_QWORD *)(v30 + 240);
      v34 = 2LL;
      v42[0] = v31;
      v35 = *(_OWORD *)(v30 + 304);
      v42[1] = v33;
      v42[2] = v35;
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
      v39 = 0LL;
      v40 = 0LL;
      memset(v42, 0, sizeof(v42));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v44);
    *(_QWORD *)(BugCheckParameter1 + 872) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 880) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1576) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    P = 0LL;
    v41 = BugCheckParameter1 + 1280;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1280, v10, 0, 0LL);
    v11 = *(_QWORD *)(BugCheckParameter1 + 1296);
    v12 = (__int64 *)&v44[56];
    v13 = 256;
    v14 = 1;
    *(_DWORD *)(v11 + 136) = 1;
    *(_QWORD *)(v11 + 360) = v11 + 320;
    v15 = 4LL;
    *(_DWORD *)(v11 + 352) = 256;
    *(_QWORD *)&v44[56] = qword_140388950 + 0x10000000;
    *(_QWORD *)&v44[64] = qword_140388950 + 268451840;
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
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x400u);
    v38 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, (unsigned int)&P, (__int64)&v38);
    if ( inserted >= 0 )
    {
      if ( a2
        || (MiInitializeProcessBottomUpEntropy(BugCheckParameter1),
            MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3, 0LL),
            inserted = MiInitializeVadBitMap(0LL),
            inserted >= 0) )
      {
        inserted = MiInsertProcessVads(BugCheckParameter1, &P, v19, v20);
        if ( inserted >= 0 )
        {
          if ( a3 )
          {
            v21 = MiMapProcessExecutable(BugCheckParameter1, a3, a4, v38);
            LOBYTE(v22) = 1;
            inserted = v21;
            MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3, v22);
LABEL_14:
            MiAllowWorkingSetExpansion(v41);
LABEL_15:
            KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)v44, 0LL);
            return (unsigned int)inserted;
          }
          if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0 && !a2 )
            goto LABEL_14;
          *a4 &= ~0x10u;
          if ( !a2 )
          {
            KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)v44, 0LL);
            return 0;
          }
          if ( (*(_BYTE *)(a2 + 720) & 1) != 0 )
          {
            inserted = -1073741595;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 1104) = *(_QWORD *)(a2 + 1104);
            *(_DWORD *)(BugCheckParameter1 + 1112) = *(_DWORD *)(a2 + 1112);
            *(_WORD *)(BugCheckParameter1 + 1116) = *(_WORD *)(a2 + 1116);
            *(_BYTE *)(BugCheckParameter1 + 1118) = *(_BYTE *)(a2 + 1118);
            *(_QWORD *)(BugCheckParameter1 + 1152) = *(_QWORD *)(a2 + 1152);
            memmove((void *)(v11 + 48), Src, 0x50uLL);
            v24 = v42[0];
            v25 = v42[1];
            *(_QWORD *)(v11 + 40) = v39;
            *(_OWORD *)(v11 + 272) = v24;
            v26 = v42[2];
            *(_OWORD *)(v11 + 288) = v25;
            *(_OWORD *)(v11 + 304) = v26;
            inserted = MiInitializeVadBitMap(1LL);
            if ( inserted >= 0 )
            {
              v27 = *(_QWORD *)(a2 + 1064);
              if ( v27 )
              {
                v36 = *(_WORD *)(v27 + 8);
                if ( v36 == 332 || v36 == 452 )
                {
                  if ( *(_QWORD *)v27 )
                    **(_QWORD **)(BugCheckParameter1 + 1064) = *(_QWORD *)v27;
                }
              }
              if ( (*a4 & 0x80u) != 0 )
                inserted = MiSessionCreate();
              else
                inserted = 0;
              if ( (a5 & 1) != 0 )
                *(_QWORD *)(v11 + 240) = v40 + 1;
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
              KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)v44, 0LL);
              if ( inserted >= 0 )
              {
                inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                if ( inserted >= 0 )
                {
                  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v44);
                  CurrentThread = KeGetCurrentThread();
                  if ( *(_QWORD *)&v42[2] )
                    MiReferenceCfgVad((__int64)CurrentThread, *((unsigned __int64 *)&v42[1] + 1), 1);
                  if ( *((_QWORD *)&v42[0] + 1) )
                    MiReferenceCfgVad((__int64)CurrentThread, *(unsigned __int64 *)&v42[0], 0);
                  KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)v44, 0LL);
                }
              }
              MiAllowWorkingSetExpansion(v41);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_15;
  }
  return 3221225626LL;
}
