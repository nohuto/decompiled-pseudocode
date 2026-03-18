/*
 * XREFs of MiQueryAddressState @ 0x14001F780
 * Callers:
 *     MiAllowProtectionChange @ 0x140062454 (MiAllowProtectionChange.c)
 *     MiQueryAddressSpan @ 0x1400B1200 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x1400B1DE0 (MiComparePteProtections.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiSkipFractionalPagefileRegion @ 0x1400C571C (MiSkipFractionalPagefileRegion.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiGetValidAweProtection @ 0x1402626A8 (MiGetValidAweProtection.c)
 *     MiSkipEntirePagefileRegions @ 0x140263778 (MiSkipEntirePagefileRegions.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int16 *AnyMultiplexedVm; // rdi
  int v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // r12
  int v21; // edi
  ULONG_PTR v22; // r9
  __int64 v23; // rdx
  int ValidAweProtection; // r14d
  unsigned __int64 v25; // r8
  unsigned int v26; // r15d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r14d
  int PageProtection; // eax
  ULONG_PTR v32; // rdi
  unsigned __int64 v33; // rdi
  int v34; // r11d
  ULONG_PTR v35; // r10
  int v36; // ecx
  int v37; // r15d
  __int64 v38; // rbx
  ULONG_PTR v39; // rsi
  int v40; // r10d
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  ULONG_PTR v44; // r10
  _QWORD *v45; // rdx
  int v46; // ecx
  __int64 *v47; // rbx
  ULONG_PTR v48; // rdx
  __int64 v49; // rdi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int8 v55; // al
  LONG *v56; // rbx
  unsigned __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  bool v59; // zf
  _KSPIN_LOCK_QUEUE *volatile v60; // rax
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r8
  LONG *v66; // rax
  int v67; // r8d
  unsigned int v68; // edi
  unsigned int v69; // esi
  int v70; // edx
  unsigned int v71; // ebx
  struct _LIST_ENTRY *v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // rcx
  struct _KPRCB *v79; // rax
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  volatile signed __int32 *v81; // r8
  int v82; // r9d
  signed __int32 v83; // eax
  volatile signed __int32 v84; // ett
  signed __int32 v85; // edx
  signed __int64 v86; // rdx
  unsigned __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // r8
  signed __int64 v90; // rax
  signed __int64 v91; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  unsigned __int64 v99; // [rsp+38h] [rbp-C8h]
  __int64 v100; // [rsp+40h] [rbp-C0h]
  int v101; // [rsp+48h] [rbp-B8h]
  __int64 v102; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+60h] [rbp-A0h]
  unsigned int v105; // [rsp+64h] [rbp-9Ch]
  int v106; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h]
  unsigned int v108; // [rsp+78h] [rbp-88h] BYREF
  int v109; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  __int64 v112; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-68h]
  __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v115; // [rsp+A8h] [rbp-58h]
  __int64 *v116; // [rsp+B0h] [rbp-50h]
  int *v117; // [rsp+B8h] [rbp-48h]
  __int64 v118; // [rsp+C8h] [rbp-38h]
  _DWORD *v119; // [rsp+D0h] [rbp-30h]
  __int64 v120; // [rsp+D8h] [rbp-28h]
  _QWORD v121[22]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = a1;
  v117 = a6;
  v9 = a5 + 1280;
  v10 = a3;
  v116 = a7;
  BugCheckParameter4 = a4;
  *a8 = 1;
  v119 = a8;
  v100 = a5 + 1280;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v120 = v11;
  v99 = v11;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v104 = 0;
  v110 = v12;
  v13 = 0LL;
  v106 = 0;
  v105 = 0x2000;
  v14 = 0LL;
  v111 = 0LL;
  v118 = v12 << 25 >> 16;
LABEL_2:
  v115 = v12;
  v101 = 0;
  v102 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  memset(v121, 0, sizeof(v121));
  LODWORD(v121[0]) = 2145;
  v15 = ((v11 << 25) - v14) >> 16;
  v16 = v15;
  if ( v15 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v16 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v16 = (__int64)((v16 << 25) - v14) >> 16;
    }
    while ( v16 >= 0xFFFFF68000000000uLL );
    v9 = a5 + 1280;
  }
  if ( v16 < 0xFFFF800000000000uLL || v16 >= qword_1403CD100 && v16 <= qword_1403CBB70 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  v18 = MiFastLockLeafPageTable(AnyMultiplexedVm, v15);
  if ( v18 )
  {
    v19 = v18 - 1;
    LODWORD(v112) = v18 - 1;
    v20 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v113 = v20;
  }
  else
  {
    LODWORD(v121[0]) |= 4u;
    v121[21] = &v112;
    v121[2] = 0LL;
    v121[20] = MiGetNextPageTableTail;
    v121[5] = v118;
    BYTE2(v121[1]) = 1;
    v121[3] = AnyMultiplexedVm;
    BYTE4(v121[0]) = v10;
    v121[4] = v15;
    MiWalkPageTables((int *)v121);
    v20 = v113;
    v19 = v112;
  }
  if ( v20 )
  {
    v13 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL != v13 )
      v115 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v19 )
    {
      v93 = v19;
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v93;
      }
      while ( v93 );
      MiUnlockPageTableInternal(v9, v13);
      v94 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v95 = v19;
      do
      {
        v94 = ((v94 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v95;
      }
      while ( v95 );
      v96 = (__int64)(((v94 + 8) << 25) - v14) >> 16;
      v97 = v19;
      do
      {
        v96 = ((v96 << 25) - v14) >> 16;
        --v97;
      }
      while ( v97 );
      *v116 = v96;
      *v117 = (*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F;
      return 4096LL;
    }
    if ( v99 == v20 )
    {
      v21 = 1;
      v102 = MI_READ_PTE_LOCK_FREE(v99);
      v101 = 1;
      v20 = v22 + 8;
      goto LABEL_23;
    }
    MiUnlockPageTableInternal(v9, ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = 0LL;
  }
  else
  {
    v20 = v110 + 8;
  }
  v21 = 0;
  v22 = v99;
  while ( 1 )
  {
LABEL_23:
    v23 = v102;
    ValidAweProtection = 0;
    v25 = 0x2000LL;
    v26 = 0x2000;
    if ( v102 )
    {
      v25 = v102;
      v27 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)&v102 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v102 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v102, v102, v102, v22)
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v102 >> 3) & 0x1FF));
          v23 = v25;
          if ( (v29 & 0x20) != 0 )
            v23 = v25 | 0x20;
          if ( (v29 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
        else
        {
          v23 = v102;
        }
      }
      if ( (v23 & 0x3E0) == 0x200
        && (v23 & 1) == 0
        && ((v23 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v23)) )
      {
        v33 = v99;
        v34 = 2;
      }
      else
      {
        v26 = 4096;
        v30 = *(_DWORD *)(BugCheckParameter4 + 48);
        if ( (v30 & 7) == 1 )
        {
          ValidAweProtection = (unsigned __int8)v30 >> 3;
          goto LABEL_108;
        }
        if ( (v30 & 7) == 3 && (v30 & 0x10000) == 0 )
        {
          ValidAweProtection = MiGetValidAweProtection(v102, v23, v25, v22);
          goto LABEL_108;
        }
        PageProtection = MiGetPageProtection(BugCheckParameter4, v22);
        v32 = BugCheckParameter2;
        ValidAweProtection = PageProtection;
        if ( BugCheckParameter2 )
        {
          MiUnlockPageTableInternal(v9, v13);
          v10 = a3;
          v13 = 0LL;
          MiUnlockWorkingSetShared(v9, a3, v77);
          MiFaultInPagedPool(v32);
          MiLockWorkingSetShared(v9);
          v12 = v110;
          v11 = v99;
          v14 = v111;
          goto LABEL_2;
        }
        v33 = v99;
        v34 = 2;
        v27 = 0xFFFFF6FB7DBED000uLL;
        if ( !PageProtection )
          v26 = 0x2000;
      }
    }
    else
    {
      v35 = BugCheckParameter4;
      *v119 = 0;
      v36 = *(_DWORD *)(v35 + 48);
      if ( (((v36 & 7) - 1) & 0xFFFFFFFD) == 0 )
        goto LABEL_108;
      if ( (v36 & 0x4000) != 0 )
      {
        v37 = *(_DWORD *)(v35 + 52);
        if ( v37 < 0 )
          ValidAweProtection = (unsigned __int8)v36 >> 3;
        v26 = ((v37 >> 31) & 0xFFFFF000) + 0x2000;
        goto LABEL_108;
      }
      v38 = v8 >> 12;
      BugCheckParameter2 = MiGetProtoPteAddress(v35, v38, 4, &v114);
      v39 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
      {
        if ( !(unsigned int)MiVadPureReserve(BugCheckParameter4) || !v114 || *(_QWORD *)(v114 + 8) || v21 )
        {
          v33 = v99;
          v9 = a5 + 1280;
          v20 = v99 + 8;
        }
        else
        {
          v33 = v99;
          v9 = a5 + 1280;
          v20 = MiSkipEntirePagefileRegions(v40, v38, v99, v20, v114);
          if ( v20 == v99 )
            v20 = v99 + 8;
        }
        goto LABEL_109;
      }
      v41 = v114;
      if ( !v101 )
      {
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter4) )
        {
          v42 = MiSkipFractionalPagefileRegion(v39, v41, (__int64)(v20 - v99) >> 3);
          if ( v42 != v39 )
          {
            v33 = v99;
            v43 = v42 - v39;
            v9 = a5 + 1280;
            BugCheckParameter2 = 0LL;
            v20 = v99 + 8 * (v43 >> 3);
            goto LABEL_109;
          }
        }
      }
      v44 = BugCheckParameter4;
      v20 = v99 + 8;
      v45 = *(_QWORD **)(BugCheckParameter4 + 120);
      if ( (__int64)v45 < 0
        && v38
         - (*(unsigned int *)(BugCheckParameter4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 32) << 32)) > (unsigned __int64)(*v45 - 1LL) >> 12 )
      {
        goto LABEL_107;
      }
      v46 = *(_DWORD *)(BugCheckParameter4 + 48);
      if ( (v46 & 7) != 2 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v41 + 64LL) || (*(_DWORD *)(*(_QWORD *)v41 + 56LL) & 0x2000) != 0 )
        {
          v26 = 4096;
          ValidAweProtection = (unsigned __int8)v46 >> 3;
LABEL_107:
          v9 = a5 + 1280;
LABEL_108:
          v33 = v99;
LABEL_109:
          v34 = 2;
        }
        else
        {
          if ( v13 )
          {
            MiUnlockPageTableInternal(v100, v13);
            v13 = 0LL;
          }
          MiUnlockWorkingSetShared(v100, a3, v25);
          v106 = 1;
          if ( MiPteInShadowRange(v39)
            && (unsigned int)MiPteHasShadow(v53, v52, v25, v22)
            && (v52 & 1) != 0
            && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
          {
            v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v25 )
            {
              v54 = *(_QWORD *)(v25 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
              v25 = v52 | 0x20;
              if ( (v54 & 0x20) == 0 )
                v25 = v52;
              v52 = v25;
              if ( (v54 & 0x42) != 0 )
                v52 = v25 | 0x42;
            }
          }
          if ( v52 )
            ValidAweProtection = (*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F;
          v9 = a5 + 1280;
          v26 = 4096;
          if ( !v52 )
            v26 = 0x2000;
          v55 = *(_BYTE *)(a5 + 1464) & 7;
          if ( v55 < 6u )
          {
            v56 = &dword_1403CCD40;
            if ( v55 != 2 )
              v56 = (LONG *)(a5 + 1472);
            ExAcquireSpinLockShared(v56);
            v34 = 2;
            v33 = v99;
            v27 = 0xFFFFF6FB7DBED000uLL;
            if ( v56[1] )
              _InterlockedExchange(v56 + 1, 0);
            goto LABEL_111;
          }
          KeGetCurrentIrql();
          v34 = 2;
          __writecr8(2uLL);
          v33 = v99;
        }
        v27 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_111;
      }
      v47 = *(__int64 **)(BugCheckParameter4 + 72);
      v48 = 0LL;
      if ( v47 )
      {
        do
        {
          if ( (*((_BYTE *)v47 + 34) & 2) != 0 && (v49 = *v47, (*(_DWORD *)(*v47 + 56) & 0x4000000) != 0) )
          {
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
            SharedProtos = MiGetSharedProtos(v49, SessionId, v47);
            v39 = BugCheckParameter2;
            v48 = *(_QWORD *)(SharedProtos + 72);
          }
          else
          {
            v48 = v47[1];
          }
          if ( v39 >= v48 && v39 < v48 + 8LL * *((unsigned int *)v47 + 11) )
            break;
          v47 = (__int64 *)v47[2];
        }
        while ( v47 );
        v44 = BugCheckParameter4;
      }
      if ( (__int64)(v39 - v48) >> 3 >= (unsigned __int64)(*((_DWORD *)v47 + 11) - (*((_DWORD *)v47 + 13) & 0x3FFFFFFFu)) )
        goto LABEL_107;
      ValidAweProtection = (*(_DWORD *)(v44 + 48) >> 3) & 0x1F;
      if ( ValidAweProtection == 7 )
        ValidAweProtection = (*((unsigned __int16 *)v47 + 16) >> 1) & 0x1F;
      v33 = v99;
      v34 = 2;
      v9 = a5 + 1280;
      v27 = 0xFFFFF6FB7DBED000uLL;
      if ( ValidAweProtection )
        v26 = 4096;
    }
LABEL_111:
    if ( v33 == v120 )
    {
      Process = v26;
      v104 = ValidAweProtection;
      v105 = v26;
      goto LABEL_169;
    }
    Process = v105;
    if ( v26 != v105 || ValidAweProtection != v104 )
      break;
    if ( (__int64)((v33 - v120) & 0xFFFFFFFFFFFFFFF8uLL) >= 256 )
    {
      if ( v13 )
      {
        Process = *(unsigned __int8 *)(v9 + 184);
        LOBYTE(Process) = Process & 7;
        if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (_BYTE)Process )
          {
            if ( (_BYTE)Process == 7 )
            {
              v59 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            }
            else
            {
              v60 = (_BYTE)Process == 5
                  ? CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next
                  : CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
              v59 = v60 == 0LL;
            }
          }
          else
          {
            v59 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
          }
        }
        else if ( (_BYTE)Process && v13 >= v27 && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v9, v13, &v108);
          Process = v108;
          v59 = ((*PageTableLockBuffer >> v108) & 2) == 0;
        }
        else
        {
          v62 = *(_QWORD *)v13;
          if ( v13 >= v27
            && v13 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v62, v25, v22)
            && (v62 & 1) != 0
            && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v63 = *(_QWORD *)(Process + 1544);
            if ( v63 )
            {
              v64 = *(_QWORD *)(v63 + 8 * ((v13 >> 3) & 0x1FF));
              v65 = v62 | 0x20;
              Process = (unsigned __int8)v64;
              LOBYTE(Process) = v64 & 0x20;
              if ( (v64 & 0x20) == 0 )
                v65 = v62;
              v62 = v65;
              if ( (v64 & 0x42) != 0 )
                v62 = v65 | 0x42;
            }
          }
          v59 = ((v62 >> 60) & 2) == 0;
        }
        if ( !v59 )
          goto LABEL_187;
      }
      v66 = &dword_1403CCD40;
      if ( (*(_BYTE *)(v9 + 184) & 7) != 2 )
        v66 = (LONG *)(v9 + 192);
      if ( (*v66 & 0x40000000) != 0 )
      {
LABEL_187:
        v20 = v99 + 8;
        goto LABEL_189;
      }
      if ( a3 < 2u )
      {
        Process = (unsigned __int64)KeGetCurrentPrcb();
        v67 = *(_DWORD *)(Process + 11884);
        v68 = *(_DWORD *)(Process + 22764);
        v69 = *(_DWORD *)(Process + 23452);
        if ( (v67 & 1) != 0 )
        {
          v70 = 1;
          if ( v69 > 7 )
          {
            if ( *(_BYTE *)(Process + 11881) )
            {
              v71 = 1;
              goto LABEL_166;
            }
LABEL_161:
            if ( (v67 & 0x1E) != 0 )
            {
              v71 = 5;
              goto LABEL_166;
            }
            if ( *(_QWORD *)(Process + 8) != *(_QWORD *)(Process + 24) )
            {
              v71 = 6;
              goto LABEL_166;
            }
LABEL_165:
            _disable();
            *(_DWORD *)(Process + 22764) = 0;
            *(_DWORD *)(Process + 23452) = 0;
            KiResetGlobalDpcWatchdogProfiler();
            _enable();
            v71 = 0;
LABEL_166:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
              EtwTraceShouldYieldProcessor(v71, v68, v69);
            if ( v71 )
              goto LABEL_187;
            goto LABEL_169;
          }
        }
        else
        {
          v70 = 0;
          if ( (v67 & 0x1E) != 0 )
          {
            v71 = v34;
            goto LABEL_166;
          }
          if ( *(_BYTE *)(Process + 11881) )
          {
            v71 = 3;
            goto LABEL_166;
          }
          v72 = *(struct _LIST_ENTRY **)(Process + 16);
          if ( v72 && v72 != *(struct _LIST_ENTRY **)(Process + 8) )
          {
            v71 = 4;
            goto LABEL_166;
          }
        }
        if ( v68 <= 7 )
          goto LABEL_169;
        if ( !v70 )
          goto LABEL_165;
        goto LABEL_161;
      }
    }
LABEL_169:
    if ( v106 )
      goto LABEL_189;
    v22 = v99 + 8;
    v99 = v22;
    if ( v20 != v22 || v20 > v115 )
      goto LABEL_189;
    v21 = v101;
    if ( v101 )
    {
      v73 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v73, 0xFFFFF6FB7DBED000uLL, v22)
        && (v73 & 1) != 0
        && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
      {
        v74 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v74 )
        {
          v75 = *(_QWORD *)(v74 + 8 * ((v22 >> 3) & 0x1FF));
          v76 = v73 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v76 = v73;
          v73 = v76;
          if ( (v75 & 0x42) != 0 )
            v73 = v76 | 0x42;
        }
      }
      v102 = v73;
    }
    v9 = a5 + 1280;
    v8 = (__int64)((v22 << 25) - v111) >> 16;
    v20 += 8LL;
  }
  v26 = v105;
  ValidAweProtection = v104;
  v20 = v33;
LABEL_189:
  if ( v13 )
  {
    v78 = *(unsigned __int8 *)(a5 + 1464);
    LOBYTE(v78) = v78 & 7;
    if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v79 = KeGetCurrentPrcb();
      if ( (_BYTE)v78 )
      {
        if ( (_BYTE)v78 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v79->SelfmapLockHandle[1]);
        }
        else
        {
          v59 = (_BYTE)v78 == 5;
          SelfmapLockHandle = v79->SelfmapLockHandle;
          if ( !v59 )
            SelfmapLockHandle = &v79->SelfmapLockHandle[3];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v79->SelfmapLockHandle[2]);
      }
    }
    else if ( (_BYTE)v78 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v81 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v100, v13, &v109);
      v82 = ~(3 << v109);
      v84 = *v81;
      v83 = _InterlockedCompareExchange(v81, *v81 & v82, *v81);
      if ( v84 != v83 )
      {
        do
        {
          v85 = v83;
          v83 = _InterlockedCompareExchange(v81, v83 & v82, v83);
        }
        while ( v83 != v85 );
      }
    }
    else
    {
      v86 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v78, v86, 0xFFFFF6FB7DBED000uLL, v22)
        && (v86 & 1) != 0
        && ((v86 & 0x20) == 0 || (v86 & 0x42) == 0) )
      {
        v87 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v87 )
        {
          v88 = *(_QWORD *)(v87 + 8 * ((v13 >> 3) & 0x1FF));
          v89 = v86 | 0x20;
          if ( (v88 & 0x20) == 0 )
            v89 = v86;
          v86 = v89;
          if ( (v88 & 0x42) != 0 )
            v86 = v89 | 0x42;
        }
      }
      v90 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v86 & 0xCFFFFFFFFFFFFFFFuLL, v86);
      if ( v86 != v90 )
      {
        do
        {
          v91 = v90;
          v90 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v90 & 0xCFFFFFFFFFFFFFFFuLL, v90);
        }
        while ( v90 != v91 );
      }
    }
  }
  *v116 = (__int64)((v20 << 25) - v111) >> 16;
  *v117 = ValidAweProtection;
  return v26;
}
