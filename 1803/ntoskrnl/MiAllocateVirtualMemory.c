/*
 * XREFs of MiAllocateVirtualMemory @ 0x1405B49A0
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1405B4760 (NtAllocateVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiAllowProtectionChange @ 0x140062454 (MiAllowProtectionChange.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiFlushAcquire @ 0x1400BD9BC (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x1400C9330 (MiResetVirtualMemory.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiFindPlaceholderVadToReplace @ 0x14026842C (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14026B5D8 (MiUnlockAndDereferenceNestedVad.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiArbitraryCodeBlocked @ 0x1404D6800 (MiArbitraryCodeBlocked.c)
 *     EtwTiLogAllocExecVm @ 0x1404D685C (EtwTiLogAllocExecVm.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     MiCommitPagefileBackedSection @ 0x1404D7638 (MiCommitPagefileBackedSection.c)
 *     MiSecureVad @ 0x14055728C (MiSecureVad.c)
 *     MiCreateRotateView @ 0x14057FBA0 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x1405BABD8 (MiCreateVadEventBitmap.c)
 *     MiLogMemResetInfo @ 0x14074BA9C (MiLogMemResetInfo.c)
 *     MiLogReserveVaFailed @ 0x14074BB00 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x14074D138 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14074F6C8 (MiAllocateAweInfo.c)
 *     MiCommitEnclavePages @ 0x1407514F0 (MiCommitEnclavePages.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14075517C (MiPreparePlaceholderVadReplacement.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     PerfInfoLogVirtualAlloc @ 0x1407A936C (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int16 v5; // bx
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // ecx
  __int64 v10; // rcx
  void *PlaceholderVadToReplace; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  int VadEventBitmap; // edi
  int v15; // edx
  int v16; // eax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdi
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v20; // r14
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r13
  unsigned int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // r9
  _RTL_BITMAP *v39; // r8
  volatile signed __int64 *v40; // rdi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  ULONG_PTR v44; // r8
  __int64 v45; // r9
  ULONG_PTR v46; // rdx
  int v47; // r9d
  int v48; // r13d
  void *v49; // rcx
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // rax
  ULONG_PTR v52; // r14
  unsigned int v53; // r13d
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // edx
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  __int64 *v63; // rax
  __int64 v64; // r13
  __int64 v65; // rcx
  unsigned __int64 v66; // r15
  int v67; // ecx
  ULONG_PTR v68; // rcx
  __int64 **VadEvent; // rax
  __int64 **v70; // r13
  ULONG_PTR v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // eax
  unsigned int v76; // r8d
  int v77; // [rsp+28h] [rbp-D8h]
  int v78; // [rsp+30h] [rbp-D0h]
  _BYTE v79[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int ProtectionMask; // [rsp+54h] [rbp-ACh]
  int PlaceholderStorage; // [rsp+58h] [rbp-A8h] BYREF
  char v82; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-98h]
  _QWORD *v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+88h] [rbp-78h] BYREF
  int v89; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-68h]
  _RTL_BITMAP *v92; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v94; // [rsp+B0h] [rbp-50h]
  int v95; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER v97; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v98; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v99; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v100[5]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v101; // [rsp+108h] [rbp+8h]
  __int64 v102; // [rsp+110h] [rbp+10h]
  __int64 v103; // [rsp+118h] [rbp+18h]
  _QWORD v104[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v105[48]; // [rsp+130h] [rbp+30h] BYREF

  v4 = a1[1];
  v5 = 2;
  v94 = a3;
  v93 = a2;
  v6 = v4 - *a1 + 1;
  CurrentThread = KeGetCurrentThread();
  v7 = v6 == a1[3];
  v8 = *((_DWORD *)a1 + 11);
  if ( !v7 )
    v5 = 0;
  v79[0] = 1;
  v82 = 0;
  if ( (v8 & 0x40000000) != 0 )
  {
    if ( (v8 & 0xF0) == 0 )
      return 3221225541LL;
    v8 &= ~0x40000000u;
    v79[0] = 0;
    *((_DWORD *)a1 + 11) = v8;
  }
  ProtectionMask = MiMakeProtectionMask(v8);
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v10 = a1[10];
  if ( a1[11] != v10 )
  {
    KiStackAttachProcess((_KPROCESS *)v10, 0, (__int64)v105);
    v10 = a1[10];
    v5 |= 1u;
  }
  PlaceholderVadToReplace = 0LL;
  v12 = *(_QWORD *)(v10 + 1296) + 48LL;
  v7 = (*((_DWORD *)a1 + 13) & 0x4000000) == 0;
  v13 = 0LL;
  v85 = 0LL;
  v90 = v12;
  v83 = 0LL;
  if ( !v7 && (v5 & 2) == 0 )
  {
    VadEventBitmap = -1073741811;
    goto LABEL_155;
  }
  v15 = *((_DWORD *)a1 + 10);
  if ( (v15 & 0x40000000) != 0 && !*(_QWORD *)(v10 + 1808) )
  {
    VadEventBitmap = -1073741811;
    goto LABEL_155;
  }
  if ( (v15 & 0x20400000) != 0x20400000
    && (v15 & 0x20000000) != 0
    && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *((_BYTE *)a1 + 96)) )
  {
    VadEventBitmap = -1073741727;
    goto LABEL_155;
  }
  v16 = *((_DWORD *)a1 + 10);
  v17 = 0LL;
  if ( (v16 & 0x2000) == 0 )
  {
    if ( (v16 & 0x40000000) != 0 )
    {
      VadEventBitmap = -1073741811;
      goto LABEL_155;
    }
    if ( a1[9] )
    {
      VadEventBitmap = -1073741811;
      goto LABEL_155;
    }
    v13 = *a1;
    v50 = a1[1];
    BugCheckParameter2 = *a1 >> 12;
    v87 = v50 >> 12;
    v83 = v13;
    v51 = MiObtainReferencedVadEx(v13, 0, &PlaceholderStorage);
    v52 = v51;
    if ( !v51 )
    {
      VadEventBitmap = PlaceholderStorage;
      if ( PlaceholderStorage == -1073741664 )
        VadEventBitmap = -1073741800;
      goto LABEL_155;
    }
    if ( v50 >> 12 > (*(unsigned int *)(v51 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v51 + 33) << 32)) )
    {
      VadEventBitmap = -1073741800;
LABEL_154:
      MiUnlockAndDereferenceVad((PVOID)v52, v46, v44, v45);
      goto LABEL_155;
    }
    *v94 = v13;
    v46 = *(_DWORD *)(v51 + 48) & 7;
    if ( (*(_DWORD *)(v51 + 48) & 0x10000) != 0 )
    {
      if ( (_DWORD)v46 == 3 )
      {
        LOBYTE(v53) = ProtectionMask;
        VadEventBitmap = MiCommitEnclavePages(a1[10], v51, v13, v50, *((_DWORD *)a1 + 10), ProtectionMask);
        if ( VadEventBitmap >= 0 )
        {
          MiUnlockAndDereferenceVad((PVOID)v52, v46, v44, v45);
LABEL_227:
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
          {
            v76 = *((_DWORD *)a1 + 10);
            if ( (v76 & 0x3000) != 0 )
            {
              if ( (*((_BYTE *)a1 + 52) & 1) != 0 )
                v76 = 0x2000;
              PerfInfoLogVirtualAlloc(v13, a1[3], a1[10], v76);
            }
            else if ( (v76 & 0x1080000) != 0 )
            {
              MiLogMemResetInfo(v13, a1[3]);
            }
          }
          if ( (v5 & 1) != 0 )
            KiUnstackDetachProcess((__int64)v105, 0LL);
          if ( (v53 & 2) != 0 && *((_BYTE *)a1 + 96) == 1 )
            EtwTiLogAllocExecVm((_KPROCESS *)a1[10], v13, a1[4], *((_DWORD *)a1 + 10), *((_DWORD *)a1 + 11));
          *v94 = v13;
          return (unsigned int)VadEventBitmap;
        }
        goto LABEL_154;
      }
      if ( (*((_DWORD *)a1 + 13) & 0x10000000) == 0 )
      {
        VadEventBitmap = -1073741664;
        goto LABEL_154;
      }
    }
    if ( ((1 << (*(_BYTE *)(v51 + 48) & 7)) & 0x55) == 0 )
    {
      VadEventBitmap = -1073741800;
      goto LABEL_154;
    }
    v54 = *(unsigned int *)(v51 + 52);
    LODWORD(v54) = v54 & 0x7FFFFFFF;
    if ( (v54 | ((unsigned __int64)*(unsigned __int8 *)(v52 + 34) << 31)) >= 0x7FFFFFFFDLL )
    {
      VadEventBitmap = -1073741800;
      goto LABEL_154;
    }
    if ( (_DWORD)v46 != 6 )
    {
      v53 = ProtectionMask;
      goto LABEL_163;
    }
    v55 = *((_DWORD *)a1 + 11) & 0xFFFFF9FF;
    *((_DWORD *)a1 + 11) = v55;
    v56 = *(_DWORD *)(v52 + 48);
    v57 = (unsigned __int8)v56 >> 6;
    if ( v57 == 3 && (v56 & 0x38) != 0 )
    {
      v55 |= 0x400u;
    }
    else
    {
      if ( v57 != 1 )
        goto LABEL_152;
      v55 |= 0x200u;
    }
    *((_DWORD *)a1 + 11) = v55;
LABEL_152:
    ProtectionMask = MiMakeProtectionMask(v55);
    v53 = ProtectionMask;
    if ( ProtectionMask == -1 )
    {
LABEL_153:
      VadEventBitmap = -1073741755;
      goto LABEL_154;
    }
LABEL_163:
    v58 = *((_DWORD *)a1 + 10);
    if ( (v58 & 0x1080000) != 0 )
    {
      VadEventBitmap = MiResetVirtualMemory(a1[11], v13, v50, v52, v58, *((_BYTE *)a1 + 96));
      MiUnlockAndDereferenceVad((PVOID)v52, v59, v60, v61);
      if ( VadEventBitmap >= 0 )
        goto LABEL_227;
      goto LABEL_155;
    }
    LOBYTE(v5) = v5 & 0xF7;
    if ( (v53 & 2) != 0 )
    {
      VadEventBitmap = MiAllowProtectionChange(a1[10], a1[11], v52, v53, v13, v50);
      if ( VadEventBitmap < 0 )
        goto LABEL_154;
      if ( (!v79[0] || (*(_DWORD *)(v52 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
      {
        if ( (*(_DWORD *)(v52 + 48) & 0x8000000) != 0 )
        {
          VadEventBitmap = MiCheckSecuredVad(v52, v13, a1[3], v53, *((_BYTE *)a1 + 96));
          if ( VadEventBitmap < 0 )
            goto LABEL_154;
          LOBYTE(v5) = v5 | 8;
        }
        v104[0] = v13;
        v104[1] = v50;
        VadEventBitmap = MiCommitVadCfgBits(v52, (__int64)v104, (__int64)v79);
        if ( VadEventBitmap < 0 )
          goto LABEL_154;
        v82 = 1;
      }
    }
    v62 = *(_DWORD *)(v52 + 48);
    v46 = *((unsigned int *)a1 + 11);
    if ( (v62 & 0x4000) == 0 )
    {
      if ( (v46 & 0x600) != 0 )
        goto LABEL_153;
      if ( (v62 & 0x8000000) != 0 && (v5 & 8) == 0 )
      {
        VadEventBitmap = MiCheckSecuredVad(v52, v13, a1[3], v53, *((_BYTE *)a1 + 96));
        if ( VadEventBitmap < 0 )
          goto LABEL_154;
      }
      v63 = *(__int64 **)(v52 + 72);
      v64 = *v63;
      if ( !*(_QWORD *)(*v63 + 64) )
      {
        VadEventBitmap = MiCommitPagefileBackedSection(
                           a1[10],
                           v52,
                           v13,
                           v50,
                           *((_DWORD *)a1 + 11),
                           v77,
                           v78,
                           &v89,
                           &v88);
        if ( VadEventBitmap >= 0 )
        {
          v49 = (void *)v52;
          goto LABEL_209;
        }
        goto LABEL_154;
      }
      if ( *(__int64 *)(v52 + 120) >= 0 )
      {
        VadEventBitmap = -1073741791;
        goto LABEL_154;
      }
      v65 = *v63;
      v97.QuadPart = ((unsigned __int64)(*(_DWORD *)(v52 + 64) & 0xFFFFFF) << 16)
                   - ((*(unsigned int *)(v52 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v52 + 32) << 32)) << 12)
                   + v50
                   + 1;
      if ( (unsigned int)MiFlushAcquire(v65, 0LL, 0LL) )
      {
        v66 = 0LL;
        if ( (*(_DWORD *)(v52 + 48) & 0x4000) == 0 && *(_QWORD *)(v52 + 128) )
        {
          v66 = *(_QWORD *)(v52 + 128);
          ObfReferenceObject((PVOID)v66);
        }
        MiUnlockVad((__int64)CurrentThread, v52, v44, v45);
        v67 = *(_DWORD *)(v64 + 56);
        memset(v100, 0, sizeof(v100));
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0LL;
        if ( v66 )
        {
          if ( (v67 & 0x20) != 0 )
            v101 = v66 | 1;
          else
            v101 = v66 | 2;
        }
        else
        {
          v101 = v64;
        }
        LODWORD(v103) = v67;
        HIDWORD(v103) = HIDWORD(v103) & 0xFFFFF000 | 4;
        VadEventBitmap = MmExtendSection((__int64)v100, &v97, 0);
        if ( v66 )
          ObfDereferenceObject((PVOID)v66);
        MiLockVad((__int64)CurrentThread, v52);
        MiFlushRelease(v64, 0LL, 0LL);
        if ( VadEventBitmap >= 0
          && (unsigned int)MiVadDeleted(v52) != 1
          && BugCheckParameter2 >= v44
          && BugCheckParameter2 <= v46
          && v87 <= v46
          && v87 >= v44 )
        {
          v13 = v83;
          if ( ((*(_DWORD *)(v52 + 48) & 0x8000000) == 0
             || (int)MiCheckSecuredVad(v68, v83, a1[3], ProtectionMask, *((_BYTE *)a1 + 96)) >= 0)
            && *(__int64 *)(v52 + 120) < 0 )
          {
            VadEventBitmap = MiSetProtectionOnSection(a1[10], v52, v13, v50, *((_DWORD *)a1 + 11), 0, &v89, &v88);
          }
          goto LABEL_154;
        }
      }
      else
      {
        VadEventBitmap = -1073741670;
      }
LABEL_186:
      v13 = v83;
      goto LABEL_154;
    }
    if ( (v46 & 0x88) != 0
      || (v62 & 7) == 6 && (v46 & 0xFFFFF9F9) != 0
      || (v62 & 0x8000000) != 0 && MiLocateVadEvent(v52, 192) )
    {
      goto LABEL_153;
    }
    v86 = 0;
    VadEvent = MiLocateVadEvent(v52, 256);
    v70 = VadEvent;
    if ( VadEvent )
    {
      v71 = (ULONG_PTR)VadEvent[2];
      ExAcquirePushLockExclusiveEx(v71 + 40, 0LL);
      PlaceholderStorage = MiCommitExistingVad(
                             v71,
                             (unsigned __int64)v70[1]
                           + v13
                           + -4096
                           * (*(unsigned int *)(v52 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v52 + 32) << 32)),
                             a1[3],
                             4u,
                             &v86);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v71 + 40), v72, v73, v74);
      KeAbPostRelease(v71 + 40);
      VadEventBitmap = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_186;
      v13 = v83;
    }
    VadEventBitmap = MiCommitExistingVad(v52, v13, a1[3], *((_DWORD *)a1 + 11), &v86);
    if ( VadEventBitmap >= 0 )
    {
      MiUnlockAndDereferenceVad((PVOID)v52, v46, v44, v45);
      if ( v86 == 1 )
      {
        v98 = a1[3];
        v75 = *((_DWORD *)a1 + 11);
        v99 = v13;
        if ( v82 && !v79[0] )
          v75 |= 0x40000000u;
        MmProtectVirtualMemory(a1[11], a1[10], &v99, &v98, v75, &v95);
      }
      goto LABEL_226;
    }
    goto LABEL_154;
  }
  if ( (*((_DWORD *)a1 + 11) & 0x88) != 0 )
  {
    VadEventBitmap = -1073741755;
  }
  else if ( (*((_DWORD *)a1 + 13) & 0x20000000) != 0 && (MiFlags & 0x100000) == 0
         || (ProtectionMask & 2) == 0
         || (PlaceholderStorage = MiArbitraryCodeBlocked(a1[11]),
             VadEventBitmap = PlaceholderStorage,
             PlaceholderStorage >= 0) )
  {
    v18 = (a1[3] >> 12) + ((a1[3] & 0xFFFLL) != 0);
    v87 = v18;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v20 = (ULONG_PTR)PoolWithTag;
    if ( !PoolWithTag )
    {
      VadEventBitmap = -1073741670;
      goto LABEL_155;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[5] = 0LL;
    BugCheckParameter2 = (ULONG_PTR)(PoolWithTag + 5);
    PoolWithTag[2] = -2LL;
    *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ (*((_DWORD *)a1 + 12) << 8)) & 0x3F00;
    v21 = *((_DWORD *)PoolWithTag + 12);
    if ( *((_DWORD *)a1 + 12) )
    {
      *(_BYTE *)(*(_QWORD *)(a1[10] + 1296LL) + 320LL) = 1;
      v21 = *((_DWORD *)PoolWithTag + 12);
    }
    v22 = *((_DWORD *)PoolWithTag + 13);
    if ( (a1[5] & 0x1000) != 0 )
    {
      v22 |= 0x80000000;
      v17 = v18;
      *((_DWORD *)PoolWithTag + 13) = v22;
    }
    v23 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(8 * ProtectionMask)) & 0xF8 | 0x4000;
    *((_DWORD *)PoolWithTag + 12) = v23;
    v24 = *((_DWORD *)a1 + 13);
    if ( (v24 & 1) != 0 )
    {
      v17 = 0x7FFFFFFFELL;
    }
    else if ( (v24 & 0x8000000) != 0 )
    {
      v17 = 0x7FFFFFFFDLL;
    }
    *(_BYTE *)(v20 + 34) = v17 >> 31;
    *(_DWORD *)(v20 + 52) = v22 ^ (v17 ^ v22) & 0x7FFFFFFF;
    v25 = *((_DWORD *)a1 + 10);
    if ( (v25 & 0x20400000) == 0x20400000 )
    {
      *(_DWORD *)(v20 + 48) = v23 | 0x20000;
LABEL_52:
      if ( (a1[5] & 0x200000) != 0 )
      {
        v30 = a1[10];
        VadEventBitmap = MiCreateVadEventBitmap(v30, v20, v87, 4LL);
        if ( VadEventBitmap >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v30 + 772), 0x8000u);
          v13 = v83;
          VadEventBitmap = 0;
        }
        PlaceholderStorage = VadEventBitmap;
        if ( VadEventBitmap < 0 )
          goto LABEL_74;
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFFFFFF8 | 4;
        v5 |= 0x10u;
      }
      if ( (*((_DWORD *)a1 + 13) & 0x4000000) != 0 )
      {
        PlaceholderStorage = MiCreatePlaceholderStorage(v20);
        VadEventBitmap = PlaceholderStorage;
        if ( PlaceholderStorage < 0 )
          goto LABEL_74;
        v5 |= 0x80u;
      }
      v31 = a1[10];
      v5 |= 0x100u;
      v92 = 0LL;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v31);
      v32 = a1[10];
      if ( (*(_DWORD *)(v32 + 772) & 0x20) != 0 )
      {
        VadEventBitmap = -1073741558;
LABEL_76:
        v28 = v85;
        goto LABEL_77;
      }
      v33 = *((_DWORD *)a1 + 13);
      v34 = a1[1];
      if ( (v5 & 2) != 0 )
      {
        if ( (v33 & 0x4000000) != 0 )
        {
          PlaceholderVadToReplace = (void *)MiFindPlaceholderVadToReplace(
                                              *a1,
                                              a1[1],
                                              *((_BYTE *)a1 + 96),
                                              &PlaceholderStorage);
          if ( !PlaceholderVadToReplace )
          {
            VadEventBitmap = PlaceholderStorage;
            goto LABEL_74;
          }
          v35 = *a1;
          v34 = a1[1];
        }
        else if ( !MiIsVaRangeAvailable(v32, *a1, a1[3], *a1, a1[1]) )
        {
          VadEventBitmap = -1073741800;
          goto LABEL_76;
        }
        v13 = v35;
        v83 = v35;
      }
      else
      {
        VadEventBitmap = MiSelectUserAddress(
                           *((_DWORD *)a1 + 10),
                           *a1,
                           v34,
                           a1[3],
                           a1[2],
                           0LL,
                           ProtectionMask,
                           v33,
                           &v92,
                           (__int64)&v83);
        if ( VadEventBitmap < 0 )
        {
          MiLogReserveVaFailed(a1[3], a1[2], *a1, a1[1]);
          v13 = v83;
          goto LABEL_76;
        }
        v13 = v83;
        v34 = a1[3] + v83 - 1;
      }
      v36 = v34 >> 12;
      *(_DWORD *)(v20 + 24) = v13 >> 12;
      v87 = v13 >> 12;
      *(_BYTE *)(v20 + 32) = v13 >> 44;
      *(_BYTE *)(v20 + 33) = BYTE4(v36);
      *(_DWORD *)(v20 + 28) = v36;
      PlaceholderStorage = MiInsertVadCharges(v20, (struct _KPROCESS *)a1[10]);
      VadEventBitmap = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
      {
LABEL_74:
        if ( PlaceholderVadToReplace )
          MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace, v26, v27);
        goto LABEL_76;
      }
      if ( PlaceholderVadToReplace )
      {
        MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, a1[10], v90);
        ExAcquirePushLockExclusiveEx(v20 + 40, 0LL);
      }
      else
      {
        MiLockVad((__int64)CurrentThread, v20);
      }
      MiInsertPrivateVad(v20, (__int64)v85, a1[10]);
      v39 = v92;
      if ( v92 )
        MiAdvanceVadHint(v87, v36, v92);
      if ( (ProtectionMask & 2) != 0 && MiIsProcessCfgEnabled() )
        LOBYTE(v5) = v5 | 4;
      if ( (v5 & 4) == 0 && (*(_BYTE *)(v20 + 48) & 7) != 5 && !a1[9] )
      {
        if ( PlaceholderVadToReplace )
        {
          v40 = (volatile signed __int64 *)BugCheckParameter2;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v40, v37, (__int64)v39, v38);
          KeAbPostRelease((ULONG_PTR)v40);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1[10]);
          v13 = v83;
          VadEventBitmap = PlaceholderStorage;
        }
        else
        {
          MiUnlockVad((__int64)CurrentThread, v20, (__int64)v39, v38);
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1[10], v41, v42);
        }
        goto LABEL_123;
      }
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1[10]);
      MiReferenceVad(v20);
      if ( (v5 & 4) != 0 && (VadEventBitmap = MiCommitVadCfgBits(v43, 0LL, (__int64)v79), VadEventBitmap < 0)
        || (v46 = *(unsigned int *)(v20 + 48), (*(_BYTE *)(v20 + 48) & 7) == 5)
        && (VadEventBitmap = MiMapUserLargePages(v20, ((unsigned int)v46 >> 8) & 0x3F, v93), VadEventBitmap < 0) )
      {
        MiDeleteVad((unsigned int *)v20, (__int64)PlaceholderVadToReplace, 0);
        goto LABEL_118;
      }
      if ( a1[9] )
      {
        v47 = *((_DWORD *)a1 + 17);
        if ( (unsigned int)(v47 - 1) > 1 && v47 != -2147483647 && v47 != 4 )
        {
          v48 = -1073741755;
LABEL_117:
          MiDeleteVad((unsigned int *)v20, (__int64)PlaceholderVadToReplace, 0);
          VadEventBitmap = v48;
LABEL_118:
          if ( PlaceholderVadToReplace )
            MiFinishPlaceholderVadReplacement(PlaceholderVadToReplace);
          goto LABEL_155;
        }
        v48 = MiSecureVad(v20, v13, a1[3], v47, 0, &v96);
        if ( v48 < 0 )
          goto LABEL_117;
        *(_QWORD *)a1[9] = a1[10] ^ v96 ^ qword_1403CB688;
      }
      v49 = (void *)v20;
      if ( PlaceholderVadToReplace )
      {
        MiUnlockAndDereferenceNestedVad((PVOID)v20);
LABEL_123:
        if ( PlaceholderVadToReplace )
          MiFinishPlaceholderVadReplacement(PlaceholderVadToReplace);
        goto LABEL_226;
      }
LABEL_209:
      MiUnlockAndDereferenceVad(v49, v46, v44, v45);
LABEL_226:
      LOBYTE(v53) = ProtectionMask;
      goto LABEL_227;
    }
    if ( (v25 & 0x400000) != 0 )
    {
      if ( !*(_QWORD *)(a1[10] + 1032LL) )
      {
        PlaceholderStorage = MiAllocateAweInfo();
        VadEventBitmap = PlaceholderStorage;
        if ( PlaceholderStorage < 0 )
          goto LABEL_74;
      }
      v85 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
      v28 = v85;
      if ( v85 )
      {
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFFEFFF8 | 3;
        v28[3] = v20;
        goto LABEL_52;
      }
      VadEventBitmap = -1073741670;
LABEL_77:
      PlaceholderVadToReplace = 0LL;
      if ( (v5 & 0x100) != 0 )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1[10], v26, v27);
      if ( (v5 & 0x10) != 0 )
        MiFreeVadEventBitmap(a1[10], v20, 4LL);
      if ( (v5 & 0x40) != 0 )
        MiFreeRotateView(v20);
      if ( (v5 & 0x20) != 0 )
        MiFreeLargePageView(a1[10], v20, 0LL);
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      if ( (v5 & 0x80u) != 0 )
        MiFreePlaceholderStorage(v20);
      ExFreePoolWithTag((PVOID)v20, 0);
      goto LABEL_118;
    }
    if ( (v25 & 0x20000000) != 0 )
    {
      PlaceholderStorage = MiCreateLargePageVad(a1[10], v20, v93);
      VadEventBitmap = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_74;
      v5 |= 0x20u;
      v29 = *(_DWORD *)(v20 + 48) & 0xFFFFFFF8 | 5;
    }
    else
    {
      if ( (v25 & 0x800000) == 0 )
        goto LABEL_52;
      if ( !(unsigned int)MiCreateRotateView(v20) )
      {
        VadEventBitmap = -1073741670;
        v28 = 0LL;
        goto LABEL_77;
      }
      v5 |= 0x40u;
      v29 = *(_DWORD *)(v20 + 48) & 0xFFFFFFF8 | 6;
    }
    *(_DWORD *)(v20 + 48) = v29;
    goto LABEL_52;
  }
LABEL_155:
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && (a1[5] & 0x1000000) != 0 && VadEventBitmap == -1073740748 )
    MiLogMemResetInfo(v13, a1[3]);
  if ( (v5 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v105, 0LL);
  return (unsigned int)VadEventBitmap;
}
