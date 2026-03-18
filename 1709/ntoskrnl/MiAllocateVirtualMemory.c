/*
 * XREFs of MiAllocateVirtualMemory @ 0x1404965C0
 * Callers:
 *     NtAllocateVirtualMemory @ 0x140496570 (NtAllocateVirtualMemory.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     WbAllocateMemoryBlock @ 0x140575B10 (WbAllocateMemoryBlock.c)
 *     MmAllocateVirtualMemory @ 0x1405763CC (MmAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406EA930 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiFlushAcquire @ 0x1400B030C (MiFlushAcquire.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     RtlFindMostSignificantBit @ 0x14011BEC0 (RtlFindMostSignificantBit.c)
 *     MiResetVirtualMemory @ 0x140127420 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiCreateRotateView @ 0x14044DE28 (MiCreateRotateView.c)
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiSecureVad @ 0x1404D52C0 (MiSecureVad.c)
 *     MiArbitraryCodeBlocked @ 0x1404D5370 (MiArbitraryCodeBlocked.c)
 *     EtwTiLogAllocExecVm @ 0x1404D5D88 (EtwTiLogAllocExecVm.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     MiAdvanceVadHint @ 0x14056D510 (MiAdvanceVadHint.c)
 *     MiLogMemResetInfo @ 0x1406E0B6C (MiLogMemResetInfo.c)
 *     MiLogReserveVaFailed @ 0x1406E0BD0 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x1406E25E4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1406E26F4 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x1406E5194 (MiAllocateAweInfo.c)
 *     MiCommitEnclavePages @ 0x1406E7A90 (MiCommitEnclavePages.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 *     PerfInfoLogVirtualAlloc @ 0x140747C50 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(
        __int64 a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  bool v15; // zf
  unsigned int v16; // edi
  _KPROCESS *v17; // r8
  unsigned __int64 *v18; // r9
  unsigned __int64 *v19; // r10
  ULONG_PTR v20; // r11
  KPROCESSOR_MODE v21; // dl
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r13
  _KPROCESS *v26; // r15
  unsigned __int64 v27; // r12
  int VadEventBitmap; // edi
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  void *v31; // rdi
  unsigned __int64 v32; // rdi
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v34; // rsi
  unsigned int v35; // ecx
  unsigned __int64 v36; // r8
  unsigned int v37; // ecx
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  unsigned __int64 v40; // r12
  int v41; // eax
  unsigned __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 *v46; // rcx
  __int64 v47; // rax
  int v48; // r15d
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rax
  int v51; // edx
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  int v57; // edx
  unsigned int v58; // ecx
  _QWORD *v59; // r9
  unsigned __int64 v60; // rdi
  void *v61; // rax
  ULONG_PTR v62; // rcx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r9
  __int64 **VadEvent; // rax
  ULONG_PTR v66; // rdi
  unsigned __int64 v67; // rax
  char v68; // si
  unsigned int v69; // eax
  __int64 v70; // r9
  int v71; // [rsp+28h] [rbp-1E0h]
  int v72; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 v73; // [rsp+50h] [rbp-1B8h]
  _BYTE v74[4]; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned int v75; // [rsp+5Ch] [rbp-1ACh]
  int v76; // [rsp+60h] [rbp-1A8h] BYREF
  char v77; // [rsp+64h] [rbp-1A4h]
  unsigned int ProtectionMask; // [rsp+68h] [rbp-1A0h]
  int v79; // [rsp+70h] [rbp-198h] BYREF
  unsigned int v80; // [rsp+74h] [rbp-194h]
  unsigned __int64 v81; // [rsp+78h] [rbp-190h]
  unsigned __int64 v82; // [rsp+80h] [rbp-188h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-180h]
  unsigned __int64 v84; // [rsp+90h] [rbp-178h]
  PVOID P; // [rsp+98h] [rbp-170h]
  PVOID Object; // [rsp+A0h] [rbp-168h]
  int v87; // [rsp+A8h] [rbp-160h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-150h]
  unsigned __int64 *v90; // [rsp+C0h] [rbp-148h]
  PVOID v91; // [rsp+C8h] [rbp-140h] BYREF
  unsigned __int64 v92; // [rsp+D0h] [rbp-138h]
  __int64 v93; // [rsp+D8h] [rbp-130h]
  unsigned __int64 v94; // [rsp+E0h] [rbp-128h]
  int v95; // [rsp+E8h] [rbp-120h] BYREF
  int v96; // [rsp+ECh] [rbp-11Ch] BYREF
  unsigned __int64 v97; // [rsp+F0h] [rbp-118h]
  __int64 v98; // [rsp+F8h] [rbp-110h]
  unsigned __int64 *v99; // [rsp+100h] [rbp-108h]
  unsigned __int64 *v100; // [rsp+108h] [rbp-100h]
  char v101[8]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+118h] [rbp-F0h] BYREF
  unsigned __int64 v103; // [rsp+120h] [rbp-E8h] BYREF
  unsigned __int64 v104; // [rsp+128h] [rbp-E0h] BYREF
  unsigned __int64 v105; // [rsp+130h] [rbp-D8h] BYREF
  _QWORD v106[5]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+168h] [rbp-A0h]
  __int64 v108; // [rsp+170h] [rbp-98h]
  __int64 v109; // [rsp+178h] [rbp-90h]
  _QWORD v110[2]; // [rsp+180h] [rbp-88h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v111; // [rsp+190h] [rbp-78h] BYREF

  v99 = a4;
  v89 = a3;
  v100 = a2;
  v98 = a1;
  v90 = a10;
  if ( a3 && (a3 < 0x20 ? (v10 = a3 + 32) : (v10 = 63 - RtlFindMostSignificantBit(a3)), v89 = v10, v10 > 0x35) )
    v11 = -1073741811;
  else
    v11 = 0;
  v76 = v11;
  if ( v11 < 0 )
    return 3221225713LL;
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v80 = a5 & 0x7F;
  if ( v80 > (unsigned __int16)KeNumberNodes )
    return 3221225715LL;
  v14 = a5 & 0xFFFFFF80;
  if ( (a5 & 0x9E07CF80) != 0 || (a5 & 0x1083000) == 0 )
    return 3221225715LL;
  if ( (a5 & 0x21E80000) == 0 )
  {
LABEL_36:
    v16 = a6;
    v75 = a6;
LABEL_37:
    v74[0] = 1;
    v77 = 0;
    if ( (v16 & 0x40000000) == 0 )
      goto LABEL_40;
    if ( (v16 & 0xF0) != 0 )
    {
      v16 &= ~0x40000000u;
      v75 = v16;
      v74[0] = 0;
LABEL_40:
      ProtectionMask = MiMakeProtectionMask(v16);
      if ( ProtectionMask != -1 )
      {
        v21 = a7;
        if ( a7 )
        {
          v22 = (__int64)v18;
          if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
            v22 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v22 = *(_QWORD *)v22;
          v23 = (__int64)v19;
          if ( (unsigned __int64)v19 >= 0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v23 = *(_QWORD *)v23;
        }
        v24 = *v18;
        v84 = v24;
        v94 = v24;
        v92 = *v19;
        v25 = v92;
        v97 = v92;
        if ( v24 > 0x7FFFFFFDFFFFLL )
          return 3221225712LL;
        if ( 0x7FFFFFFE0000LL - v24 < v92 || !v92 )
          return 3221225714LL;
        if ( v20 == -1LL )
        {
          v26 = v17;
          v73 = (unsigned __int64)v17;
          v91 = v17;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(v20, 1834380621, (__int64)&v91, 0LL, 0LL);
          v76 = result;
          if ( (int)result < 0 )
            return result;
          v26 = (_KPROCESS *)v91;
          v73 = (unsigned __int64)v91;
          v21 = a7;
        }
        v27 = 0LL;
        v82 = 0LL;
        if ( (a5 & 0x40000000) != 0 )
        {
          if ( !v26[2].ActiveProcessors.Bitmap[9] )
          {
            VadEventBitmap = -1073741581;
            v26 = (_KPROCESS *)v73;
            goto LABEL_292;
          }
          if ( (a5 & 0x21F80000) != 0 )
          {
            VadEventBitmap = -1073741581;
            v26 = (_KPROCESS *)v73;
            goto LABEL_292;
          }
        }
        v29 = 4096LL;
        if ( (a5 & 0x20400000) == 0x20400000 )
        {
          v29 = 0x10000LL;
        }
        else if ( (a5 & 0x20000000) != 0 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v21) )
          {
            VadEventBitmap = -1073741727;
            v26 = (_KPROCESS *)v73;
            goto LABEL_292;
          }
          v29 = 0x200000LL;
        }
        v30 = (__int64)Process;
        if ( Process != v26 )
        {
          KiStackAttachProcess(v26, 0, (__int64)&v111);
          v13 = 2;
          v30 = (__int64)Process;
        }
        P = 0LL;
        if ( (a5 & 0x1000) != 0 && !v84 )
          v14 = a5 & 0xFFFFDF80 | 0x2000;
        if ( (v14 & 0x2000) != 0 )
        {
          if ( (v16 & 0x88) == 0 )
          {
            if ( ((a8 & 0x20000000) == 0 || (MiFlags & 0x100000) != 0) && (ProtectionMask & 2) != 0 )
            {
              VadEventBitmap = MiArbitraryCodeBlocked(v30);
              v76 = VadEventBitmap;
              if ( VadEventBitmap < 0 )
                goto LABEL_113;
            }
            v93 = 0x10000LL;
            if ( !v84 )
            {
              v25 = (v25 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              v92 = v25;
              v31 = (void *)((v25 >> 12) + ((v25 & 0xFFF) != 0));
              Object = v31;
              v81 = 0LL;
              LODWORD(Process) = v14 & 0x20000000;
              if ( (v14 & 0x20000000) != 0 )
              {
                if ( v25 % v29 )
                {
                  VadEventBitmap = -1073741582;
                  v26 = (_KPROCESS *)v73;
                  goto LABEL_292;
                }
                v93 = v29;
              }
LABEL_96:
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
              v34 = (ULONG_PTR)PoolWithTag;
              if ( !PoolWithTag )
              {
                VadEventBitmap = -1073741670;
                v26 = (_KPROCESS *)v73;
                goto LABEL_292;
              }
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[3] = 0LL;
              PoolWithTag[4] = 0LL;
              PoolWithTag[6] = 0LL;
              PoolWithTag[7] = 0LL;
              PoolWithTag[2] = -2LL;
              PoolWithTag[5] = 0LL;
              v35 = v80;
              *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ (v80 << 8)) & 0x3F00;
              if ( v35 )
                *(_BYTE *)(*(_QWORD *)&v26[1].IdealGlobalNode + 232LL) = 1;
              if ( (v14 & 0x1000) != 0 )
              {
                v36 = (unsigned __int64)v31;
                *((_DWORD *)PoolWithTag + 13) |= 0x80000000;
              }
              else
              {
                v36 = (unsigned __int64)P;
              }
              v37 = *((_DWORD *)PoolWithTag + 12) ^ (*((_DWORD *)PoolWithTag + 12) ^ (8 * ProtectionMask)) & 0xF8 | 0x8000;
              *((_DWORD *)PoolWithTag + 12) = v37;
              if ( (a8 & 1) != 0 )
                v36 = 0x7FFFFFFFELL;
              *((_DWORD *)PoolWithTag + 13) ^= (v36 ^ *((_DWORD *)PoolWithTag + 13)) & 0x7FFFFFFF;
              *((_BYTE *)PoolWithTag + 34) = v36 >> 31;
              P = 0LL;
              v80 = v14 & 0x20400000;
              if ( (v14 & 0x20400000) == 0x20400000 )
              {
                *((_DWORD *)PoolWithTag + 12) = v37 | 0x100000;
LABEL_122:
                if ( (v14 & 0x200000) != 0 )
                {
                  VadEventBitmap = MiCreateVadEventBitmap(v26, v34, Object, 4LL);
                  if ( VadEventBitmap >= 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)&v26[1].DirectoryTableBase + 1, 0x8000u);
                    VadEventBitmap = 0;
                    v84 = v94;
                    v25 = v92;
                    v26 = (_KPROCESS *)v91;
                    v73 = (unsigned __int64)v91;
                    v27 = v82;
                  }
                  if ( VadEventBitmap < 0 )
                  {
                    ExFreePoolWithTag((PVOID)v34, 0);
                    goto LABEL_113;
                  }
                  *(_DWORD *)(v34 + 48) = *(_DWORD *)(v34 + 48) & 0xFFFFFFF8 | 4;
                  v13 |= 8u;
                }
                v79 = 0;
                v87 = 0;
                LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v26);
                if ( (v26[1].DirectoryTableBase & 0x2000000000LL) != 0 )
                {
                  VadEventBitmap = -1073741558;
LABEL_140:
                  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v26);
                  if ( v13 < 8 )
                  {
                    if ( (v14 & 0x800000) != 0 )
                    {
                      MiFreeRotateView(v34, v43, v44);
                    }
                    else if ( v80 != 541065216 )
                    {
                      if ( (_DWORD)Process )
                      {
                        MiFreeLargePageView(v26, v34, 0LL);
                      }
                      else if ( (v14 & 0x400000) != 0 )
                      {
                        ExFreePoolWithTag(P, 0);
                      }
                    }
                  }
                  else
                  {
                    MiFreeVadEventBitmap(v26, v34, 4LL);
                  }
                  ExFreePoolWithTag((PVOID)v34, 0);
                  goto LABEL_113;
                }
                if ( v84 )
                {
                  if ( MiCheckForConflictingVadExistence() )
                  {
                    VadEventBitmap = -1073741800;
                    goto LABEL_140;
                  }
                }
                else
                {
                  v40 = v89;
                  VadEventBitmap = MiSelectUserAddress(
                                     v14,
                                     v89,
                                     v25,
                                     v93,
                                     0LL,
                                     ProtectionMask,
                                     a8,
                                     (__int64)&v87,
                                     (__int64)&v82);
                  if ( VadEventBitmap < 0 )
                  {
                    MiLogReserveVaFailed(v25, v93, v40);
                    v27 = v82;
                    goto LABEL_140;
                  }
                  v41 = v87;
                  if ( v80 != 541065216 && (_DWORD)Process )
                    v41 = 0;
                  v79 = v41;
                  v27 = v82;
                  v81 = (v25 + v82 - 1) | 0xFFF;
                  v42 = v81;
                }
                Object = (PVOID)(v27 >> 12);
                *(_DWORD *)(v34 + 24) = v27 >> 12;
                *(_BYTE *)(v34 + 32) = v27 >> 44;
                v94 = v42 >> 12;
                *(_DWORD *)(v34 + 28) = v42 >> 12;
                *(_BYTE *)(v34 + 33) = v42 >> 44;
                VadEventBitmap = MiInsertVadCharges(v34, v26);
                v76 = VadEventBitmap;
                if ( VadEventBitmap < 0 )
                  goto LABEL_140;
                MiInsertPrivateVad(v34, (__int64)P, (__int64)v26);
                if ( v79 == 1 )
                  MiAdvanceVadHint(Object, v94, a8);
                v25 = v81 - v27 + 1;
                if ( (ProtectionMask & 2) != 0 && MiIsProcessCfgEnabled() )
                  LOBYTE(v13) = v13 | 1;
                v80 = v13 & 1;
                if ( (v13 & 1) == 0 && (*(_BYTE *)(v34 + 48) & 7) != 5 && !v90 )
                {
                  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v26);
                  goto LABEL_273;
                }
                MiLockVad((__int64)CurrentThread, v34);
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v26);
                MiReferenceVad(v34);
                if ( v80
                  && (VadEventBitmap = MiCommitVadCfgBits(v45, 0LL, v74), v76 = VadEventBitmap, VadEventBitmap < 0)
                  || (*(_BYTE *)(v34 + 48) & 7) == 5
                  && (VadEventBitmap = MiMapUserLargePages(v34, (*(_DWORD *)(v34 + 48) >> 8) & 0x3F),
                      v76 = VadEventBitmap,
                      VadEventBitmap < 0) )
                {
                  MiDeleteVad(v34, 0);
                  goto LABEL_113;
                }
                v46 = v90;
                if ( v90 )
                {
                  if ( (unsigned int)(a9 - 1) <= 1 || a9 == -2147483647 || a9 == 4 )
                  {
                    v48 = MiSecureVad(v34, v27, v25, a9, (__int64)&v102);
                    v47 = v102;
                    v46 = v90;
                  }
                  else
                  {
                    v47 = 0LL;
                    v48 = -1073741755;
                  }
                  if ( v48 < 0 )
                  {
                    MiDeleteVad(v34, 0);
                    VadEventBitmap = v48;
                    goto LABEL_113;
                  }
                  v26 = (_KPROCESS *)v73;
                  *v46 = v73 ^ qword_1403884F0 ^ v47;
                }
LABEL_272:
                MiUnlockAndDereferenceVad((char *)v34);
                goto LABEL_273;
              }
              if ( (v14 & 0x400000) != 0 )
              {
                if ( !v26[1].ActiveProcessors.Bitmap[3] )
                {
                  VadEventBitmap = MiAllocateAweInfo();
                  v76 = VadEventBitmap;
                  if ( VadEventBitmap < 0 )
                    goto LABEL_110;
                }
                v38 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
                P = v38;
                if ( v38 )
                {
                  *(_DWORD *)(v34 + 48) = *(_DWORD *)(v34 + 48) & 0xFFFBFFF8 | 3;
                  v38[3] = v34;
                  goto LABEL_122;
                }
LABEL_112:
                ExFreePoolWithTag((PVOID)v34, 0);
                VadEventBitmap = -1073741670;
LABEL_113:
                v26 = (_KPROCESS *)v73;
                goto LABEL_292;
              }
              if ( (_DWORD)Process )
              {
                VadEventBitmap = MiCreateLargePageVad(v26, PoolWithTag);
                v76 = VadEventBitmap;
                if ( VadEventBitmap < 0 )
                {
LABEL_110:
                  ExFreePoolWithTag((PVOID)v34, 0);
                  v26 = (_KPROCESS *)v73;
                  goto LABEL_292;
                }
                v39 = *(_DWORD *)(v34 + 48) & 0xFFFFFFF8 | 5;
              }
              else
              {
                if ( (v14 & 0x800000) == 0 )
                  goto LABEL_122;
                if ( !(unsigned int)MiCreateRotateView((__int64)PoolWithTag) )
                  goto LABEL_112;
                v39 = *(_DWORD *)(v34 + 48) & 0xFFFFFFF8 | 6;
              }
              *(_DWORD *)(v34 + 48) = v39;
              goto LABEL_122;
            }
            LODWORD(Process) = v14 & 0x20000000;
            if ( (v14 & 0x20000000) != 0 )
            {
              if ( v25 % v29 )
              {
                VadEventBitmap = -1073741582;
                v26 = (_KPROCESS *)v73;
                goto LABEL_292;
              }
              v93 = v29;
              v27 = v84 & ~(v29 - 1);
              v82 = v27;
              v32 = v27 + v25 - 1;
            }
            else
            {
              if ( (v14 & 0x40000000) != 0 )
              {
                if ( (((unsigned int)v84 | (unsigned int)v25) & 0xFFF) != 0 )
                  goto LABEL_94;
                v27 = v84;
                v82 = v84;
              }
              else
              {
                v27 = v84 & 0xFFFFFFFFFFFF0000uLL;
                v82 = v84 & 0xFFFFFFFFFFFF0000uLL;
              }
              v32 = (v25 + v84 - 1) | 0xFFF;
            }
            v81 = v32;
            if ( v27 >= 0x10000 || v26[2].ActiveProcessors.Bitmap[9] )
            {
              v31 = (void *)(((__int64)(v32 - v27) >> 12) + (((v32 - v27) & 0xFFF) != 0));
              Object = v31;
              goto LABEL_96;
            }
LABEL_94:
            VadEventBitmap = -1073741584;
            v26 = (_KPROCESS *)v73;
            goto LABEL_292;
          }
          VadEventBitmap = -1073741755;
          v26 = (_KPROCESS *)v73;
LABEL_292:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (v14 & 0x1000000) != 0 && VadEventBitmap == -1073740748 )
            MiLogMemResetInfo(v27, v25, 0LL);
          if ( (v13 & 2) != 0 )
            KiUnstackDetachProcess(&v111, 0LL);
          if ( v98 != -1 )
            ObfDereferenceObjectWithTag(v26, 0x6D566D4Du);
          return (unsigned int)VadEventBitmap;
        }
        if ( (v14 & 0x40000000) != 0 )
        {
          VadEventBitmap = -1073741581;
          goto LABEL_113;
        }
        if ( v90 )
        {
          VadEventBitmap = -1073741577;
          goto LABEL_113;
        }
        if ( v14 == 0x80000 || v14 == 0x1000000 )
        {
          if ( v84 + v25 < 0x1000 )
          {
            VadEventBitmap = -1073741800;
            goto LABEL_113;
          }
          v49 = ((v84 + v25) & 0xFFFFFFFFFFFFF000uLL) - 1;
          v81 = v49;
          v27 = (v84 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v82 = v27;
          if ( v27 > v49 )
          {
            VadEventBitmap = -1073741800;
            goto LABEL_113;
          }
        }
        else
        {
          v49 = (v84 + v25 - 1) | 0xFFF;
          v81 = v49;
          v27 = v84 & 0xFFFFFFFFFFFFF000uLL;
          v82 = v84 & 0xFFFFFFFFFFFFF000uLL;
        }
        v25 = v49 - v27 + 1;
        v92 = v25;
        v90 = (unsigned __int64 *)(v27 >> 12);
        v89 = v49 >> 12;
        v50 = MiObtainReferencedVad(v27, &v76);
        v34 = v50;
        if ( !v50 )
        {
          VadEventBitmap = v76;
          if ( v76 == -1073741664 )
            VadEventBitmap = -1073741800;
          goto LABEL_113;
        }
        if ( v89 > (*(unsigned int *)(v50 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v50 + 33) << 32)) )
        {
          VadEventBitmap = -1073741800;
          goto LABEL_290;
        }
        v51 = *(_DWORD *)(v50 + 48);
        if ( (v51 & 0x40000) != 0 )
        {
          if ( (v51 & 7) == 3 )
          {
            v52 = MiCommitEnclavePages((_DWORD)v26, v50, v27, v49, v14, ProtectionMask);
            goto LABEL_271;
          }
          if ( (a8 & 0x10000000) == 0 )
          {
            VadEventBitmap = -1073741664;
            goto LABEL_290;
          }
        }
        if ( ((1 << (v51 & 7)) & 0x55) == 0 )
        {
          VadEventBitmap = -1073741800;
          goto LABEL_290;
        }
        v53 = *(unsigned int *)(v50 + 52);
        LODWORD(v53) = v53 & 0x7FFFFFFF;
        if ( (v53 | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 31)) >= 0x7FFFFFFFELL )
        {
          VadEventBitmap = -1073741800;
          goto LABEL_290;
        }
        if ( (v51 & 7) != 6 )
        {
          LOBYTE(v56) = ProtectionMask;
LABEL_209:
          if ( (v14 & 0x1080000) != 0 )
          {
            VadEventBitmap = MiResetVirtualMemory((__int64)Process, v27, v49, v34, v14);
            v76 = VadEventBitmap;
            MiUnlockAndDereferenceVad((char *)v34);
            if ( VadEventBitmap < 0 )
              goto LABEL_113;
            goto LABEL_273;
          }
          if ( (v56 & 2) != 0 )
          {
            VadEventBitmap = MiAllowProtectionChange((__int64)v26, (__int64)Process, v34, v56, v27, v49);
            if ( VadEventBitmap < 0 )
              goto LABEL_290;
            if ( (!v74[0] || (*(_DWORD *)(v34 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
            {
              if ( (*(_DWORD *)(v34 + 48) & 0x4000) != 0 )
              {
                VadEventBitmap = MiCheckSecuredVad(v34, v84, v25, ProtectionMask);
                if ( VadEventBitmap < 0 )
                  goto LABEL_290;
                v13 |= 4u;
              }
              v110[0] = v27;
              v110[1] = v81;
              VadEventBitmap = MiCommitVadCfgBits(v34, v110, v74);
              if ( VadEventBitmap < 0 )
                goto LABEL_290;
              v77 = 1;
            }
          }
          v57 = *(_DWORD *)(v34 + 48);
          v58 = v75;
          if ( (v57 & 0x8000) != 0 )
          {
            if ( (v75 & 0x88) == 0
              && ((v57 & 7) != 6 || (v75 & 0xFFFFF9F9) == 0)
              && ((v57 & 0x4000) == 0 || !MiLocateVadEvent(v34, 192)) )
            {
              v79 = 0;
              VadEvent = MiLocateVadEvent(v34, 256);
              Object = VadEvent;
              if ( VadEvent )
              {
                v66 = (ULONG_PTR)VadEvent[2];
                ExAcquirePushLockExclusiveEx(v66 + 40, 0LL);
                v76 = MiCommitExistingVad(
                        v66,
                        v84
                      + *((_QWORD *)Object + 1)
                      - ((*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12),
                        v97,
                        4u,
                        &v79);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v66 + 40));
                KeAbPostRelease(v66 + 40);
                VadEventBitmap = v76;
                v25 = v92;
                v26 = (_KPROCESS *)v91;
                v27 = v82;
                if ( v76 < 0 )
                  goto LABEL_291;
                v67 = v94;
                v73 = (unsigned __int64)v91;
              }
              else
              {
                v67 = v84;
              }
              VadEventBitmap = MiCommitExistingVad(v34, v67, v97, v75, &v79);
              v76 = VadEventBitmap;
              if ( VadEventBitmap >= 0 )
              {
                MiUnlockAndDereferenceVad((char *)v34);
                if ( v79 == 1 )
                {
                  v105 = v27;
                  v104 = v25;
                  v68 = v75;
                  v69 = v75;
                  if ( v77 && !v74[0] )
                    v69 = v75 | 0x40000000;
                  MmProtectVirtualMemory(
                    (_DWORD)Process,
                    (_DWORD)v26,
                    (unsigned int)&v105,
                    (unsigned int)&v104,
                    v69,
                    (__int64)v101);
                  goto LABEL_274;
                }
LABEL_273:
                v68 = v75;
LABEL_274:
                if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
                {
                  if ( (v14 & 0x3000) != 0 )
                  {
                    v70 = v14;
                    if ( (a8 & 1) != 0 )
                      v70 = 0x2000LL;
                    PerfInfoLogVirtualAlloc(v27, v25, v26, v70);
                  }
                  else if ( (v14 & 0x1080000) != 0 )
                  {
                    MiLogMemResetInfo(v27, v25, v14);
                  }
                }
                if ( (v13 & 2) != 0 )
                  KiUnstackDetachProcess(&v111, 0LL);
                if ( (ProtectionMask & 2) != 0 && a7 == 1 )
                  EtwTiLogAllocExecVm((_DWORD)v26, v27, v97, v14, v68);
                if ( v98 != -1 )
                  ObfDereferenceObjectWithTag(v26, 0x6D566D4Du);
                *v99 = v25;
                *v100 = v27;
                return (unsigned int)VadEventBitmap;
              }
LABEL_290:
              v26 = (_KPROCESS *)v73;
LABEL_291:
              MiUnlockAndDereferenceVad((char *)v34);
              goto LABEL_292;
            }
          }
          else if ( (v75 & 0x600) == 0 )
          {
            if ( (v57 & 0x4000) != 0 && v13 < 4 )
            {
              VadEventBitmap = MiCheckSecuredVad(v34, v84, v25, ProtectionMask);
              if ( VadEventBitmap < 0 )
                goto LABEL_290;
              v58 = v75;
            }
            v59 = **(_QWORD ***)(v34 + 72);
            P = v59;
            if ( v59[8] )
            {
              if ( *(__int64 *)(v34 + 120) < 0 )
              {
                v103 = v81
                     + 1
                     + ((unsigned __int64)(*(_DWORD *)(v34 + 64) & 0xFFFFFF) << 16)
                     - ((*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12);
                if ( (unsigned int)MiFlushAcquire((__int64)v59, 0LL, 0LL) )
                {
                  v60 = 0LL;
                  Object = 0LL;
                  if ( (*(_DWORD *)(v34 + 48) & 0x8000) == 0 )
                  {
                    v61 = *(void **)(v34 + 128);
                    if ( v61 )
                    {
                      v60 = *(_QWORD *)(v34 + 128);
                      Object = (PVOID)v60;
                      ObfReferenceObject(v61);
                    }
                  }
                  MiUnlockVad((__int64)CurrentThread, v34);
                  memset(v106, 0, sizeof(v106));
                  v107 = 0LL;
                  v108 = 0LL;
                  v109 = 0LL;
                  if ( v60 )
                  {
                    if ( (*((_DWORD *)P + 14) & 0x20) != 0 )
                      v107 = v60 | 1;
                    else
                      v107 = v60 | 2;
                  }
                  else
                  {
                    v107 = (__int64)P;
                  }
                  LODWORD(v109) = *((_DWORD *)P + 14);
                  HIDWORD(v109) = HIDWORD(v109) & 0xFFFFF000 | 4;
                  VadEventBitmap = MmExtendSection(v106, &v103, 0LL);
                  if ( Object )
                    ObfDereferenceObject(Object);
                  MiLockVad((__int64)CurrentThread, v34);
                  MiFlushRelease((__int64)P, 0LL, 0LL);
                  if ( VadEventBitmap >= 0
                    && (unsigned int)MiVadDeleted(v34) != 1
                    && (unsigned __int64)v90 >= v64
                    && (unsigned __int64)v90 <= v63
                    && v89 <= v63
                    && v89 >= v64
                    && ((*(_DWORD *)(v34 + 48) & 0x4000) == 0
                     || (int)MiCheckSecuredVad(v62, v84, v25, ProtectionMask) >= 0)
                    && *(__int64 *)(v34 + 120) < 0 )
                  {
                    VadEventBitmap = MiSetProtectionOnSection((__int64)v26, v34, v27, v81, v75, 0, &v95, &v96);
                  }
                }
                else
                {
                  VadEventBitmap = -1073741670;
                }
              }
              else
              {
                VadEventBitmap = -1073741791;
              }
              goto LABEL_290;
            }
            v52 = MiCommitPagefileBackedSection((__int64)v26, v34, v27, v81, v58, v71, v72, &v95, &v96);
LABEL_271:
            VadEventBitmap = v52;
            v76 = v52;
            if ( v52 >= 0 )
              goto LABEL_272;
            goto LABEL_290;
          }
LABEL_289:
          VadEventBitmap = -1073741755;
          goto LABEL_290;
        }
        v54 = v75 & 0xFFFFF9FF;
        v75 &= 0xFFFFF9FF;
        v55 = (unsigned __int8)v51 >> 6;
        if ( v55 == 3 && (v51 & 0x38) != 0 )
        {
          v54 |= 0x400u;
        }
        else
        {
          if ( v55 != 1 )
            goto LABEL_206;
          v54 |= 0x200u;
        }
        v75 = v54;
LABEL_206:
        v56 = MiMakeProtectionMask(v54);
        ProtectionMask = v56;
        if ( v56 == -1 )
          goto LABEL_289;
        goto LABEL_209;
      }
      return 3221225541LL;
    }
    return 3221225716LL;
  }
  if ( (a5 & 0x80000) != 0 && v14 != 0x80000 || (a5 & 0x1000000) != 0 && v14 != 0x1000000 )
    return 3221225715LL;
  if ( (a5 & 0x20400000) == 0x20400000 )
  {
    v15 = (a5 & 0x800000) == 0;
    goto LABEL_301;
  }
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( (a5 & 0x1000) != 0 )
    {
      v15 = (a5 & 0xE00000) == 0;
LABEL_301:
      if ( !v15 )
        return 3221225715LL;
      goto LABEL_36;
    }
  }
  else
  {
    if ( (a5 & 0x800000) == 0 )
    {
      if ( (a5 & 0x200000) != 0 )
      {
        if ( (a5 & 0x400000) != 0 || (a5 & 0x2000) == 0 )
          return 3221225715LL;
      }
      else if ( (a5 & 0x400000) != 0 )
      {
        if ( (a5 & 0x2000) == 0 || (a5 & 0xFFAFDF80) != 0 )
          return 3221225715LL;
        v16 = a6;
        v75 = a6;
        if ( a6 != 4 )
          return 3221225716LL;
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    if ( (a5 & 0x600000) == 0 )
    {
      v16 = a6;
      v75 = a6;
      if ( (a6 & 0xFFFFF9F9) != 0 )
        return 3221225541LL;
      goto LABEL_37;
    }
  }
  return 3221225715LL;
}
