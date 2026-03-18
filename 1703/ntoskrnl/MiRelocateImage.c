/*
 * XREFs of MiRelocateImage @ 0x140495140
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14005DF08 (PsSetSystemPagePriorityThread.c)
 *     MiLegacyImageArchitecture @ 0x14005EB2C (MiLegacyImageArchitecture.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EBD4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EC2C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     PsRevertToUserPagePriorityThread @ 0x14006065C (PsRevertToUserPagePriorityThread.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x140119798 (MiUpdateControlAreaCommitCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiSetDeleteOnClose @ 0x14020AD08 (MiSetDeleteOnClose.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCompressRelocations @ 0x140421340 (MiCompressRelocations.c)
 *     MiScanRelocationPage @ 0x140495AC0 (MiScanRelocationPage.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x140495C30 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     MiLogRelocationFaults @ 0x140496184 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x14058207C (MiFreeImageLoadConfig.c)
 *     SeSetImageBaseAddress @ 0x1406F04F4 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r14
  char v14; // r10
  int v15; // r8d
  unsigned int v16; // r15d
  unsigned __int64 v17; // r12
  __int16 v18; // ax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  SIZE_T v21; // r14
  char *PoolWithTag; // rax
  char *v23; // rsi
  char *v25; // rcx
  __int64 v26; // r13
  int v27; // edi
  int Config; // edi
  __int64 v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // r14
  unsigned int *v32; // rdi
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  unsigned int v35; // edx
  __int64 v36; // r14
  unsigned __int64 v37; // rdi
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  int v40; // r9d
  int v41; // edi
  struct _KTHREAD *v42; // r12
  __int64 *v43; // r9
  unsigned int v44; // r8d
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned int v47; // edx
  unsigned __int16 v48; // r8
  _WORD *v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rdi
  unsigned int v52; // r15d
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // r10
  unsigned __int64 ControlAreaPartition; // rax
  unsigned int v58; // r11d
  unsigned __int64 v59; // r14
  volatile signed __int64 *v60; // rdi
  char **v61; // r15
  __int64 v62; // rdi
  __int64 v63; // r14
  unsigned int SessionId; // edi
  int v65; // r15d
  unsigned int v66; // [rsp+30h] [rbp-128h]
  __int64 v67; // [rsp+38h] [rbp-120h]
  unsigned int v69; // [rsp+44h] [rbp-114h]
  unsigned int v70; // [rsp+48h] [rbp-110h]
  int v71; // [rsp+4Ch] [rbp-10Ch]
  __int64 Size; // [rsp+50h] [rbp-108h]
  unsigned int Sizea; // [rsp+50h] [rbp-108h]
  unsigned int v74; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v75; // [rsp+5Ch] [rbp-FCh]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-F8h]
  unsigned int *v77; // [rsp+68h] [rbp-F0h]
  __int64 v78; // [rsp+70h] [rbp-E8h]
  unsigned int v79; // [rsp+78h] [rbp-E0h]
  __int64 v80; // [rsp+80h] [rbp-D8h]
  __int64 v81; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v82; // [rsp+90h] [rbp-C8h]
  __int64 v83; // [rsp+98h] [rbp-C0h]
  char *v84; // [rsp+A0h] [rbp-B8h]
  char **v85; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v86[2]; // [rsp+B0h] [rbp-A8h] BYREF
  _QWORD v87[2]; // [rsp+C0h] [rbp-98h] BYREF
  int v88; // [rsp+D0h] [rbp-88h]

  v77 = a2;
  v78 = a1;
  v7 = 2;
  v82 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v82 + 48)) )
  {
    v7 = 34;
    if ( (*(_BYTE *)(v8 + 44) & 1) != 0 )
      return 0LL;
    v11 = (*(_WORD *)(v8 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v11 = -1073741701;
  }
  v66 = v11;
  v12 = *(unsigned int *)(v9 + 88);
  v74 = v12;
  v13 = *(unsigned int *)(v9 + 92);
  v69 = *(_DWORD *)(v9 + 92);
  v75 = v69;
  if ( (_DWORD)v12 )
  {
    if ( !(_DWORD)v13 )
      return v11;
  }
  else
  {
    if ( (_DWORD)v13 )
      return v11;
    v7 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v67 = *(_QWORD *)a1;
  v83 = v67;
  v85 = *(char ***)(v67 + 96);
  v14 = *(_BYTE *)(a1 + 14) & 0x40;
  v15 = 4;
  if ( !v14 )
    v15 = 8;
  if ( (v10 & 0xFFF) > 4096 - v15 || ((v15 - 1) & v10) != 0 )
    return v11;
  v16 = v10 | 1;
  if ( !v14 )
    v16 = v10;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v7 >= 0x20 && !a4 )
  {
    v18 = *(_WORD *)(v82 + 46);
    if ( (v18 & 0x40) == 0 && MmRegistryState != -1 && (v18 & 0x1000) == 0 )
      return 0LL;
  }
  v19 = *(_DWORD *)(a1 + 8);
  v20 = v19;
  v70 = v19;
  if ( (v7 & 2) == 0 )
  {
    v20 = (v16 >> 12) + 1;
    v70 = v20;
  }
  v79 = v19 << 12;
  if ( (int)v13 + (int)v12 > v19 << 12
    || ((v7 >> 1) & 1) != 0 && (int)v13 + (int)v12 <= (unsigned int)v12
    || ((v7 >> 1) & 1) != 0 && v17 + v12 <= v17
    || (v7 & 2) != 0 && v12 + v17 + v13 <= v17 )
  {
    return v11;
  }
  Size = 8LL * v20;
  v21 = Size + v13 + 96;
  v81 = 0LL;
  v80 = 0LL;
  v88 = 0;
  v71 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x65526D4Du);
  v23 = PoolWithTag;
  v84 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v25 = PoolWithTag;
  do
    v25 += 4096;
  while ( v25 < &PoolWithTag[v21] );
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  PoolWithTag[68] = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 7) = v70;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 11) = 0LL;
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  v26 = v67;
  if ( (v7 & 2) == 0 )
    goto LABEL_41;
  if ( (int)MiMapImageInSystemSpace(v67, 3LL, v87) < 0 )
  {
    ExFreePoolWithTag(v23, 0);
    MiSetDeleteOnClose(v67, 0);
    return 0LL;
  }
  v27 = v87[0];
  v80 = v87[0];
  v71 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v7 |= 1u;
  Config = MiParseImageLoadConfig(v67, v27, v88 << 12, (_DWORD)v77);
  if ( Config >= 0 )
  {
LABEL_41:
    Config = MiSelectImageBase((_DWORD)v23, v78, a4, a6, (__int64)&v81);
    if ( Config < 0 )
    {
      MiFreeImageLoadConfig(v23 + 72);
      ExFreePoolWithTag(v23, 0);
      if ( !a4 )
        Config = v66;
      goto LABEL_130;
    }
    v29 = v81;
    Config = MiUpdateCfgSystemWideBitmap(v67, v81, v23 + 72);
    if ( Config < 0 )
      goto LABEL_129;
    *((_DWORD *)v23 + 16) = v16;
    v30 = v29 - v17;
    *((_QWORD *)v23 + 5) = v29 - v17;
    if ( a5 != -1 )
      v30 = v29 - a5;
    *((_QWORD *)v23 + 6) = v30;
    if ( v29 != v17 || a6 )
    {
      v31 = v23 + 96;
      *(_QWORD *)v23 = v23 + 96;
      memset(v23 + 96, 0, Size);
      v32 = (unsigned int *)&v23[Size + 96];
      v77 = v32;
      *((_QWORD *)v23 + 4) = v32;
      v7 |= 4u;
      if ( (v7 & 2) != 0 )
      {
        memmove(v32, (const void *)(v80 + v74), v69);
        v33 = 0;
        v34 = v75;
        v35 = 0;
        if ( v75 )
        {
          while ( v34 >= 0xA )
          {
            v36 = v32[1];
            if ( (unsigned int)v36 > v34 || (v36 & 1) != 0 || (unsigned int)v36 < 8 )
              goto LABEL_80;
            v37 = *v32;
            v38 = v7 & 0xFFFFFFFB;
            if ( (v37 & 0xFFF) == 0 )
              v38 = v7;
            v7 = v38;
            if ( (int)v37 + 4096 < (unsigned int)v37 || (int)v37 + 4096 > v79 || (unsigned int)v37 < v35 )
              goto LABEL_80;
            if ( (_DWORD)v36 == 8 )
            {
              v34 -= 8;
              v7 = v38 & 0xFFFFFFFB;
            }
            else
            {
              if ( (MiFlags & 0x40000) != 0
                && (*(_DWORD *)(v67 + 92) & 0xC0000) != 0
                && (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v67, v37, v86) + 32) & 4) != 0 )
              {
                Config = -1073741701;
                v26 = v67;
                goto LABEL_128;
              }
              v39 = (unsigned int)v37 >> 12;
              v40 = (int)v77;
              *(_QWORD *)&v23[8 * (v37 >> 12) + 96] |= (unsigned __int64)v77;
              Sizea = (v37 & 0xFFFFF000) + 4096;
              v34 -= v36;
              Config = MiScanRelocationPage(v80, v37, (unsigned int)(v36 - 8) >> 1, v40 + 8, v67, (__int64)v23);
              if ( Config < 0 )
              {
                if ( Config == -1073741207 )
                {
                  Config = 0;
                }
                else if ( Config == -1073741701 )
                {
                  Config = v66;
                }
                v26 = v67;
                goto LABEL_128;
              }
              v7 |= 0x10u;
              if ( v39 <= v33 )
                v39 = v33;
              v33 = v39;
              v35 = Sizea;
            }
            v32 = (unsigned int *)((char *)v77 + v36);
            v77 = (unsigned int *)((char *)v77 + v36);
            if ( !v34 )
            {
              v31 = v23 + 96;
              goto LABEL_81;
            }
          }
          if ( v34 != 8 )
            goto LABEL_80;
          v41 = v75 - 8;
          v31 = v23 + 96;
        }
        else
        {
LABEL_81:
          v41 = v69;
        }
        MiUnmapImageInSystemSpace(v87);
        v42 = CurrentThread;
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v71);
        LOBYTE(v7) = v7 & 0xFE;
        v43 = (__int64 *)*((_QWORD *)v23 + 2);
        if ( v43 )
        {
          while ( 1 )
          {
            v44 = *((_DWORD *)v43 + 3);
            v45 = v31[(unsigned __int64)v44 >> 12];
            if ( v44 >> 12 > v33 )
              v33 = *((_DWORD *)v43 + 3) >> 12;
            if ( v45 > 1 )
            {
              v46 = v45 & 0xFFFFFFFFFFFFFFFEuLL;
              v47 = *(_DWORD *)(v46 + 4) - 8;
              v48 = v44 & 0xFFF;
              v49 = (_WORD *)(v46 + 8);
              v50 = v47 >> 1;
              if ( v50 )
                break;
            }
LABEL_90:
            v43 = (__int64 *)*v43;
            if ( !v43 )
              goto LABEL_91;
          }
          while ( *v49 < 0x1000u || (unsigned __int16)(*v49 & 0xFFF) >= v48 )
          {
            ++v49;
            if ( !--v50 )
              goto LABEL_90;
          }
LABEL_80:
          Config = v66;
          v26 = v67;
          goto LABEL_128;
        }
LABEL_91:
        MiLogRelocationFaults(v67, &v74, v23);
        *((_QWORD *)v23 + 7) = v33 + 1;
        if ( (v7 & 0x14) == 0x14 )
        {
          v23 = MiCompressRelocations(v23, v41);
          v31 = v23 + 96;
        }
        v26 = v67;
      }
      else
      {
        v42 = CurrentThread;
      }
      v31[(unsigned __int64)*((unsigned int *)v23 + 16) >> 12] |= 1uLL;
      if ( (*(_DWORD *)(v26 + 56) & 0x40000000) != 0 )
      {
        v51 = *(_QWORD *)(v78 + 64);
        v52 = v70;
        if ( v70 > *((_DWORD *)v23 + 14) )
          v52 = *((_DWORD *)v23 + 14);
        v53 = 0LL;
        if ( v52 )
        {
          do
          {
            if ( *v31 )
            {
              v54 = MI_READ_PTE_LOCK_FREE(v51 + 8 * v53);
              v86[1] = v54;
              if ( (v54 & 0x800) != 0 )
              {
                v55 = (_QWORD *)(48 * ((MiReverseSwizzleInvalidPte(v54) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
                *v55 = 0LL;
                if ( *((_QWORD *)v23 + 11) )
                  *v56 = v55;
                else
                  *((_QWORD *)v23 + 11) = v55;
              }
            }
            v53 = (unsigned int)(v53 + 1);
            ++v31;
          }
          while ( (unsigned int)v53 < v52 );
          v26 = v67;
          v42 = CurrentThread;
        }
        ControlAreaPartition = MiGetControlAreaPartition(v26);
        v59 = v58;
        if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v58, 0LL) )
        {
          *((_QWORD *)v23 + 11) = 0LL;
          Config = -1073741670;
          goto LABEL_128;
        }
        --v42->SpecialApcDisable;
        v60 = (volatile signed __int64 *)(v78 + 40);
        ExAcquirePushLockExclusiveEx(v78 + 40, 0LL);
        MiUpdateControlAreaCommitCount(v26, v59);
        if ( (_InterlockedExchangeAdd64(v60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v60);
        KeAbPostRelease((ULONG_PTR)v60);
        KiLeaveGuardedRegionUnsafe((__int64)v42);
      }
      LOBYTE(v7) = v7 | 8;
      MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)v42, (__int64)v23);
      v61 = v85;
      *v85 = v23;
      v62 = v81;
      *(_QWORD *)(v78 + 32) = v81;
      v63 = v82;
      *(_QWORD *)v82 += *((_QWORD *)v23 + 5);
      *(_DWORD *)(v26 + 92) |= 0x800000u;
      if ( (*(_DWORD *)(v26 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v26, 0);
      if ( (MiFlags & 0x4000) != 0
        && (*(_DWORD *)(v26 + 92) & 0xC0000) != 0
        && (Config = SeSetImageBaseAddress((unsigned __int64)v61[1] & 0xFFFFFFFFFFFFFFF8uLL, v62), Config < 0) )
      {
        v65 = a6;
      }
      else
      {
        if ( a4 )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v65 = a6;
        if ( a6 == 1 )
        {
          Config = 0;
        }
        else
        {
          if ( (*(_DWORD *)(v26 + 56) & 0x40000000) != 0 )
            MiWalkEntireImage((__int64 *)v26, 0LL, 8, SessionId);
          Config = MiWalkEntireImage((__int64 *)v26, 0LL, 2, SessionId);
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)v42, (__int64)v23);
      if ( Config >= 0 && !v65 )
        *(_BYTE *)(v63 + 51) |= 4u;
    }
LABEL_128:
    if ( (v7 & 8) != 0 )
      goto LABEL_130;
LABEL_129:
    MiFreeRelocations(v26, v23);
    goto LABEL_130;
  }
  ExFreePoolWithTag(v23, 0);
LABEL_130:
  if ( (v7 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v87);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v71);
  }
  return (unsigned int)Config;
}
