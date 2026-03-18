/*
 * XREFs of MiRelocateImage @ 0x14053C470
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiUpdateControlAreaCommitCount @ 0x14004B4CC (MiUpdateControlAreaCommitCount.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C674 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C874 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiLegacyImageArchitecture @ 0x14009D544 (MiLegacyImageArchitecture.c)
 *     PsRevertToUserPagePriorityThread @ 0x14009D568 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x14009D5D0 (PsSetSystemPagePriorityThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiSetDeleteOnClose @ 0x14024FFD8 (MiSetDeleteOnClose.c)
 *     MiSetLeafPfnBuddy @ 0x14026546C (MiSetLeafPfnBuddy.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14026772C (MiMakeUnusedImageExtentsCold.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1404F18A8 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     MiScanRelocationPage @ 0x14053CE30 (MiScanRelocationPage.c)
 *     MiLogRelocationFaults @ 0x14053CFAC (MiLogRelocationFaults.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 *     MiCompressRelocations @ 0x14053D480 (MiCompressRelocations.c)
 *     MiFreeRelocations @ 0x1405F09CC (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1405F0A68 (MiFreeImageLoadConfig.c)
 *     SeSetImageBaseAddress @ 0x14078C364 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r10d
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r11
  ULONG_PTR v16; // r13
  unsigned int v17; // eax
  unsigned __int64 v18; // r12
  __int16 v19; // cx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  int v22; // ecx
  __int64 v23; // rsi
  SIZE_T v24; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rcx
  int v28; // esi
  int Config; // esi
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // r12
  unsigned int *v33; // rcx
  unsigned int v34; // r12d
  unsigned int v35; // esi
  unsigned int v36; // r9d
  unsigned __int64 v37; // r8
  unsigned int v38; // edx
  unsigned __int64 v39; // r10
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // esi
  __int64 *v43; // rdx
  unsigned int v44; // ecx
  unsigned int v45; // r9d
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  unsigned int v48; // eax
  unsigned __int16 v49; // r9
  _WORD *v50; // r8
  unsigned int v51; // eax
  _QWORD *v52; // rsi
  __int64 v53; // r15
  unsigned int v54; // r9d
  unsigned int i; // r10d
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 ControlAreaPartition; // rax
  unsigned int v60; // r11d
  unsigned __int64 v61; // r15
  __int64 v62; // r12
  volatile signed __int64 *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rdi
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rsi
  _QWORD *v71; // r15
  unsigned int v72; // edi
  unsigned int v73; // [rsp+30h] [rbp-138h]
  unsigned int v74; // [rsp+30h] [rbp-138h]
  unsigned int v75; // [rsp+34h] [rbp-134h]
  int v77; // [rsp+3Ch] [rbp-12Ch]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-128h]
  unsigned int *v80; // [rsp+48h] [rbp-120h]
  unsigned int v81; // [rsp+50h] [rbp-118h]
  int v82; // [rsp+58h] [rbp-110h]
  unsigned int v83; // [rsp+58h] [rbp-110h]
  __int64 Size; // [rsp+60h] [rbp-108h]
  unsigned int Sizea; // [rsp+60h] [rbp-108h]
  __int64 v86; // [rsp+68h] [rbp-100h]
  unsigned int v87; // [rsp+68h] [rbp-100h]
  unsigned __int64 v89; // [rsp+78h] [rbp-F0h]
  unsigned int v90; // [rsp+80h] [rbp-E8h]
  __int64 v91; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v92; // [rsp+90h] [rbp-D8h] BYREF
  _DWORD v93[2]; // [rsp+98h] [rbp-D0h] BYREF
  _QWORD *v94; // [rsp+A0h] [rbp-C8h]
  struct _KTHREAD *v95; // [rsp+A8h] [rbp-C0h]
  __int64 v96; // [rsp+B0h] [rbp-B8h]
  _QWORD *v97; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v98[2]; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v99[2]; // [rsp+D0h] [rbp-98h] BYREF
  int v100; // [rsp+E0h] [rbp-88h]

  v7 = 2;
  v8 = *(_QWORD *)(a1 + 56);
  v97 = (_QWORD *)v8;
  if ( MiLegacyImageArchitecture(*(_WORD *)(v8 + 48)) )
  {
    v7 = 34;
    if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
      return 0LL;
    v13 = (*(_WORD *)(v8 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v13 = -1073741701;
  }
  v14 = *(unsigned int *)(v9 + 88);
  v93[0] = v14;
  v15 = *(unsigned int *)(v10 + 92);
  v75 = *(_DWORD *)(v10 + 92);
  v93[1] = v75;
  if ( (_DWORD)v14 )
  {
    if ( !(_DWORD)v15 )
      return v13;
  }
  else
  {
    if ( (_DWORD)v15 )
      return v13;
    v7 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v16 = *(_QWORD *)a1;
  v96 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  if ( (v11 & 0xFFF) > 4096 - ((*(_BYTE *)(a1 + 14) & 0x40) != 0 ? 4 : 8)
    || (((*(_BYTE *)(a1 + 14) & 0x40) != 0 ? 3 : 7) & v11) != 0 )
  {
    return v13;
  }
  v17 = v11 | 1;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
    v17 = v11;
  v73 = v17;
  v18 = *(_QWORD *)(a1 + 32);
  if ( v7 >= 0x20 && !a4 )
  {
    v19 = *(_WORD *)(v8 + 46);
    if ( (v19 & 0x40) == 0 && MmRegistryState != -1 && (v19 & 0x1000) == 0 )
      return 0LL;
  }
  v20 = *(_DWORD *)(a1 + 8);
  v21 = v20;
  v81 = v20;
  v22 = (v7 >> 1) & 1;
  if ( !v22 )
  {
    v21 = (v17 >> 12) + 1;
    v81 = v21;
  }
  v90 = v20 << 12;
  if ( (int)v15 + (int)v14 > v20 << 12 )
    return v13;
  if ( v22 )
  {
    if ( (int)v15 + (int)v14 <= (unsigned int)v14 )
      return v13;
    v86 = v14;
    if ( v14 + v18 <= v18 )
      return v13;
  }
  else
  {
    v86 = v14;
  }
  if ( v22 && v18 + v15 + v14 <= v18 )
    return v13;
  v23 = v21;
  Size = 8LL * v21;
  v24 = v15 + Size + 96;
  v92 = 0LL;
  v91 = 0LL;
  v100 = 0;
  v77 = 0;
  CurrentThread = KeGetCurrentThread();
  v95 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x65526D4Du);
  v26 = PoolWithTag;
  v94 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v27 = PoolWithTag;
  do
    v27 += 512;
  while ( v27 < (_QWORD *)((char *)PoolWithTag + v24) );
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 68) = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[7] = v23;
  PoolWithTag[2] = 0LL;
  PoolWithTag[11] = 0LL;
  PoolWithTag[9] = 0LL;
  PoolWithTag[10] = 0LL;
  PoolWithTag[3] = 0LL;
  if ( (v7 & 2) == 0 )
    goto LABEL_40;
  if ( (int)MiMapImageInSystemSpace((__int64 *)v16, 3, (__int64)v99) < 0 )
  {
    ExFreePoolWithTag(v26, 0);
    MiSetDeleteOnClose(v16, 0);
    return 0LL;
  }
  v28 = v99[0];
  v91 = v99[0];
  v77 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v7 |= 1u;
  Config = MiParseImageLoadConfig(v16, v28, v100 << 12, a2);
  if ( Config >= 0 )
  {
LABEL_40:
    Config = MiSelectImageBase((__int64)v26, a1, a4, a6, &v92);
    if ( Config < 0 )
    {
      MiFreeImageLoadConfig(v26 + 9);
      ExFreePoolWithTag(v26, 0);
      if ( !a4 )
        Config = v13;
      goto LABEL_130;
    }
    v30 = v92;
    v89 = v92;
    Config = MiUpdateCfgSystemWideBitmap((__int64 *)v16, v92, (__int64)(v26 + 9));
    if ( Config < 0 )
      goto LABEL_129;
    *((_DWORD *)v26 + 16) = v73;
    v26[5] = v30 - v18;
    v31 = a5 - v18;
    if ( a5 == -1 )
      v31 = 0LL;
    v26[6] = v31;
    if ( v89 != v18 || a6 )
    {
      v32 = v26 + 12;
      *v26 = v26 + 12;
      memset(v26 + 12, 0, Size);
      v33 = (unsigned int *)&v26[(unsigned __int64)Size / 8 + 12];
      v80 = v33;
      v26[4] = v33;
      v7 |= 4u;
      if ( (v7 & 2) != 0 )
      {
        memmove(v33, (const void *)(v86 + v91), v75);
        v34 = 0;
        v35 = v75;
        v36 = 0;
        if ( v75 )
        {
          v37 = (unsigned __int64)v80;
          while ( v35 >= 0xA )
          {
            v38 = *(_DWORD *)(v37 + 4);
            v74 = v38;
            if ( v38 > v35 || (v38 & 1) != 0 || v38 < 8 )
              goto LABEL_80;
            v39 = *(unsigned int *)v37;
            v82 = v39;
            v40 = v7 & 0xFFFFFFFB;
            if ( (v39 & 0xFFF) == 0 )
              v40 = v7;
            v7 = v40;
            if ( (int)v39 + 4096 < (unsigned int)v39 || (int)v39 + 4096 > v90 || (unsigned int)v39 < v36 )
              goto LABEL_80;
            if ( v38 == 8 )
            {
              v35 -= 8;
              v7 = v40 & 0xFFFFFFFB;
            }
            else
            {
              if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v16 + 92) & 0xC0000) != 0 )
              {
                if ( (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v16, v39, v98) + 32) & 4) != 0 )
                {
                  Config = -1073741701;
                  goto LABEL_128;
                }
                v38 = v74;
                LODWORD(v39) = v82;
                v37 = (unsigned __int64)v80;
              }
              v83 = (unsigned int)v39 >> 12;
              v26[((unsigned __int64)(unsigned int)v39 >> 12) + 12] |= v37;
              Sizea = (v39 & 0xFFFFF000) + 4096;
              v87 = v35 - v38;
              Config = MiScanRelocationPage(v91, v39, (v38 - 8) >> 1, (int)v37 + 8, v16, (__int64)v26);
              if ( Config < 0 )
              {
                if ( Config == -1073741207 )
                {
                  Config = 0;
                }
                else if ( Config == -1073741701 )
                {
                  Config = v13;
                }
                goto LABEL_128;
              }
              v7 |= 0x10u;
              v41 = v83;
              if ( v83 <= v34 )
                v41 = v34;
              v34 = v41;
              v35 = v87;
              v38 = v74;
              v37 = (unsigned __int64)v80;
              v36 = Sizea;
            }
            v37 += v38;
            v80 = (unsigned int *)v37;
            if ( !v35 )
            {
              v42 = v75;
              goto LABEL_82;
            }
          }
          if ( v35 != 8 )
            goto LABEL_80;
          v42 = v75 - 8;
        }
        else
        {
          v42 = 0;
        }
LABEL_82:
        MiUnmapImageInSystemSpace(v99);
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v77);
        LOBYTE(v7) = v7 & 0xFE;
        v43 = (__int64 *)v26[2];
        if ( v43 )
        {
          while ( 1 )
          {
            v44 = v34;
            v45 = *((_DWORD *)v43 + 3);
            v46 = v26[((unsigned __int64)v45 >> 12) + 12];
            v34 = v45 >> 12;
            if ( v45 >> 12 <= v44 )
              v34 = v44;
            if ( v46 > 1 )
            {
              v47 = v46 & 0xFFFFFFFFFFFFFFFEuLL;
              v48 = *(_DWORD *)(v47 + 4) - 8;
              v49 = v45 & 0xFFF;
              v50 = (_WORD *)(v47 + 8);
              v51 = v48 >> 1;
              if ( v51 )
                break;
            }
LABEL_90:
            v43 = (__int64 *)*v43;
            if ( !v43 )
              goto LABEL_91;
          }
          while ( *v50 < 0x1000u || (unsigned __int16)(*v50 & 0xFFF) >= v49 )
          {
            ++v50;
            if ( !--v51 )
              goto LABEL_90;
          }
LABEL_80:
          Config = v13;
          goto LABEL_128;
        }
LABEL_91:
        MiLogRelocationFaults(v16, v93, v26);
        v26[7] = v34 + 1;
        if ( (v7 & 0x14) == 0x14 )
          v26 = (_QWORD *)MiCompressRelocations(v26, v42);
        v32 = v26 + 12;
      }
      v32[(unsigned __int64)*((unsigned int *)v26 + 16) >> 12] |= 1uLL;
      if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
      {
        v52 = 0LL;
        v53 = *(_QWORD *)(a1 + 64);
        v54 = *((_DWORD *)v26 + 14);
        if ( v81 <= v54 )
          v54 = v81;
        for ( i = 0; i < v54; ++v32 )
        {
          if ( *v32 )
          {
            v56 = MI_READ_PTE_LOCK_FREE(v53 + 8LL * i);
            v98[1] = v56;
            if ( (v56 & 0x800) != 0 )
            {
              v57 = MiReverseSwizzleInvalidPte(v56);
              MiSetLeafPfnBuddy((_QWORD *)(48 * ((v57 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), 0LL);
              if ( v26[11] )
                MiSetLeafPfnBuddy(v52, v58);
              else
                v26[11] = v58;
              v52 = (_QWORD *)v58;
            }
          }
          ++i;
        }
        ControlAreaPartition = MiGetControlAreaPartition(v16);
        v61 = v60;
        if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v60, 0) )
        {
          v26[11] = 0LL;
          Config = -1073741670;
          goto LABEL_128;
        }
        v62 = (__int64)CurrentThread;
        --CurrentThread->SpecialApcDisable;
        v63 = (volatile signed __int64 *)(a1 + 40);
        ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
        MiUpdateControlAreaCommitCount(v16, v61);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v63, v64, v65, v66);
        KeAbPostRelease((ULONG_PTR)v63);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v67 = v92;
      }
      else
      {
        v62 = (__int64)CurrentThread;
        v67 = v89;
      }
      LOBYTE(v7) = v7 | 8;
      MI_LOCK_RELOCATIONS_EXCLUSIVE(v62, (__int64)v26);
      v70 = v96;
      *(_QWORD *)(v96 + 32) = v26;
      *(_QWORD *)(a1 + 32) = v67;
      v71 = v97;
      *v97 += v26[5];
      *(_DWORD *)(v16 + 92) |= 0x800000u;
      if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v16, 0);
      if ( (MiFlags & 0x4000) == 0
        || (*(_DWORD *)(v16 + 92) & 0xC0000) == 0
        || (Config = SeSetImageBaseAddress(*(_QWORD *)(v70 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v67), Config >= 0) )
      {
        Config = 0;
        v72 = a4 ? -1 : MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( a6 != 1 )
        {
          if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
          {
            MiWalkEntireImage(v16, 0LL, 8u, v72);
            if ( (HvlEnlightenments & 0x400000) != 0 )
              MiMakeUnusedImageExtentsCold(v16);
          }
          Config = MiWalkEntireImage(v16, 0LL, 2u, v72);
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE(v62, (__int64)v26, v68, v69);
      if ( Config >= 0 && !a6 )
        *((_BYTE *)v71 + 51) |= 4u;
    }
LABEL_128:
    if ( (v7 & 8) != 0 )
      goto LABEL_130;
LABEL_129:
    MiFreeRelocations(v16, v26);
    goto LABEL_130;
  }
  ExFreePoolWithTag(v26, 0);
LABEL_130:
  if ( (v7 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v99);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v77);
  }
  return (unsigned int)Config;
}
