/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x1404ECD04
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x14089E3A8 (MiInitializeBootProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x14006A904 (MiAllowWorkingSetExpansion.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiMapProcessExecutable @ 0x1404E94B0 (MiMapProcessExecutable.c)
 *     MiAllocateProcessVads @ 0x1404EA744 (MiAllocateProcessVads.c)
 *     MiInsertProcessVads @ 0x1404ED1D0 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x1404ED24C (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x1404ED4D4 (MiComputeProcessUserVa.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1404ED5F4 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404ED6CC (MiInitializeProcessBottomUpEntropy.c)
 *     MiReferenceCfgVad @ 0x1405764D4 (MiReferenceCfgVad.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x140749BF4 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x140749C5C (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
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
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int16 v24; // cx
  _QWORD *v25; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int128 v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // r13
  __int128 v32; // xmm0
  int v33; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  _OWORD v38[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v39[11]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE Src[176]; // [rsp+D0h] [rbp-30h] BYREF

  memset(Src, 0, 0xA8uLL);
  memset(&v39[6], 0, 0x20uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x3250694Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x210uLL);
    if ( a2 )
    {
      v27 = *(_QWORD *)(a2 + 1296);
      memmove(Src, (const void *)(v27 + 48), 0xA8uLL);
      v28 = &v38[1];
      v29 = *(_OWORD *)(v27 + 392);
      v33 = *(_DWORD *)(v27 + 216);
      v30 = 2LL;
      v31 = *(_QWORD *)(v27 + 328);
      v38[0] = *(_OWORD *)(v27 + 376);
      v36 = v31;
      v32 = *(_OWORD *)(v27 + 408);
      v38[1] = v29;
      v38[2] = v32;
      do
      {
        *v28 = 0LL;
        v28 += 3;
        --v30;
      }
      while ( v30 );
    }
    else
    {
      v33 = 0;
      v36 = 0LL;
      memset(v38, 0, sizeof(v38));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v39);
    *(_QWORD *)(BugCheckParameter1 + 872) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 880) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1576) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    P = 0LL;
    v37 = BugCheckParameter1 + 1280;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1280, v10, 0, 0LL);
    v11 = *(_QWORD *)(BugCheckParameter1 + 1296);
    v12 = &v39[7];
    v13 = 256;
    v14 = 1;
    *(_DWORD *)(v11 + 224) = 1;
    *(_QWORD *)(v11 + 464) = v11 + 424;
    v15 = 4LL;
    *(_DWORD *)(v11 + 456) = 256;
    v39[7] = qword_1403CBB68 + 0x10000000;
    v39[8] = qword_1403CBB68 + 268451840;
    v16 = v11 + 472;
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
    v35 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v35);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0
        || (P = MiAllocateProcessVads(BugCheckParameter1, v35)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v11 + 336));
        if ( a2
          || (MiInitializeProcessBottomUpEntropy(BugCheckParameter1),
              MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3),
              inserted = MiInitializeVadBitMap(0LL),
              inserted >= 0) )
        {
          inserted = MiInsertProcessVads(BugCheckParameter1, &P);
          if ( inserted >= 0 )
          {
            if ( a3 )
            {
              inserted = MiMapProcessExecutable((_KPROCESS *)BugCheckParameter1, a3, a4);
LABEL_17:
              MiAllowWorkingSetExpansion(v37);
LABEL_18:
              KiUnstackDetachProcess((__int64)v39, 0LL);
              return (unsigned int)inserted;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0 && !a2 )
              goto LABEL_17;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KiUnstackDetachProcess((__int64)v39, 0LL);
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
              memmove((void *)(v11 + 48), Src, 0xA8uLL);
              v20 = v38[0];
              v21 = v38[1];
              *(_DWORD *)(v11 + 216) = v33;
              *(_OWORD *)(v11 + 376) = v20;
              v22 = v38[2];
              *(_OWORD *)(v11 + 392) = v21;
              *(_OWORD *)(v11 + 408) = v22;
              inserted = MiInitializeVadBitMap(1LL);
              if ( inserted >= 0 )
              {
                v23 = *(_QWORD *)(a2 + 1064);
                if ( v23 )
                {
                  v24 = *(_WORD *)(v23 + 8);
                  if ( v24 == 332 || v24 == 452 )
                  {
                    if ( *(_QWORD *)v23 )
                      **(_QWORD **)(BugCheckParameter1 + 1064) = *(_QWORD *)v23;
                  }
                }
                if ( (*a4 & 0x80u) != 0 )
                  inserted = MiSessionCreate();
                else
                  inserted = 0;
                *(_QWORD *)(v11 + 328) = (v36 + 1) & -(__int64)((a5 & 1) != 0);
                v25 = (_QWORD *)(v11 + 256);
                do
                {
                  v25[1] = v25;
                  *v25 = v25;
                  v25 += 2;
                  --v15;
                }
                while ( v15 );
                KiUnstackDetachProcess((__int64)v39, 0LL);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v39);
                    CurrentThread = KeGetCurrentThread();
                    if ( *(_QWORD *)&v38[2] )
                      MiReferenceCfgVad(CurrentThread, *((_QWORD *)&v38[1] + 1), 1LL);
                    if ( *((_QWORD *)&v38[0] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v38[0], 0LL);
                    KiUnstackDetachProcess((__int64)v39, 0LL);
                  }
                }
                MiAllowWorkingSetExpansion(v37);
                return (unsigned int)inserted;
              }
            }
          }
        }
      }
      else
      {
        inserted = -1073741670;
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_18;
  }
  return 3221225626LL;
}
