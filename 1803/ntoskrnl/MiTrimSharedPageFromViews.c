/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140082660
 * Callers:
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MiPrepareAttachThread @ 0x1400D4D68 (MiPrepareAttachThread.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x14052D250 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // r12
  signed __int64 v7; // r10
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r8
  _KPROCESS *v15; // r15
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // r13
  _KPROCESS *v19; // rbx
  int v20; // r15d
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r8
  unsigned __int64 ProtoPteAddress; // rbx
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  char v36; // al
  int v37; // r9d
  int v38; // r10d
  __int64 v39; // rdx
  __int64 v40; // rdx
  _QWORD *SystemCacheReverseMap; // rbx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned __int64 Address; // rax
  int v49; // ecx
  ULONG_PTR v50; // r14
  struct _KTHREAD *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // eax
  unsigned int v55; // eax
  unsigned __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // eax
  int v62; // ecx
  __int64 SessionVm; // rax
  int v64; // r8d
  _QWORD *v65; // rbx
  void *v66; // rcx
  __int64 v67; // rcx
  ULONG_PTR SessionById; // rax
  int SystemRegionType; // eax
  __int64 v70; // rdx
  _QWORD *v71; // rdx
  __int64 v72; // r9
  signed __int64 *v73; // rbx
  signed __int64 *v74; // rbx
  int v75; // eax
  __int64 v76; // r10
  unsigned __int64 v77; // rbx
  __int64 SharedProtos; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // r8
  __int64 v81; // rax
  unsigned __int8 v82; // al
  char v83; // cl
  __int64 v84; // [rsp+30h] [rbp-D0h]
  __int64 valid; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v86; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v87; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v88; // [rsp+50h] [rbp-B0h]
  _KPROCESS *Object; // [rsp+58h] [rbp-A8h]
  unsigned int v90; // [rsp+60h] [rbp-A0h]
  unsigned int v92; // [rsp+68h] [rbp-98h]
  int v93; // [rsp+6Ch] [rbp-94h]
  int v94; // [rsp+70h] [rbp-90h]
  _QWORD *v96; // [rsp+78h] [rbp-88h] BYREF
  __int64 v97; // [rsp+80h] [rbp-80h]
  unsigned __int64 v98; // [rsp+88h] [rbp-78h]
  _QWORD *v99; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v102; // [rsp+A8h] [rbp-58h]
  PVOID v103; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-48h] BYREF
  char v105[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v107; // [rsp+160h] [rbp+60h] BYREF
  __int16 v108; // [rsp+164h] [rbp+64h]
  __int64 v109; // [rsp+168h] [rbp+68h]
  __int64 v110; // [rsp+170h] [rbp+70h]
  __int64 v111; // [rsp+178h] [rbp+78h]
  int v112; // [rsp+220h] [rbp+120h] BYREF
  __int16 v113; // [rsp+224h] [rbp+124h]
  __int64 v114; // [rsp+228h] [rbp+128h]
  __int64 v115; // [rsp+230h] [rbp+130h]
  __int64 v116; // [rsp+238h] [rbp+138h]
  _BYTE v117[48]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v102 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a4;
  v97 = a4;
  memset(v106, 0, sizeof(v106));
  v7 = 0LL;
  v86 = 17;
  HIDWORD(v109) = 0;
  result = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v87 = CurrentThread;
  v11 = 0LL;
  v90 = 0;
  HIDWORD(v114) = 0;
  v84 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return result;
  while ( 2 )
  {
    v12 = a1;
    v88 = 0LL;
    v13 = a1;
    P = a1;
    v14 = 0LL;
    v103 = (PVOID)*a1;
    v15 = (_KPROCESS *)a1[1];
    v16 = a1[3];
    v17 = *((_QWORD *)P + 2);
    v18 = *((_QWORD *)P + 4);
    Object = v15;
    v98 = v16;
    v99 = 0LL;
    v94 = 0;
    v93 = 0;
    if ( v15 && v15 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
      v19 = v15;
      v94 = MiPrepareAttachThread(v15, &v15[1].IdealNode[12]);
      v20 = v94;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( v20 )
      {
        KiStackAttachProcess(v19, 1u, (__int64)v117);
        v10 = v84;
        v7 = 0LL;
        goto LABEL_6;
      }
      v33 = v84;
      v15 = v19;
      v34 = valid;
      v7 = 0LL;
      goto LABEL_69;
    }
    v55 = *((_DWORD *)v12 + 11);
    if ( v55 < 2 )
      goto LABEL_98;
    v67 = *((unsigned int *)v12 + 10);
    if ( (_DWORD)v67 == -1 )
    {
      v14 = &unk_1403CB5C0;
    }
    else
    {
      if ( (_DWORD)v67 == -2 )
        goto LABEL_134;
      SessionById = MmGetSessionById(v67, v12, 0LL, CurrentThread);
      v88 = SessionById;
      if ( !SessionById )
      {
        v33 = v84;
        v50 = 0LL;
        v34 = valid;
        v7 = 0LL;
        goto LABEL_70;
      }
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v88);
        v33 = v84;
        v7 = 0LL;
        v34 = valid;
        v50 = 0LL;
        goto LABEL_70;
      }
      CurrentThread = v87;
      v55 = *((_DWORD *)v13 + 11);
      v14 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2944);
      v7 = 0LL;
    }
    v99 = v14;
LABEL_134:
    if ( v55 == 3 )
    {
      SystemRegionType = MiGetSystemRegionType(v17);
      if ( *(_DWORD *)(v70 + 40) == -2 )
      {
        if ( SystemRegionType != 1 )
          goto LABEL_137;
      }
      else if ( SystemRegionType == 1 )
      {
LABEL_137:
        v10 = v84;
        goto LABEL_98;
      }
LABEL_216:
      v33 = v84;
      v34 = valid;
      goto LABEL_69;
    }
    if ( (a3 & 0xA0000) != 0 )
      goto LABEL_216;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v14[1], 0LL);
    v71 = (_QWORD *)v99[2];
    if ( !v71 )
    {
LABEL_171:
      v74 = (signed __int64 *)v99[1];
      if ( _InterlockedCompareExchange64(v74, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v74);
LABEL_173:
      KeAbPostRelease((ULONG_PTR)v74);
      v51 = v87;
      KiLeaveGuardedRegionUnsafe(v87);
      v33 = v84;
      v7 = 0LL;
      v34 = valid;
      v50 = v88;
      goto LABEL_71;
    }
    while ( 1 )
    {
      v72 = v71[10];
      if ( v17 < (v72 & 0xFFFFFFFFFFFFF000uLL) + v71[4] )
        break;
      v71 = (_QWORD *)v71[1];
LABEL_153:
      if ( !v71 )
        goto LABEL_171;
    }
    if ( v17 < (v72 & 0xFFFFFFFFFFFFF000uLL) )
    {
      v71 = (_QWORD *)*v71;
      goto LABEL_153;
    }
    v96 = (_QWORD *)(v71[6] & 0xFFFFFFFFFFFFFFF8uLL);
    if ( *v96 != v6 )
    {
      v74 = (signed __int64 *)v99[1];
      if ( _InterlockedCompareExchange64(v74, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v74);
      goto LABEL_173;
    }
    if ( v17 + (v71[3] << 12) - v18 != (v72 & 0xFFFFFFFFFFFFF000uLL) )
    {
      v74 = (signed __int64 *)v99[1];
      if ( _InterlockedCompareExchange64(v74, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v74);
      goto LABEL_173;
    }
    v10 = v84;
    v7 = 0LL;
    v93 = 1;
LABEL_98:
    v19 = v15;
LABEL_6:
    v21 = v18 - 4096;
    v22 = (v17 - 4096) >> 12;
    v23 = v7;
    if ( v17 < v16 )
    {
      while ( 2 )
      {
        ++v22;
        v21 += 4096LL;
        if ( v10 )
        {
          if ( ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v11 )
          {
            v10 = v84;
          }
          else
          {
            if ( HIDWORD(v114) && MiFreeWsleList(v84, (__int64)&v112, 0) )
              v90 = 277;
            MiFlushTbList(&v107);
            if ( v19 )
            {
              if ( v11 )
                MiUnlockPageTableInternal(v84, v11);
              MiUnlockWorkingSetShared(v84, v86, v60);
            }
            else
            {
              MiUnlockSystemVa((__int64)v106, v59);
            }
            LODWORD(v7) = 0;
            v10 = 0LL;
            valid = 0LL;
            v84 = 0LL;
            v11 = 0LL;
          }
        }
        if ( v19 )
        {
          v92 = v7;
          if ( v10 )
          {
            if ( v23
              && v22 >= (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
              && v22 <= (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) )
            {
              v24 = v97;
              goto LABEL_18;
            }
          }
          else
          {
            v47 = (__int64)&v19[1].IdealNode[12];
            v84 = (__int64)&v19[1].IdealNode[12];
            if ( (a3 & 0x40000) != 0 )
            {
              v107 = MiTbFlushType(v47);
              v109 = 20LL;
              v108 = 0;
              v110 = v76;
              v111 = v76;
            }
            v86 = MiLockWorkingSetShared(v47);
          }
          Address = MiLocateAddress(v17);
          v23 = Address;
          if ( !Address )
            goto LABEL_67;
          v49 = *(_DWORD *)(Address + 48);
          if ( (v49 & 0x4000) != 0 )
            goto LABEL_67;
          v24 = v97;
          if ( (v49 & 7) != 0 && (*(_BYTE *)(v97 + 56) & 0x20) == 0 )
            goto LABEL_67;
          v96 = *(_QWORD **)(Address + 72);
          if ( *v96 != v97 )
            goto LABEL_67;
LABEL_18:
          if ( (*(_DWORD *)(v24 + 56) & 0x20) != 0 )
          {
            v56 = *(_QWORD *)(v23 + 80);
            if ( (unsigned __int64)v102 < v56 )
              goto LABEL_214;
            v57 = *(unsigned int *)(v23 + 24);
            if ( (unsigned __int64)v102 >= v56
                                         - 8 * (v57 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
                                         + 8
                                         * ((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
                                          + 1) )
              goto LABEL_214;
            v17 = ((__int64)((__int64)v102 - v56) >> 3 << 12)
                + ((v57 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12);
          }
          else
          {
            ProtoPteAddress = MiGetProtoPteAddress(v23, v17 >> 12, 0, &v96);
            if ( !ProtoPteAddress )
              goto LABEL_214;
            v26 = v96;
            if ( !v96 )
              goto LABEL_214;
            v27 = v96[1];
            if ( (*(_DWORD *)(*v96 + 56LL) & 0x20) != 0 )
            {
              if ( ProtoPteAddress < v27 || ProtoPteAddress >= v27 + 8LL * *((unsigned int *)v96 + 11) )
              {
                if ( (*((_BYTE *)v96 + 34) & 2) != 0 )
                  SharedProtos = MiGetSharedProtos(*v96, 0xFFFFFFFFLL, v96);
                else
                  SharedProtos = MiGetSubsectionDriverProtos(v96);
                v77 = (ProtoPteAddress << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
              }
              else
              {
                v77 = (ProtoPteAddress << 9) - (v27 << 9);
              }
              v29 = ((unsigned __int64)*((unsigned int *)v26 + 9) << 9) + (v77 & 0xFFFFFFFFFFFFF000uLL);
              v7 = 0LL;
            }
            else
            {
              if ( v27 )
              {
                v28 = (__int64)(ProtoPteAddress - v27) >> 3 << 12;
                v7 = 0LL;
              }
              else
              {
                v7 = 0LL;
                v28 = 0LL;
              }
              v29 = v28 + ((*((unsigned int *)v96 + 9) | ((unsigned __int64)((_WORD)v96[4] & 0xFFC0) << 26)) << 12);
            }
            if ( v21 != v29 )
              goto LABEL_67;
          }
          v30 = (((((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v11 == v30 )
          {
LABEL_27:
            v31 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v32 = *(_QWORD *)v31;
            if ( v31 >= 0xFFFFF6FB7DBED000uLL && v31 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (MiFlags & 0x1800000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
              {
                v79 = *(_QWORD *)v31;
                goto LABEL_199;
              }
              v79 = *(_QWORD *)v31;
              if ( (v32 & 1) == 0 || (v32 & 0x20) != 0 && (v32 & 0x42) != 0 )
              {
LABEL_199:
                v32 = v79;
              }
              else
              {
                v80 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v80 )
                {
                  v79 = v32 | 0x20;
                  v81 = *(_QWORD *)(v80 + 8 * ((v31 >> 3) & 0x1FF));
                  if ( (v81 & 0x20) == 0 )
                    v79 = *(_QWORD *)v31;
                  if ( (v81 & 0x42) != 0 )
                    v79 |= 0x42uLL;
                  goto LABEL_199;
                }
              }
            }
            v101 = v32;
            if ( (v32 & 1) != 0 )
            {
              v35 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v101) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( ((a3 & 0x10000000) == 0 || (v32 & 0x42) == 0 && (*(_BYTE *)(v35 + 34) & 0x10) == 0)
                && (*(_QWORD *)(v35 + 40) & 0x200000000000000LL) != 0 )
              {
                if ( (a3 & 0x40000) == 0 )
                {
                  if ( ((*(_DWORD *)(v35 + 16) >> 10) & 1) == 0 && (*(_DWORD *)(v97 + 56) & 0x80u) != 0 )
                    goto LABEL_29;
                  v36 = MiGetWsleContents(0xFFFFFFFFFLL, v17) & 0xF;
                  if ( *((_DWORD *)P + 11) == 3 && v36 == 9 )
                    goto LABEL_29;
                  if ( v36 != 8 && (v38 & 0x800000) == 0 )
                  {
                    if ( dword_1403CBF28 )
                      MI_WSLE_LOG_ACCESS(v84, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                    if ( !HIDWORD(v114) )
                    {
                      v54 = MiTbFlushType(v84);
                      v114 = 20LL;
                      v115 = 0LL;
                      v116 = 0LL;
                      v112 = v54;
                      v113 = 4;
                    }
                    MiInsertTbFlushEntry((__int64)&v112, v17, 1LL, 0);
                    if ( HIDWORD(v114) == (_DWORD)v114 && MiFreeWsleList(v84, (__int64)&v112, 0) )
                      v90 = 277;
                    goto LABEL_29;
                  }
                  v10 = v84;
                  if ( !v37 && a2 && (*(_BYTE *)(v84 + 184) & 7) != 2 )
                  {
                    if ( (unsigned int)MiReplaceLockedPage(v84, v35, v17, v92) )
                      goto LABEL_29;
                    v10 = v84;
                  }
                  v90 = 277;
LABEL_30:
                  v19 = Object;
                  v17 += 4096LL;
                  v7 = 0LL;
                  if ( v17 >= v98 )
                  {
                    v33 = v84;
                    v15 = Object;
                    v34 = valid;
                    goto LABEL_69;
                  }
                  v11 = valid;
                  continue;
                }
                if ( ((*(_DWORD *)(v35 + 16) >> 10) & 1) != 0 && (v32 & 0x42) != 0 )
                {
                  v82 = MiLockPageInline(v35);
                  v83 = *(_BYTE *)(v35 + 34);
                  if ( (v83 & 0x10) == 0 )
                    *(_BYTE *)(v35 + 34) = v83 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v82);
                  v101 = v32 & 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(
                    ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                    v32 & 0xFFFFFFFFFFFFFFBDuLL);
                  MiInsertTbFlushEntry((__int64)&v107, v17, 1LL, 0);
                }
              }
            }
          }
          else
          {
            if ( !v11 )
            {
              v33 = v84;
              valid = MiLockLowestValidPageTable(v84, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v105);
              v34 = valid;
              if ( valid != v30 )
                goto LABEL_94;
              goto LABEL_27;
            }
            v17 -= 4096LL;
            --v22;
            v21 -= 4096LL;
          }
LABEL_29:
          v10 = v84;
          goto LABEL_30;
        }
        break;
      }
      v92 = 1;
      if ( v10 )
      {
LABEL_47:
        if ( !*((_DWORD *)P + 11) )
        {
          if ( (unsigned int)MiGetSystemRegionType(v17) != 8
            || (SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v17, v39)) == 0LL )
          {
LABEL_214:
            v33 = v84;
LABEL_215:
            v34 = valid;
LABEL_94:
            v7 = 0LL;
            goto LABEL_68;
          }
          v33 = v84;
          v42 = *(_QWORD *)(MiGetSystemCacheReverseMap(v17, v40) + 24);
          v43 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( (v42 & 1) == 0 )
            v43 = v42;
          if ( v84 != *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v43 + 60LL) & 0x3FF)) + 7168LL )
            goto LABEL_215;
          v44 = SystemCacheReverseMap[2];
          if ( !v44 )
            goto LABEL_215;
          v45 = SystemCacheReverseMap[3];
          v96 = (_QWORD *)v45;
          if ( (v45 & 1) != 0 )
          {
            v45 &= ~1uLL;
            v96 = (_QWORD *)v45;
          }
          if ( *(_QWORD *)v45 != v97 )
            goto LABEL_215;
          v46 = (v44 & 3) != 0 ? SystemCacheReverseMap[4] : SystemCacheReverseMap[5] << 18;
          if ( v46 + (v17 & 0x3FFFF) != v21 )
            goto LABEL_215;
        }
        goto LABEL_27;
      }
      v61 = MiGetSystemRegionType(v17);
      if ( v61 == 8 )
      {
        v62 = 0;
        goto LABEL_114;
      }
      if ( v61 == 1 )
      {
        SessionVm = MiGetSessionVm();
      }
      else
      {
        if ( (unsigned int)(v61 - 6) <= 1 )
        {
          v62 = 2;
        }
        else if ( v61 == 3 )
        {
          v62 = 1;
        }
        else
        {
          if ( v61 != 12 )
          {
            v15 = Object;
            v50 = v88;
            v51 = v87;
            goto LABEL_80;
          }
          v62 = 1;
        }
LABEL_114:
        SessionVm = (__int64)MiGetAnyMultiplexedVm(v62);
      }
      v33 = SessionVm;
      v84 = SessionVm;
      if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v17, v64, 0, (__int64)v106) )
        goto LABEL_215;
      v84 = v106[3];
      if ( (a3 & 0x40000) != 0 )
      {
        v75 = MiTbFlushType(v106[3]);
        v109 = 20LL;
        v108 = 0;
        v110 = 0LL;
        v111 = 0LL;
        v107 = v75;
      }
      valid = ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      goto LABEL_47;
    }
LABEL_67:
    v33 = v84;
    v34 = valid;
LABEL_68:
    v15 = Object;
LABEL_69:
    v50 = v88;
LABEL_70:
    v51 = v87;
LABEL_71:
    if ( v33 )
    {
      if ( HIDWORD(v114) && MiFreeWsleList(v33, (__int64)&v112, 0) )
        v90 = 277;
      MiFlushTbList(&v107);
      if ( v15 )
      {
        if ( v34 )
          MiUnlockPageTableInternal(v33, v34);
        MiUnlockWorkingSetShared(v33, v86, v53);
      }
      else
      {
        MiUnlockSystemVa((__int64)v106, v52);
      }
      v7 = 0LL;
      v11 = 0LL;
      valid = 0LL;
      v84 = 0LL;
    }
    else
    {
      v11 = valid;
    }
LABEL_80:
    if ( v93 == 1 )
    {
      v73 = (signed __int64 *)v99[1];
      if ( _InterlockedCompareExchange64(v73, v7, 17LL) != 17 )
        ExfReleasePushLockShared(v73);
      KeAbPostRelease((ULONG_PTR)v73);
      KiLeaveGuardedRegionUnsafe(v51);
    }
    if ( v50 )
    {
      MmDetachSession(v50, v117);
      MmQuitNextSession(v50);
    }
    else if ( v94 == 1 )
    {
      KiUnstackDetachProcess((__int64)v117, 1LL);
      MiAttachThreadDone(&v15[1].IdealNode[12]);
    }
    if ( v15 )
      ObfDereferenceObject(v15);
    ExFreePoolWithTag(P, 0);
    if ( a2 == 1 && (*v102 & 1) == 0 )
    {
      v58 = v103;
      if ( v103 )
      {
        do
        {
          v65 = v58;
          v58 = (_QWORD *)*v58;
          v66 = (void *)v65[1];
          if ( v66 )
            ObfDereferenceObject(v66);
          ExFreePoolWithTag(v65, 0);
        }
        while ( v58 );
      }
      return 0LL;
    }
    else
    {
      a1 = v103;
      if ( v103 )
      {
        v10 = v84;
        v7 = 0LL;
        v6 = v97;
        CurrentThread = v87;
        continue;
      }
      return v90;
    }
  }
}
