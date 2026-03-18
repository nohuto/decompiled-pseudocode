/*
 * XREFs of MiRelocateImage @ 0x1404F8070
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x14001FCD0 (MiUpdateControlAreaCommitCount.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsSetSystemPagePriorityThread @ 0x1400B61AC (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400B6F44 (PsRevertToUserPagePriorityThread.c)
 *     MiLegacyImageArchitecture @ 0x1400B7968 (MiLegacyImageArchitecture.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400BB278 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400BB478 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiSetDeleteOnClose @ 0x140211B84 (MiSetDeleteOnClose.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiSetLeafPfnBuddy @ 0x14022A97C (MiSetLeafPfnBuddy.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiParseImageLoadConfig @ 0x1404F6FD8 (MiParseImageLoadConfig.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiLogRelocationFaults @ 0x1404F7B1C (MiLogRelocationFaults.c)
 *     MiCompressRelocations @ 0x1404F7C90 (MiCompressRelocations.c)
 *     MiScanRelocationPage @ 0x1404F8A20 (MiScanRelocationPage.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1405043BC (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 *     MiFreeRelocations @ 0x1405946BC (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1405E056C (MiFreeImageLoadConfig.c)
 *     SeSetImageBaseAddress @ 0x140727F4C (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  signed int Config; // edi
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // r10
  int v15; // r8d
  unsigned int v16; // r15d
  unsigned __int64 v17; // r12
  __int16 v18; // ax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // r14
  SIZE_T v22; // rdi
  char *PoolWithTag; // rax
  char *v24; // rsi
  char *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rax
  char *v30; // r14
  unsigned __int64 v31; // r13
  unsigned int v32; // edi
  unsigned int v33; // r12d
  unsigned int v34; // edx
  __int64 v35; // r14
  unsigned __int64 v36; // rdi
  unsigned int v37; // ecx
  __int64 v38; // r15
  unsigned int v39; // r15d
  int v40; // r12d
  struct _KTHREAD *v41; // r13
  __int64 *v42; // r9
  unsigned int v43; // r8d
  unsigned __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned int v47; // edx
  unsigned __int16 v48; // r8
  _WORD *v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rdi
  __int64 *v52; // r9
  unsigned int v53; // ecx
  signed __int64 v54; // r14
  __int64 v55; // rdi
  __int64 PteShadow; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  _QWORD *v59; // r10
  __int64 ControlAreaPartition; // rax
  unsigned int v61; // r11d
  unsigned __int64 v62; // r14
  __int64 v63; // r9
  volatile signed __int64 *v64; // rdi
  char **v65; // r12
  __int64 v66; // rdi
  __int64 v67; // r14
  unsigned int SessionId; // edi
  int v69; // r12d
  int v70; // [rsp+20h] [rbp-148h]
  signed int v71; // [rsp+30h] [rbp-138h]
  __int64 v72; // [rsp+38h] [rbp-130h]
  unsigned int v73; // [rsp+40h] [rbp-128h]
  int v75; // [rsp+48h] [rbp-120h]
  __int64 Size; // [rsp+50h] [rbp-118h]
  unsigned int Sizea; // [rsp+50h] [rbp-118h]
  unsigned int v78; // [rsp+58h] [rbp-110h]
  unsigned int v80; // [rsp+60h] [rbp-108h]
  unsigned int v81; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v82; // [rsp+6Ch] [rbp-FCh]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-F8h]
  __int64 v84; // [rsp+78h] [rbp-F0h]
  __int64 v85; // [rsp+80h] [rbp-E8h]
  unsigned int v86; // [rsp+88h] [rbp-E0h]
  __int64 v87; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v88; // [rsp+98h] [rbp-D0h]
  __int64 v89; // [rsp+A0h] [rbp-C8h]
  char *v90; // [rsp+A8h] [rbp-C0h]
  __int64 v91; // [rsp+B0h] [rbp-B8h] BYREF
  char **v92; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v94[2]; // [rsp+D0h] [rbp-98h] BYREF
  int v95; // [rsp+E0h] [rbp-88h]

  v85 = a1;
  v8 = 2;
  v88 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v88 + 48)) )
  {
    v8 = 34;
    if ( (*(_BYTE *)(v9 + 44) & 1) != 0 )
      return 0LL;
    Config = (*(_WORD *)(v9 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    Config = -1073741701;
  }
  v71 = Config;
  v12 = *(unsigned int *)(a2 + 88);
  v81 = v12;
  v13 = *(unsigned int *)(a2 + 92);
  v73 = *(_DWORD *)(a2 + 92);
  v82 = v73;
  if ( (_DWORD)v12 )
  {
    if ( !(_DWORD)v13 )
      return (unsigned int)Config;
LABEL_10:
    if ( (*(_BYTE *)(a1 + 15) & 1) == 0 )
    {
      v72 = *(_QWORD *)a1;
      v89 = v72;
      v92 = *(char ***)(v72 + 96);
      v14 = *(_BYTE *)(a1 + 14) & 0x40;
      v15 = 4;
      if ( !v14 )
        v15 = 8;
      if ( (v10 & 0xFFF) > 4096 - v15 || ((v15 - 1) & v10) != 0 )
        return (unsigned int)Config;
      v16 = v10 | 1;
      if ( !v14 )
        v16 = v10;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v8 < 0x20
        || a4
        || (v18 = *(_WORD *)(v88 + 46), (v18 & 0x40) != 0)
        || MmRegistryState == -1
        || (v18 & 0x1000) != 0 )
      {
        v19 = *(_DWORD *)(a1 + 8);
        v20 = v19;
        v78 = v19;
        if ( ((v8 >> 1) & 1) == 0 )
        {
          v20 = (v16 >> 12) + 1;
          v78 = v20;
        }
        v86 = v19 << 12;
        if ( (int)v13 + (int)v12 > v19 << 12
          || ((v8 >> 1) & 1) != 0
          && ((int)v13 + (int)v12 <= (unsigned int)v12 || v17 + v12 <= v17 || v12 + v17 + v13 <= v17) )
        {
          return (unsigned int)Config;
        }
        v21 = v20;
        Size = 8LL * v20;
        v22 = Size + v13 + 96;
        v87 = 0LL;
        v84 = 0LL;
        v95 = 0;
        v75 = 0;
        CurrentThread = KeGetCurrentThread();
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x65526D4Du);
        v24 = PoolWithTag;
        v90 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        v26 = PoolWithTag;
        do
          v26 += 4096;
        while ( v26 < &PoolWithTag[v22] );
        *((_QWORD *)PoolWithTag + 5) = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        PoolWithTag[68] = 0;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *((_QWORD *)PoolWithTag + 7) = v21;
        *((_QWORD *)PoolWithTag + 2) = 0LL;
        *((_QWORD *)PoolWithTag + 11) = 0LL;
        *((_QWORD *)PoolWithTag + 9) = 0LL;
        *((_QWORD *)PoolWithTag + 10) = 0LL;
        *((_QWORD *)PoolWithTag + 3) = 0LL;
        if ( (v8 & 2) != 0 )
        {
          if ( (int)MiMapImageInSystemSpace((__int64 *)v72, 3, (__int64)v94) < 0 )
          {
            ExFreePoolWithTag(v24, 0);
            MiSetDeleteOnClose(v72, 0);
            return 0LL;
          }
          v84 = v94[0];
          v75 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
          v8 |= 1u;
          Config = MiParseImageLoadConfig(v72, v84, v95 << 12, a2, v70, (__int64 *)v24 + 9);
          if ( Config < 0 )
          {
            ExFreePoolWithTag(v24, 0);
            goto LABEL_134;
          }
        }
        Config = MiSelectImageBase((_DWORD)v24, v85, a4, a6, (__int64)&v87);
        if ( Config < 0 )
        {
          MiFreeImageLoadConfig(v24 + 72);
          ExFreePoolWithTag(v24, 0);
          if ( !a4 )
            Config = v71;
          goto LABEL_134;
        }
        v27 = v87;
        Config = MiUpdateCfgSystemWideBitmap(v72, v87, v24 + 72);
        if ( Config < 0 )
        {
          v28 = v72;
          goto LABEL_133;
        }
        *((_DWORD *)v24 + 16) = v16;
        v29 = v27 - v17;
        *((_QWORD *)v24 + 5) = v27 - v17;
        if ( a5 != -1 )
          v29 = v27 - a5;
        *((_QWORD *)v24 + 6) = v29;
        if ( v27 != v17 || a6 )
        {
          v30 = v24 + 96;
          *(_QWORD *)v24 = v24 + 96;
          memset(v24 + 96, 0, Size);
          v31 = (unsigned __int64)&v24[Size + 96];
          *((_QWORD *)v24 + 4) = v31;
          v8 |= 4u;
          if ( (v8 & 2) != 0 )
          {
            memmove(&v30[Size], (const void *)(v84 + v81), v73);
            v32 = 0;
            Sizea = 0;
            v33 = v82;
            v34 = 0;
            if ( v82 )
            {
              while ( v33 >= 0xA )
              {
                v35 = *(unsigned int *)(v31 + 4);
                if ( (unsigned int)v35 > v33 || (v35 & 1) != 0 || (unsigned int)v35 < 8 )
                  goto LABEL_79;
                v36 = *(unsigned int *)v31;
                v37 = v8 & 0xFFFFFFFB;
                if ( (*(_DWORD *)v31 & 0xFFF) == 0 )
                  v37 = v8;
                v8 = v37;
                if ( (int)v36 + 4096 < (unsigned int)v36 || (int)v36 + 4096 > v86 || (unsigned int)v36 < v34 )
                  goto LABEL_79;
                if ( (_DWORD)v35 == 8 )
                {
                  v33 -= 8;
                  v8 = v37 & 0xFFFFFFFB;
                  v32 = Sizea;
                }
                else
                {
                  if ( (MiFlags & 0x40000) != 0 )
                  {
                    v38 = v72;
                    if ( (*(_DWORD *)(v72 + 92) & 0xC0000) != 0
                      && (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v72, *(unsigned int *)v31, &v93) + 32) & 4) != 0 )
                    {
                      Config = -1073741701;
                      goto LABEL_131;
                    }
                  }
                  v39 = (unsigned int)v36 >> 12;
                  *(_QWORD *)&v24[8 * (v36 >> 12) + 96] |= v31;
                  v80 = (v36 & 0xFFFFF000) + 4096;
                  v33 -= v35;
                  Config = MiScanRelocationPage(v84, v36, (unsigned int)(v35 - 8) >> 1, (int)v31 + 8, v72, (__int64)v24);
                  if ( Config < 0 )
                  {
                    if ( Config == -1073741207 )
                    {
                      Config = 0;
                    }
                    else if ( Config == -1073741701 )
                    {
                      Config = v71;
                    }
                    v38 = v72;
                    goto LABEL_131;
                  }
                  v8 |= 0x10u;
                  if ( v39 <= Sizea )
                    v39 = Sizea;
                  v32 = v39;
                  Sizea = v39;
                  v34 = v80;
                }
                v31 += v35;
                if ( !v33 )
                {
                  v30 = v24 + 96;
                  goto LABEL_80;
                }
              }
              if ( v33 != 8 )
                goto LABEL_79;
              v40 = v82 - 8;
              v30 = v24 + 96;
            }
            else
            {
LABEL_80:
              v40 = v73;
            }
            MiUnmapImageInSystemSpace((__int64)v94);
            v41 = CurrentThread;
            PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
            LOBYTE(v8) = v8 & 0xFE;
            v42 = (__int64 *)*((_QWORD *)v24 + 2);
            if ( v42 )
            {
              while ( 1 )
              {
                v43 = *((_DWORD *)v42 + 3);
                v44 = *(_QWORD *)&v30[8 * ((unsigned __int64)v43 >> 12)];
                v45 = v43 >> 12;
                if ( v43 >> 12 <= v32 )
                  v45 = v32;
                v32 = v45;
                if ( v44 > 1 )
                {
                  v46 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
                  v47 = *(_DWORD *)(v46 + 4) - 8;
                  v48 = v43 & 0xFFF;
                  v49 = (_WORD *)(v46 + 8);
                  v50 = v47 >> 1;
                  if ( v50 )
                    break;
                }
LABEL_89:
                v42 = (__int64 *)*v42;
                if ( !v42 )
                  goto LABEL_90;
              }
              while ( *v49 < 0x1000u || (unsigned __int16)(*v49 & 0xFFF) >= v48 )
              {
                ++v49;
                if ( !--v50 )
                  goto LABEL_89;
              }
LABEL_79:
              Config = v71;
              v38 = v72;
              goto LABEL_131;
            }
LABEL_90:
            v38 = v72;
            MiLogRelocationFaults(v72, &v81, (__int64)v24);
            *((_QWORD *)v24 + 7) = v32 + 1;
            if ( (v8 & 0x14) == 0x14 )
            {
              v24 = MiCompressRelocations((__int64)v24, v40);
              v30 = v24 + 96;
            }
          }
          else
          {
            v38 = v72;
            v41 = CurrentThread;
          }
          *(_QWORD *)&v30[8 * ((unsigned __int64)*((unsigned int *)v24 + 16) >> 12)] |= 1uLL;
          if ( (*(_DWORD *)(v38 + 56) & 0x40000000) != 0 )
          {
            v51 = v85;
            v52 = *(__int64 **)(v85 + 64);
            v53 = v78;
            if ( v78 > *((_DWORD *)v24 + 14) )
              v53 = *((_DWORD *)v24 + 14);
            if ( v53 )
            {
              v54 = v30 - (char *)v52;
              v55 = v53;
              do
              {
                if ( *(__int64 *)((char *)v52 + v54) )
                {
                  PteShadow = *v52;
                  if ( (unsigned __int64)v52 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v52 <= 0xFFFFF6FB7DBED7F8uLL )
                    PteShadow = MiReadPteShadow();
                  v91 = PteShadow;
                  if ( (PteShadow & 0x800) != 0 )
                  {
                    v57 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v91);
                    MiSetLeafPfnBuddy((_QWORD *)(48 * v57 - 0x58000000000LL), 0LL);
                    if ( *((_QWORD *)v24 + 11) )
                      MiSetLeafPfnBuddy(v59, v58);
                    else
                      *((_QWORD *)v24 + 11) = v58;
                  }
                }
                ++v52;
                --v55;
              }
              while ( v55 );
              v38 = v72;
              v41 = CurrentThread;
              v51 = v85;
            }
            ControlAreaPartition = MiGetControlAreaPartition(v38);
            v62 = v61;
            if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v61, 0LL, v63) )
            {
              *((_QWORD *)v24 + 11) = 0LL;
              Config = -1073741670;
LABEL_131:
              if ( (v8 & 8) != 0 )
                goto LABEL_134;
              v28 = v38;
LABEL_133:
              MiFreeRelocations(v28, v24);
LABEL_134:
              if ( (v8 & 1) != 0 )
              {
                MiUnmapImageInSystemSpace((__int64)v94);
                PsRevertToUserPagePriorityThread((__int64)CurrentThread, v75);
              }
              return (unsigned int)Config;
            }
            --v41->SpecialApcDisable;
            v64 = (volatile signed __int64 *)(v51 + 40);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v64, 0LL);
            MiUpdateControlAreaCommitCount(v38, v62);
            if ( (_InterlockedExchangeAdd64(v64, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v64);
            KeAbPostRelease((ULONG_PTR)v64);
            KiLeaveGuardedRegionUnsafe((__int64)v41);
          }
          LOBYTE(v8) = v8 | 8;
          MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)v41, (__int64)v24);
          v65 = v92;
          *v92 = v24;
          v66 = v87;
          *(_QWORD *)(v85 + 32) = v87;
          v67 = v88;
          *(_QWORD *)v88 += *((_QWORD *)v24 + 5);
          *(_DWORD *)(v38 + 92) |= 0x800000u;
          if ( (*(_DWORD *)(v38 + 56) & 0x800) != 0 )
            MiSetDeleteOnClose(v38, 0);
          if ( (MiFlags & 0x4000) != 0
            && (*(_DWORD *)(v38 + 92) & 0xC0000) != 0
            && (Config = SeSetImageBaseAddress((unsigned __int64)v65[1] & 0xFFFFFFFFFFFFFFF8uLL, v66), Config < 0) )
          {
            v69 = a6;
          }
          else
          {
            if ( a4 )
              SessionId = -1;
            else
              SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v69 = a6;
            if ( a6 == 1 )
            {
              Config = 0;
            }
            else
            {
              if ( (*(_DWORD *)(v38 + 56) & 0x40000000) != 0 )
                MiWalkEntireImage((__int64 *)v38, 0LL, 8, SessionId);
              Config = MiWalkEntireImage((__int64 *)v38, 0LL, 2, SessionId);
            }
          }
          MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)v41, (__int64)v24);
          if ( Config >= 0 && !v69 )
            *(_BYTE *)(v67 + 51) |= 4u;
          goto LABEL_131;
        }
        v38 = v72;
        goto LABEL_131;
      }
    }
    return 0LL;
  }
  if ( !(_DWORD)v13 )
  {
    v8 &= ~2u;
    goto LABEL_10;
  }
  return (unsigned int)Config;
}
