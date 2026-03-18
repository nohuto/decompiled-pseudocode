/*
 * XREFs of MiAllocateVirtualMemory @ 0x14051BE20
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1404A42E8 (MmAllocateVirtualMemory.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x14051BDD0 (NtAllocateVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140022EC0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140064450 (MiCheckForConflictingVadExistence.c)
 *     MiFlushAcquire @ 0x140071D5C (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x14007CD40 (MiResetVirtualMemory.c)
 *     RtlFindMostSignificantBit @ 0x14007D560 (RtlFindMostSignificantBit.c)
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MiArbitraryCodeBlocked @ 0x14007D6D0 (MiArbitraryCodeBlocked.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404345F0 (MiAdvanceVadHint.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     MiCheckSecuredVad @ 0x14047B694 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     EtwTiLogAllocExecVm @ 0x1404C9A04 (EtwTiLogAllocExecVm.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCommitPagefileBackedSection @ 0x140549FD0 (MiCommitPagefileBackedSection.c)
 *     MiLogMemResetInfo @ 0x1406B4B64 (MiLogMemResetInfo.c)
 *     MiLogReserveVaFailed @ 0x1406B4BC8 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x1406B62F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x1406B84C0 (MiAllocateAweInfo.c)
 *     MiCommitEnclavePages @ 0x1406BAC74 (MiCommitEnclavePages.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 *     PerfInfoLogVirtualAlloc @ 0x14070C5E0 (PerfInfoLogVirtualAlloc.c)
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
        ULONG_PTR *a9)
{
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  bool v14; // zf
  unsigned int v15; // edi
  _KPROCESS *v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 *v18; // r10
  ULONG_PTR v19; // r11
  KPROCESSOR_MODE v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  _KPROCESS *v25; // r13
  unsigned __int64 v26; // r15
  int AweInfo; // edi
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  void *v30; // rdi
  unsigned __int64 v31; // rdi
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v33; // rsi
  unsigned int v34; // ecx
  unsigned __int64 v35; // r8
  int v36; // ecx
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  unsigned __int64 v39; // r15
  unsigned int v40; // eax
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  ULONG_PTR *v43; // rcx
  unsigned __int64 v44; // rdi
  unsigned int *v45; // rax
  unsigned int v46; // r8d
  int v47; // edx
  int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  int v53; // edx
  unsigned int v54; // ecx
  _QWORD *v55; // r9
  unsigned __int64 v56; // rdi
  void *v57; // rax
  ULONG_PTR v58; // rcx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r9
  __int64 **VadEvent; // rax
  ULONG_PTR v62; // rdi
  unsigned __int64 v63; // rax
  char v64; // si
  unsigned int v65; // eax
  __int64 v66; // r9
  int v67; // [rsp+28h] [rbp-1D0h]
  int v68; // [rsp+30h] [rbp-1C8h]
  unsigned __int8 v69[4]; // [rsp+50h] [rbp-1A8h] BYREF
  unsigned int v70; // [rsp+54h] [rbp-1A4h]
  int v71; // [rsp+58h] [rbp-1A0h] BYREF
  char v72; // [rsp+5Ch] [rbp-19Ch]
  unsigned int ProtectionMask; // [rsp+60h] [rbp-198h]
  unsigned __int64 v74; // [rsp+68h] [rbp-190h]
  unsigned __int64 v75; // [rsp+70h] [rbp-188h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-180h]
  unsigned __int64 v77; // [rsp+80h] [rbp-178h]
  unsigned int v78; // [rsp+88h] [rbp-170h]
  PVOID P; // [rsp+90h] [rbp-168h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-160h]
  PVOID Object; // [rsp+A0h] [rbp-158h]
  unsigned int v82; // [rsp+A8h] [rbp-150h] BYREF
  int v83; // [rsp+ACh] [rbp-14Ch] BYREF
  ULONG_PTR *v84; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-140h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-138h]
  PVOID v87; // [rsp+C8h] [rbp-130h] BYREF
  unsigned __int64 v88; // [rsp+D0h] [rbp-128h]
  unsigned __int64 v89; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v90; // [rsp+E0h] [rbp-118h]
  int v91; // [rsp+E8h] [rbp-110h] BYREF
  _BYTE v92[4]; // [rsp+ECh] [rbp-10Ch] BYREF
  unsigned __int64 v93; // [rsp+F0h] [rbp-108h]
  __int64 v94; // [rsp+F8h] [rbp-100h]
  unsigned __int64 *v95; // [rsp+100h] [rbp-F8h]
  unsigned __int64 *v96; // [rsp+108h] [rbp-F0h]
  int v97; // [rsp+110h] [rbp-E8h] BYREF
  LARGE_INTEGER v98; // [rsp+118h] [rbp-E0h] BYREF
  unsigned __int64 v99; // [rsp+120h] [rbp-D8h] BYREF
  unsigned __int64 v100; // [rsp+128h] [rbp-D0h] BYREF
  _QWORD v101[5]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+158h] [rbp-A0h]
  __int64 v103; // [rsp+160h] [rbp-98h]
  __int64 v104; // [rsp+168h] [rbp-90h]
  _QWORD v105[2]; // [rsp+170h] [rbp-88h] BYREF
  $5BC46E0569261879018906DEC3127961 v106; // [rsp+180h] [rbp-78h] BYREF

  v95 = a4;
  v85 = a3;
  v96 = a2;
  v94 = a1;
  v84 = a9;
  if ( a3 && (a3 < 0x20 ? (v9 = a3 + 32) : (v9 = 63 - RtlFindMostSignificantBit(a3)), v85 = v9, v9 > 0x35) )
    v10 = -1073741811;
  else
    v10 = 0;
  v86 = 0LL;
  v71 = v10;
  if ( v10 < 0 )
    return 3221225713LL;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v78 = a5 & 0x7F;
  if ( v78 > (unsigned __int16)KeNumberNodes )
    return 3221225715LL;
  v13 = a5 & 0xFFFFFF80;
  if ( (a5 & 0x9E07CF80) != 0 || (a5 & 0x1083000) == 0 )
    return 3221225715LL;
  if ( (a5 & 0x21E80000) == 0 )
  {
LABEL_36:
    v15 = a6;
    v70 = a6;
LABEL_37:
    v69[0] = 1;
    v72 = 0;
    if ( (v15 & 0x40000000) == 0 )
      goto LABEL_40;
    if ( (v15 & 0xF0) != 0 )
    {
      v15 &= ~0x40000000u;
      v70 = v15;
      v69[0] = 0;
LABEL_40:
      ProtectionMask = MiMakeProtectionMask(v15);
      if ( ProtectionMask != -1 )
      {
        v20 = a7;
        if ( a7 )
        {
          v21 = (__int64)v17;
          if ( (unsigned __int64)v17 >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v21 = *(_QWORD *)v21;
          v22 = (__int64)v18;
          if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
            v22 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v22 = *(_QWORD *)v22;
        }
        v23 = *v17;
        v77 = v23;
        v90 = v23;
        v88 = *v18;
        v24 = v88;
        v93 = v88;
        if ( v23 > 0x7FFFFFFDFFFFLL )
          return 3221225712LL;
        if ( 0x7FFFFFFE0000LL - v23 < v88 || !v88 )
          return 3221225714LL;
        if ( v19 == -1LL )
        {
          v25 = v16;
          v87 = v16;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(v19, 1834380621, (__int64)&v87, 0LL, 0LL);
          v71 = result;
          if ( (int)result < 0 )
            return result;
          v25 = (_KPROCESS *)v87;
          v20 = a7;
        }
        v26 = 0LL;
        v75 = 0LL;
        if ( (a5 & 0x40000000) != 0 )
        {
          if ( !v25[2].ActiveProcessors.Bitmap[9] )
          {
            AweInfo = -1073741581;
            goto LABEL_292;
          }
          if ( (a5 & 0x21F80000) != 0 )
          {
            AweInfo = -1073741581;
            goto LABEL_292;
          }
        }
        v28 = 4096LL;
        if ( (a5 & 0x20400000) == 0x20400000 )
        {
          v28 = 0x10000LL;
        }
        else if ( (a5 & 0x20000000) != 0 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v20) )
          {
            AweInfo = -1073741727;
            goto LABEL_292;
          }
          v28 = 0x200000LL;
        }
        v29 = (__int64)Process;
        if ( Process != v25 )
        {
          KiStackAttachProcess(v25, 0, (__int64)&v106);
          v12 = 2;
          v29 = (__int64)Process;
        }
        P = 0LL;
        if ( (a5 & 0x1000) != 0 && !v77 )
          v13 = a5 & 0xFFFFDF80 | 0x2000;
        if ( (v13 & 0x2000) != 0 )
        {
          if ( (v15 & 0x88) == 0 )
          {
            if ( ((a8 & 0x20000000) == 0 || (MiFlags & 0x100000) != 0) && (ProtectionMask & 2) != 0 )
            {
              AweInfo = MiArbitraryCodeBlocked(v29);
              v71 = AweInfo;
              if ( AweInfo < 0 )
                goto LABEL_292;
            }
            v89 = 0x10000LL;
            if ( !v77 )
            {
              v24 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              v88 = v24;
              v30 = (void *)((v24 >> 12) + ((v24 & 0xFFF) != 0));
              Object = v30;
              v74 = 0LL;
              LODWORD(Process) = v13 & 0x20000000;
              if ( (v13 & 0x20000000) != 0 )
              {
                if ( v24 % v28 )
                {
                  AweInfo = -1073741582;
                  goto LABEL_292;
                }
                v89 = v28;
              }
LABEL_96:
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
              v33 = (ULONG_PTR)PoolWithTag;
              if ( !PoolWithTag )
              {
                AweInfo = -1073741670;
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
              v34 = v78;
              *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ (v78 << 8)) & 0x3F00;
              if ( v34 )
                *(_BYTE *)(*(_QWORD *)&v25[1].IdealGlobalNode + 232LL) = 1;
              if ( (v13 & 0x1000) != 0 )
              {
                v35 = (unsigned __int64)v30;
                *((_DWORD *)PoolWithTag + 13) |= 0x80000000;
              }
              else
              {
                v35 = (unsigned __int64)P;
              }
              v36 = *((_DWORD *)PoolWithTag + 12) ^ (*((_DWORD *)PoolWithTag + 12) ^ (8 * ProtectionMask)) & 0xF8 | 0x8000;
              *((_DWORD *)PoolWithTag + 12) = v36;
              if ( (a8 & 1) != 0 )
                v35 = 0x7FFFFFFFELL;
              *((_DWORD *)PoolWithTag + 13) ^= (v35 ^ *((_DWORD *)PoolWithTag + 13)) & 0x7FFFFFFF;
              *((_BYTE *)PoolWithTag + 34) = v35 >> 31;
              P = 0LL;
              v78 = v13 & 0x20400000;
              if ( (v13 & 0x20400000) == 0x20400000 )
              {
                *((_DWORD *)PoolWithTag + 12) = v36 | 0x100000;
                goto LABEL_121;
              }
              if ( (v13 & 0x400000) != 0 )
              {
                if ( !v25[1].ActiveProcessors.Bitmap[3] )
                {
                  AweInfo = MiAllocateAweInfo();
                  v71 = AweInfo;
                  if ( AweInfo < 0 )
                    goto LABEL_125;
                }
                v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
                P = v37;
                if ( !v37 )
                {
LABEL_112:
                  ExFreePoolWithTag((PVOID)v33, 0);
                  AweInfo = -1073741670;
                  goto LABEL_292;
                }
                *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFBFFF8 | 3;
                v37[3] = v33;
              }
              else
              {
                if ( (_DWORD)Process )
                {
                  AweInfo = MiCreateLargePageVad(v25, PoolWithTag);
                  v71 = AweInfo;
                  if ( AweInfo < 0 )
                  {
LABEL_125:
                    ExFreePoolWithTag((PVOID)v33, 0);
                    goto LABEL_292;
                  }
                  v38 = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 5;
                }
                else
                {
                  if ( (v13 & 0x800000) == 0 )
                    goto LABEL_121;
                  if ( !(unsigned int)MiCreateRotateView((__int64)PoolWithTag) )
                    goto LABEL_112;
                  v38 = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 6;
                }
                *(_DWORD *)(v33 + 48) = v38;
              }
LABEL_121:
              if ( (v13 & 0x200000) != 0 )
              {
                AweInfo = MiCreateVadEventBitmap((__int64)v25, v33, (unsigned __int64)Object, 4);
                if ( AweInfo >= 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)&v25[1].DirectoryTableBase + 1, 0x8000u);
                  AweInfo = 0;
                  v77 = v90;
                  v24 = v88;
                  v25 = (_KPROCESS *)v87;
                  v26 = v75;
                }
                if ( AweInfo < 0 )
                  goto LABEL_125;
                *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 4;
                v12 |= 8u;
              }
              v82 = 0;
              LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
              if ( (v25[1].DirectoryTableBase & 0x2000000000LL) != 0 )
              {
                AweInfo = -1073741558;
LABEL_141:
                UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
                if ( v12 < 8 )
                {
                  if ( (v13 & 0x800000) != 0 )
                  {
                    MiFreeRotateView(v33);
                  }
                  else if ( v78 != 541065216 )
                  {
                    if ( (_DWORD)Process )
                    {
                      MiFreeLargePageView(v25, v33, 0LL);
                    }
                    else if ( (v13 & 0x400000) != 0 )
                    {
                      ExFreePoolWithTag(P, 0);
                    }
                  }
                }
                else
                {
                  MiFreeVadEventBitmap(v25, v33, 4LL);
                }
                ExFreePoolWithTag((PVOID)v33, 0);
                goto LABEL_292;
              }
              if ( v77 )
              {
                if ( MiCheckForConflictingVadExistence() )
                {
                  AweInfo = -1073741800;
                  goto LABEL_141;
                }
              }
              else
              {
                v39 = v85;
                AweInfo = MiSelectUserAddress(v13, v85, v24, v89, ProtectionMask, a8, &v82, &v75);
                if ( AweInfo < 0 )
                {
                  MiLogReserveVaFailed(v24, v89, v39);
                  v26 = v75;
                  goto LABEL_141;
                }
                v40 = v82;
                if ( v78 == 541065216 )
                {
                  v86 = v82;
                }
                else
                {
                  if ( (_DWORD)Process )
                    v40 = 0;
                  v86 = v40;
                }
                v26 = v75;
                v74 = (v24 + v75 - 1) | 0xFFF;
                v41 = v74;
              }
              Object = (PVOID)(v26 >> 12);
              *(_DWORD *)(v33 + 24) = v26 >> 12;
              *(_BYTE *)(v33 + 32) = v26 >> 44;
              v90 = v41 >> 12;
              *(_DWORD *)(v33 + 28) = v41 >> 12;
              *(_BYTE *)(v33 + 33) = v41 >> 44;
              AweInfo = MiInsertVadCharges(v33, v25);
              v71 = AweInfo;
              if ( AweInfo < 0 )
                goto LABEL_141;
              MiInsertPrivateVad(v33, (__int64)P, (__int64)v25);
              if ( (_DWORD)v86 == 1 )
                MiAdvanceVadHint((unsigned __int64)Object, v90, a8);
              v24 = v74 - v26 + 1;
              LOBYTE(v12) = v12 | 1;
              if ( (ProtectionMask & 2) != 0 && MiIsProcessCfgEnabled() )
              {
                MiLockVad((__int64)CurrentThread, v33);
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v25);
                LOBYTE(v12) = v12 & 0xFE;
                AweInfo = MiCommitVadCfgBits(v33, 0LL, v69);
                v71 = AweInfo;
                if ( AweInfo < 0 )
                {
                  MiReferenceVad(v33);
                  MiDeleteVad(v42, 0);
                  goto LABEL_292;
                }
                v43 = v84;
                if ( v84 )
                  goto LABEL_166;
                if ( (*(_BYTE *)(v33 + 48) & 7) == 5 )
                {
LABEL_164:
                  if ( !v43 && (*(_BYTE *)(v33 + 48) & 7) != 5 )
                  {
LABEL_170:
                    if ( (v12 & 1) != 0 )
                      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
                    if ( (*(_BYTE *)(v33 + 48) & 7) != 5 )
                      goto LABEL_274;
                    AweInfo = MiMapUserLargePages(v33, (*(_DWORD *)(v33 + 48) >> 8) & 0x3F);
                    v71 = AweInfo;
                    if ( AweInfo < 0 )
                    {
                      MiDeleteVad(v33, 0);
                      goto LABEL_292;
                    }
                    if ( v84 )
                      goto LABEL_274;
                    goto LABEL_273;
                  }
LABEL_166:
                  if ( (v12 & 1) != 0 )
                  {
                    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v25);
                    LOBYTE(v12) = v12 & 0xFE;
                  }
                  MiReferenceVad(v33);
                  if ( v84 )
                    *v84 = v33;
                  goto LABEL_170;
                }
                MiUnlockVad((__int64)CurrentThread, v33);
              }
              else if ( v84 || (*(_BYTE *)(v33 + 48) & 7) == 5 )
              {
                MiLockVad((__int64)CurrentThread, v33);
              }
              v43 = v84;
              goto LABEL_164;
            }
            LODWORD(Process) = v13 & 0x20000000;
            if ( (v13 & 0x20000000) != 0 )
            {
              if ( v24 % v28 )
              {
                AweInfo = -1073741582;
                goto LABEL_292;
              }
              v89 = v28;
              v26 = v77 & ~(v28 - 1);
              v75 = v26;
              v31 = v26 + v24 - 1;
            }
            else
            {
              if ( (v13 & 0x40000000) != 0 )
              {
                if ( (((unsigned int)v77 | (unsigned int)v24) & 0xFFF) != 0 )
                  goto LABEL_94;
                v26 = v77;
                v75 = v77;
              }
              else
              {
                v26 = v77 & 0xFFFFFFFFFFFF0000uLL;
                v75 = v77 & 0xFFFFFFFFFFFF0000uLL;
              }
              v31 = (v24 + v77 - 1) | 0xFFF;
            }
            v74 = v31;
            if ( v26 >= 0x10000 || v25[2].ActiveProcessors.Bitmap[9] )
            {
              v30 = (void *)(((__int64)(v31 - v26) >> 12) + (((v31 - v26) & 0xFFF) != 0));
              Object = v30;
              goto LABEL_96;
            }
LABEL_94:
            AweInfo = -1073741584;
            goto LABEL_292;
          }
          AweInfo = -1073741755;
LABEL_292:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (v13 & 0x1000000) != 0 && AweInfo == -1073740748 )
            MiLogMemResetInfo(v26, v24, 0LL);
          if ( (v12 & 2) != 0 )
            KiUnstackDetachProcess(&v106, 0LL);
          if ( v94 != -1 )
            ObfDereferenceObjectWithTag(v25, 0x6D566D4Du);
          return (unsigned int)AweInfo;
        }
        if ( (v13 & 0x40000000) != 0 )
        {
          AweInfo = -1073741581;
          goto LABEL_292;
        }
        if ( v13 == 0x80000 || v13 == 0x1000000 )
        {
          if ( v24 + v77 < 0x1000 )
          {
            AweInfo = -1073741800;
            goto LABEL_292;
          }
          v44 = ((v24 + v77) & 0xFFFFFFFFFFFFF000uLL) - 1;
          v74 = v44;
          v26 = (v77 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v75 = v26;
          if ( v26 > v44 )
          {
            AweInfo = -1073741800;
            goto LABEL_292;
          }
        }
        else
        {
          v44 = (v24 + v77 - 1) | 0xFFF;
          v74 = v44;
          v26 = v77 & 0xFFFFFFFFFFFFF000uLL;
          v75 = v77 & 0xFFFFFFFFFFFFF000uLL;
        }
        v24 = v44 - v26 + 1;
        v88 = v24;
        v86 = v26 >> 12;
        v85 = v44 >> 12;
        v45 = MiObtainReferencedVad(v26, &v71);
        v33 = (ULONG_PTR)v45;
        if ( !v45 )
        {
          AweInfo = v71;
          if ( v71 == -1073741664 )
            AweInfo = -1073741800;
          goto LABEL_292;
        }
        if ( v85 > (v45[7] | ((unsigned __int64)*((unsigned __int8 *)v45 + 33) << 32)) )
        {
          AweInfo = -1073741800;
LABEL_291:
          MiUnlockAndDereferenceVad((char *)v33);
          goto LABEL_292;
        }
        v46 = v45[12];
        v47 = v46 & 7;
        if ( v47 == 3 && (v46 & 0x40000) != 0 )
        {
          v48 = MiCommitEnclavePages((_DWORD)v25, (_DWORD)v45, v26, v44, v13, ProtectionMask);
          goto LABEL_195;
        }
        if ( ((1 << v47) & 0x55) == 0 )
        {
          AweInfo = -1073741800;
          goto LABEL_291;
        }
        v49 = v45[13];
        LODWORD(v49) = v49 & 0x7FFFFFFF;
        if ( (v49 | ((unsigned __int64)*(unsigned __int8 *)(v33 + 34) << 31)) >= 0x7FFFFFFFELL )
        {
          AweInfo = -1073741800;
          goto LABEL_291;
        }
        if ( v47 != 6 )
        {
          LOBYTE(v52) = ProtectionMask;
LABEL_211:
          if ( (v13 & 0x1080000) != 0 )
          {
            AweInfo = MiResetVirtualMemory((__int64)Process, v26, v44, v33, v13);
            v71 = AweInfo;
            MiUnlockAndDereferenceVad((char *)v33);
            if ( AweInfo >= 0 )
              goto LABEL_274;
            goto LABEL_292;
          }
          if ( (v52 & 2) != 0 )
          {
            AweInfo = MiAllowProtectionChange((__int64)v25, (__int64)Process, v33, v52, v26, v44);
            if ( AweInfo < 0 )
              goto LABEL_291;
            if ( (!v69[0] || (*(_DWORD *)(v33 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
            {
              if ( (*(_DWORD *)(v33 + 48) & 0x4000) != 0 )
              {
                AweInfo = MiCheckSecuredVad(v33, v77, v24, ProtectionMask);
                if ( AweInfo < 0 )
                  goto LABEL_291;
                v12 |= 4u;
              }
              v105[0] = v26;
              v105[1] = v74;
              AweInfo = MiCommitVadCfgBits(v33, (__int64)v105, v69);
              if ( AweInfo < 0 )
                goto LABEL_291;
              v72 = 1;
            }
          }
          v53 = *(_DWORD *)(v33 + 48);
          v54 = v70;
          if ( (v53 & 0x8000) != 0 )
          {
            if ( (v70 & 0x88) == 0
              && ((v53 & 7) != 6 || (v70 & 0xFFFFF9F9) == 0)
              && ((v53 & 0x4000) == 0 || !MiLocateVadEvent(v33, 192)) )
            {
              v83 = 0;
              VadEvent = MiLocateVadEvent(v33, 256);
              Object = VadEvent;
              if ( VadEvent )
              {
                v62 = (ULONG_PTR)VadEvent[2];
                ExAcquirePushLockExclusiveEx(v62 + 40, 0LL);
                v71 = MiCommitExistingVad(
                        v62,
                        v77
                      + *((_QWORD *)Object + 1)
                      - ((*(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32)) << 12),
                        v93,
                        4u,
                        &v83);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v62 + 40));
                KeAbPostRelease(v62 + 40);
                AweInfo = v71;
                v24 = v88;
                v25 = (_KPROCESS *)v87;
                v26 = v75;
                if ( v71 < 0 )
                  goto LABEL_291;
                v63 = v90;
              }
              else
              {
                v63 = v77;
              }
              AweInfo = MiCommitExistingVad(v33, v63, v93, v70, &v83);
              v71 = AweInfo;
              if ( AweInfo >= 0 )
              {
                MiUnlockAndDereferenceVad((char *)v33);
                if ( v83 == 1 )
                {
                  v100 = v26;
                  v99 = v24;
                  v64 = v70;
                  v65 = v70;
                  if ( v72 && !v69[0] )
                    v65 = v70 | 0x40000000;
                  MmProtectVirtualMemory((__int64)Process, (__int64)v25, &v100, (__int64 *)&v99, v65, &v97);
                  goto LABEL_275;
                }
LABEL_274:
                v64 = v70;
LABEL_275:
                if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
                {
                  if ( (v13 & 0x3000) != 0 )
                  {
                    v66 = v13;
                    if ( (a8 & 1) != 0 )
                      v66 = 0x2000LL;
                    PerfInfoLogVirtualAlloc(v26, v24, v25, v66);
                  }
                  else if ( (v13 & 0x1080000) != 0 )
                  {
                    MiLogMemResetInfo(v26, v24, v13);
                  }
                }
                if ( (v12 & 2) != 0 )
                  KiUnstackDetachProcess(&v106, 0LL);
                if ( (ProtectionMask & 2) != 0 && a7 == 1 )
                  EtwTiLogAllocExecVm(v25, v26, v93, v13, v64);
                if ( v94 != -1 )
                  ObfDereferenceObjectWithTag(v25, 0x6D566D4Du);
                *v95 = v24;
                *v96 = v26;
                return (unsigned int)AweInfo;
              }
              goto LABEL_291;
            }
          }
          else if ( (v70 & 0x600) == 0 )
          {
            if ( (v53 & 0x4000) != 0 && v12 < 4 )
            {
              AweInfo = MiCheckSecuredVad(v33, v77, v24, ProtectionMask);
              if ( AweInfo < 0 )
                goto LABEL_291;
              v54 = v70;
            }
            v55 = **(_QWORD ***)(v33 + 72);
            P = v55;
            if ( v55[8] )
            {
              if ( *(__int64 *)(v33 + 120) < 0 )
              {
                v98.QuadPart = v74
                             + 1
                             + ((unsigned __int64)(*(_DWORD *)(v33 + 64) & 0xFFFFFF) << 16)
                             - ((*(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32)) << 12);
                if ( (unsigned int)MiFlushAcquire((__int64)v55, 0LL, 0LL) )
                {
                  v56 = 0LL;
                  Object = 0LL;
                  if ( (*(_DWORD *)(v33 + 48) & 0x8000) == 0 )
                  {
                    v57 = *(void **)(v33 + 128);
                    if ( v57 )
                    {
                      v56 = *(_QWORD *)(v33 + 128);
                      Object = (PVOID)v56;
                      ObfReferenceObject(v57);
                    }
                  }
                  MiUnlockVad((__int64)CurrentThread, v33);
                  memset(v101, 0, sizeof(v101));
                  v102 = 0LL;
                  v103 = 0LL;
                  v104 = 0LL;
                  if ( v56 )
                  {
                    if ( (*((_DWORD *)P + 14) & 0x20) != 0 )
                      v102 = v56 | 1;
                    else
                      v102 = v56 | 2;
                  }
                  else
                  {
                    v102 = (__int64)P;
                  }
                  LODWORD(v104) = *((_DWORD *)P + 14);
                  HIDWORD(v104) = HIDWORD(v104) & 0xFFFFF000 | 4;
                  AweInfo = MmExtendSection((__int64)v101, &v98, 0);
                  if ( Object )
                    ObfDereferenceObject(Object);
                  MiLockVad((__int64)CurrentThread, v33);
                  MiFlushRelease((__int64)P, 0LL, 0LL);
                  if ( AweInfo >= 0
                    && (unsigned int)MiVadDeleted(v33) != 1
                    && v86 >= v60
                    && v86 <= v59
                    && v85 <= v59
                    && v85 >= v60
                    && ((*(_DWORD *)(v33 + 48) & 0x4000) == 0
                     || (int)MiCheckSecuredVad(v58, v77, v24, ProtectionMask) >= 0)
                    && *(__int64 *)(v33 + 120) < 0 )
                  {
                    AweInfo = MiSetProtectionOnSection((__int64)v25, v33, v26, v74, v70, 0, &v91, (__int64)v92);
                  }
                }
                else
                {
                  AweInfo = -1073741670;
                }
              }
              else
              {
                AweInfo = -1073741791;
              }
              goto LABEL_291;
            }
            v48 = MiCommitPagefileBackedSection((_DWORD)v25, v33, v26, v74, v54, v67, v68, (__int64)&v91, (__int64)v92);
LABEL_195:
            AweInfo = v48;
            v71 = v48;
            if ( v48 >= 0 )
            {
LABEL_273:
              MiUnlockAndDereferenceVad((char *)v33);
              goto LABEL_274;
            }
            goto LABEL_291;
          }
LABEL_290:
          AweInfo = -1073741755;
          goto LABEL_291;
        }
        v50 = v70 & 0xFFFFF9FF;
        v70 &= 0xFFFFF9FF;
        v51 = v46 & 0xC0;
        if ( v51 == 192 && (v46 & 0x38) != 0 )
        {
          v50 |= 0x400u;
        }
        else
        {
          if ( v51 != 64 )
            goto LABEL_208;
          v50 |= 0x200u;
        }
        v70 = v50;
LABEL_208:
        v52 = MiMakeProtectionMask(v50);
        ProtectionMask = v52;
        if ( v52 == -1 )
          goto LABEL_290;
        goto LABEL_211;
      }
      return 3221225541LL;
    }
    return 3221225716LL;
  }
  if ( (a5 & 0x80000) != 0 && v13 != 0x80000 || (a5 & 0x1000000) != 0 && v13 != 0x1000000 )
    return 3221225715LL;
  if ( (a5 & 0x20400000) == 0x20400000 )
  {
    v14 = (a5 & 0x800000) == 0;
    goto LABEL_301;
  }
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( (a5 & 0x1000) != 0 )
    {
      v14 = (a5 & 0xE00000) == 0;
LABEL_301:
      if ( !v14 )
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
        v15 = a6;
        v70 = a6;
        if ( a6 != 4 )
          return 3221225716LL;
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    if ( (a5 & 0x600000) == 0 )
    {
      v15 = a6;
      v70 = a6;
      if ( (a6 & 0xFFFFF9F9) != 0 )
        return 3221225541LL;
      goto LABEL_37;
    }
  }
  return 3221225715LL;
}
