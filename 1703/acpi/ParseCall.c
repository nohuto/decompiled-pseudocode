/*
 * XREFs of ParseCall @ 0x1C0014BC0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PerformNativeMethodCall @ 0x1C005BDF8 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C005D800 (MoveObjData.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // eax
  bool v10; // zf
  void *v11; // rax
  void *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rdx
  char v21; // al
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  _BYTE *v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  KIRQL v32; // al
  __int64 v33; // rbx
  struct _EX_RUNDOWN_REF *v34; // rbx
  struct _EX_RUNDOWN_REF *v35; // rbx
  unsigned __int64 Count; // r9
  struct _EX_RUNDOWN_REF *v37; // rax
  struct _EX_RUNDOWN_REF *i; // r8
  struct _EX_RUNDOWN_REF **v39; // rcx
  struct _EX_RUNDOWN_REF *v40; // rdx
  __int64 v41; // r10
  struct _EX_RUNDOWN_REF *v42; // rax
  struct _EX_RUNDOWN_REF *v43; // r10
  struct _EX_RUNDOWN_REF *v44; // rbx
  unsigned __int64 v45; // rcx
  struct _EX_RUNDOWN_REF **v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  unsigned int *v50; // rbx
  __int64 v51; // r9
  unsigned int *v52; // rax
  unsigned int *j; // r8
  __int64 **v54; // rcx
  __int64 *v55; // rdx
  __int64 v56; // r10
  unsigned int *v57; // rax
  unsigned int *v58; // r10
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rsi
  __int64 v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned int v73; // ecx
  _QWORD *v74; // r10
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 Ptr_high; // rcx
  int v78; // ecx
  _QWORD *v79; // r10
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  struct _EX_RUNDOWN_REF **v85; // rax
  __int64 *v86; // rcx
  __int64 **v87; // rax
  _DWORD v88[8]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v89; // [rsp+50h] [rbp-128h]
  __int128 v90; // [rsp+58h] [rbp-120h]
  _BYTE v91[40]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v92[48]; // [rsp+90h] [rbp-E8h] BYREF
  struct _KTIMER Timer; // [rsp+C0h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+100h] [rbp-78h] BYREF
  __int64 v95; // [rsp+188h] [rbp+10h]

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = 0LL;
  if ( v6 != 5 )
  {
    switch ( v6 )
    {
      case 0:
        ++*(_DWORD *)(a2 + 16);
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("(");
        goto LABEL_68;
      case 1:
        goto LABEL_68;
      case 2:
        goto LABEL_7;
      case 3:
        goto LABEL_9;
      case 4:
        goto LABEL_19;
      case 6:
        goto LABEL_53;
      default:
        return v3;
    }
    do
    {
LABEL_68:
      if ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) )
      {
        while ( 1 )
        {
          if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 56) )
            ConPrintf(",");
          v64 = *(unsigned int *)(a2 + 56);
          v65 = *(_QWORD *)(a2 + 64) + 40 * v64;
          v66 = v64 + 1;
          LOBYTE(v64) = 67;
          *(_DWORD *)(a2 + 56) = v66;
          v3 = ParseArg(a1, v64, v65, 0LL);
          if ( v3 || a2 != a1[52] )
            return v3;
          if ( *(_DWORD *)(a2 + 56) >= *(_DWORD *)(a2 + 60) )
            goto LABEL_73;
        }
      }
      if ( v3 )
        return v3;
LABEL_73:
      if ( a2 != a1[52] )
        return v3;
    }
    while ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_7:
    ++*(_DWORD *)(a2 + 16);
    if ( !v8 )
    {
      v3 = -1072431101;
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(a1, 3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
    {
      v3 = 0;
      v63 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x40u);
      if ( v63 )
      {
        *(_QWORD *)(v63 + 8) = a1[52];
        a1[52] = v63;
        *(_DWORD *)v63 = 1179730753;
        *(_QWORD *)(v63 + 24) = ParseAcquire;
        *(_QWORD *)(v63 + 32) = v8;
        *(_WORD *)(v63 + 40) = -1;
        *(_QWORD *)(v63 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_114;
    }
LABEL_9:
    v9 = *(_DWORD *)(a2 + 16) + 1;
    v10 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v9;
    if ( v10 && (v9 & 0x80000) != 0 )
    {
      *(_QWORD *)(a2 + 32) = a1[12];
      a1[12] = a2;
      *(_DWORD *)(a2 + 16) |= 0x40000u;
      v3 = PerformNativeMethodCall(0LL, a1, a2);
      if ( v3 == 32772 )
        return v3;
    }
    else
    {
      if ( (v9 & 0x10000) != 0 )
        *(_DWORD *)(a2 + 16) = v9 | 0x20000;
      v11 = (void *)HeapAlloc(a1[40], 1314344776, 0x40u);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, 0x40uLL);
        *((_DWORD *)v12 + 4) = 1380865871;
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)v12 + 4);
        KeInitializeSpinLock((PKSPIN_LOCK)v12 + 5);
        byte_1C00779A0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
        v13 = off_1C0074368;
        if ( *off_1C0074368 != (_UNKNOWN *)&glistObjOwners )
          __fastfail(3u);
        *(_QWORD *)v12 = &glistObjOwners;
        *((_QWORD *)v12 + 1) = v13;
        *v13 = v12;
        off_1C0074368 = (_UNKNOWN **)v12;
        KeReleaseSpinLock(&gmutOwnerList, byte_1C00779A0);
        *(_QWORD *)(a2 + 40) = a1[11];
        v3 = 0;
        v14 = a1[12];
        a1[11] = v12;
        *(_QWORD *)(a2 + 32) = v14;
        a1[12] = a2;
        *(_DWORD *)(a2 + 16) |= 0x40000u;
        v15 = *(_QWORD *)(a2 + 392);
        v16 = *(_QWORD *)(a2 + 48);
        v17 = a1[40];
        v95 = a1[15];
        v18 = *(_QWORD *)(v16 + 96) + *(unsigned int *)(v16 + 88);
        v19 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x50u);
        v20 = (_QWORD *)v19;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 8) = a1[52];
          a1[52] = v19;
          *(_DWORD *)v19 = 1347371859;
          *(_QWORD *)(v19 + 24) = ParseScope;
          a1[15] = v8 + 194;
          *(_QWORD *)(v19 + 32) = v18;
          *(_QWORD *)(v19 + 40) = v95;
          *(_QWORD *)(v19 + 48) = a1[10];
          v21 = gdwfAMLI;
          a1[10] = v16;
          if ( (v21 & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 112));
          v20[7] = a1[11];
          v22 = a1[40];
          a1[11] = v12;
          v20[8] = v22;
          a1[40] = v17;
          v20[9] = v15;
          return v3;
        }
LABEL_114:
        v3 = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return v3;
      }
      v3 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(113, 0, 0, 0, 0LL);
    }
LABEL_19:
    v23 = *(_DWORD *)(a2 + 16) + 1;
    v10 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v23;
    if ( v10 && (v23 & 0x80000) != 0 )
      v3 = PerformNativeMethodCall(1LL, a1, a2);
  }
  ++*(_DWORD *)(a2 + 16);
  v24 = 0;
  v25 = *(_DWORD *)(a2 + 16);
  if ( v3 != 32770 )
    v24 = v3;
  v3 = v24;
  if ( *(_DWORD *)a2 == 1280065859 && (v25 & 0x80000) != 0 )
  {
    if ( (v25 & 0x40000) == 0 )
      goto LABEL_47;
    DupObjData(a1[40], v91, *(_QWORD *)(a2 + 392));
    PerformNativeMethodCall(2LL, a1, a2);
    MoveObjData(*(_QWORD *)(a2 + 392), v91);
LABEL_46:
    a1[11] = *(_QWORD *)(a2 + 40);
    a1[12] = *(_QWORD *)(a2 + 32);
    goto LABEL_47;
  }
  v26 = *(_BYTE **)(a2 + 392);
  if ( (*v26 & 1) != 0 )
  {
    DupObjData(a1[40], v92, v26);
    FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
    MoveObjData(*(_QWORD *)(a2 + 392), v92);
  }
  v27 = a2 + 72;
  v28 = 8LL;
  do
  {
    if ( (*(_BYTE *)v27 & 1) != 0 )
    {
      v82 = *(_QWORD *)(v27 + 8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v82 & 8) != 0 )
        FreeData((_QWORD *)v82);
    }
    else if ( *(_QWORD *)(v27 + 32) )
    {
      if ( *(int *)(v27 + 8) > 0 )
      {
        *(_WORD *)v27 |= 8u;
      }
      else
      {
        if ( *(_WORD *)(v27 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v27 + 32) + 8LL, **(unsigned int **)(v27 + 32));
        FreeObjData(v27);
      }
    }
    *(_QWORD *)v27 = 0LL;
    *(_QWORD *)(v27 + 8) = 0LL;
    *(_QWORD *)(v27 + 16) = 0LL;
    *(_QWORD *)(v27 + 24) = 0LL;
    *(_QWORD *)(v27 + 32) = 0LL;
    v27 += 40LL;
    --v28;
  }
  while ( v28 );
  if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
  {
    v29 = (_QWORD *)a1[11];
    byte_1C00779A0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v30 = *v29;
    v31 = (_QWORD *)v29[1];
    if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v31 != v29 )
      __fastfail(3u);
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C00779A0);
    v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v33 = v29[3];
    if ( v33 )
    {
      do
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
        v70 = *(_QWORD *)(v33 + 56);
        if ( (gdwfAMLI & 4) != 0 )
          AMLIDereferenceHandleEx((volatile signed __int32 *)(v33 + 120), 0LL);
        else
          FreeNameSpaceObjects(v33);
        v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v33 = v70;
      }
      while ( v70 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
    v34 = (struct _EX_RUNDOWN_REF *)a1[11];
    if ( (gdwfAMLI & 4) != 0 )
    {
      KeInitializeTimer(&Timer);
      KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v34);
      KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
      ExWaitForRundownProtectionRelease(v34 + 4);
      KeCancelTimer(&Timer);
      HeapFree(v34);
    }
    else
    {
      v35 = v34 - 2;
      LODWORD(v35->Count) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      Count = v35[1].Count;
      v37 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
      for ( i = (struct _EX_RUNDOWN_REF *)(Count + 40); v37 != i; v37 = (struct _EX_RUNDOWN_REF *)v37->Count )
      {
        if ( &v35[2] < v37 )
          break;
      }
      v39 = (struct _EX_RUNDOWN_REF **)v37[1].Count;
      v40 = v35 + 2;
      if ( *v39 != v37 )
        __fastfail(3u);
      v40->Count = (unsigned __int64)v37;
      v35[3].Count = (unsigned __int64)v39;
      *v39 = v40;
      v37[1].Count = (unsigned __int64)v40;
      v41 = v40->Count - 16;
      if ( (struct _EX_RUNDOWN_REF *)v40->Count != i )
      {
        Ptr_high = HIDWORD(v35->Ptr);
        if ( (struct _EX_RUNDOWN_REF *)v41 == (struct _EX_RUNDOWN_REF *)((char *)v35 + Ptr_high) )
        {
          v78 = *(_DWORD *)(v41 + 4) + Ptr_high;
          v79 = (_QWORD *)v40->Count;
          HIDWORD(v35->Ptr) = v78;
          v80 = *v79;
          v81 = (_QWORD *)v79[1];
          if ( *(_QWORD **)(*v79 + 8LL) != v79 || (_QWORD *)*v81 != v79 )
            __fastfail(3u);
          *v81 = v80;
          *(_QWORD *)(v80 + 8) = v81;
        }
      }
      v42 = (struct _EX_RUNDOWN_REF *)v35[3].Count;
      v43 = v42 - 2;
      if ( v42 != i )
      {
        v83 = HIDWORD(v43->Ptr);
        if ( v35 == (struct _EX_RUNDOWN_REF *)((char *)v43 + v83) )
        {
          HIDWORD(v43->Ptr) = HIDWORD(v35->Ptr) + v83;
          v84 = v40->Count;
          v85 = (struct _EX_RUNDOWN_REF **)v35[3].Count;
          if ( *(struct _EX_RUNDOWN_REF **)(v40->Count + 8) != v40 || *v85 != v40 )
            __fastfail(3u);
          *v85 = (struct _EX_RUNDOWN_REF *)v84;
          v35 = v43;
          *(_QWORD *)(v84 + 8) = v85;
        }
      }
      if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v35 + HIDWORD(v35->Ptr) )
      {
        *(_QWORD *)(Count + 32) = v35;
        v44 = v35 + 2;
        v45 = v44->Count;
        v46 = (struct _EX_RUNDOWN_REF **)v44[1].Count;
        if ( *(struct _EX_RUNDOWN_REF **)(v44->Count + 8) != v44 || *v46 != v44 )
          __fastfail(3u);
        *v46 = (struct _EX_RUNDOWN_REF *)v45;
        *(_QWORD *)(v45 + 8) = v46;
      }
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    goto LABEL_46;
  }
  if ( !*(_QWORD *)(a2 + 48) )
    goto LABEL_46;
LABEL_47:
  v47 = *(_QWORD *)(a2 + 48);
  if ( v47 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v47 + 64) |= 4u;
      if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v47);
    }
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  v48 = *(_QWORD **)(a2 + 64);
  if ( v48 )
  {
    v67 = *(_DWORD *)(a2 + 60);
    if ( v67 )
    {
      v68 = v67;
      do
      {
        FreeData(v48);
        v48 += 5;
        --v68;
      }
      while ( v68 );
    }
    v69 = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(v69 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v69 - 8), v69 - 16);
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
  {
    v89 = v8;
    v88[0] = 1179403602;
    v88[4] = 393216;
    v90 = 0LL;
    ParseRelease(a1, v88, 0LL);
  }
LABEL_53:
  v49 = a1[52];
  v50 = (unsigned int *)(v49 - 16);
  a1[52] = *(_QWORD *)(v49 + 8);
  *(_DWORD *)(v49 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v51 = *((_QWORD *)v50 + 1);
  v52 = *(unsigned int **)(v51 + 40);
  for ( j = (unsigned int *)(v51 + 40); v52 != j; v52 = *(unsigned int **)v52 )
  {
    if ( v50 + 4 < v52 )
      break;
  }
  v54 = (__int64 **)*((_QWORD *)v52 + 1);
  v55 = (__int64 *)(v50 + 4);
  if ( *v54 != (__int64 *)v52 )
    __fastfail(3u);
  *v55 = (__int64)v52;
  *((_QWORD *)v50 + 3) = v54;
  *v54 = v55;
  *((_QWORD *)v52 + 1) = v55;
  v56 = *v55 - 16;
  if ( (unsigned int *)*v55 != j )
  {
    v72 = v50[1];
    if ( (unsigned int *)v56 == (unsigned int *)((char *)v50 + v72) )
    {
      v73 = *(_DWORD *)(v56 + 4) + v72;
      v74 = (_QWORD *)*v55;
      v50[1] = v73;
      v75 = *v74;
      v76 = (_QWORD *)v74[1];
      if ( *(_QWORD **)(*v74 + 8LL) != v74 || (_QWORD *)*v76 != v74 )
        __fastfail(3u);
      *v76 = v75;
      *(_QWORD *)(v75 + 8) = v76;
    }
  }
  v57 = (unsigned int *)*((_QWORD *)v50 + 3);
  v58 = v57 - 4;
  if ( v57 != j )
  {
    v71 = v58[1];
    if ( v50 == (unsigned int *)((char *)v58 + v71) )
    {
      v58[1] = v50[1] + v71;
      v86 = (__int64 *)*v55;
      v87 = (__int64 **)*((_QWORD *)v50 + 3);
      if ( *(__int64 **)(*v55 + 8) != v55 || *v87 != v55 )
        __fastfail(3u);
      *v87 = v86;
      v50 = v58;
      v86[1] = (__int64)v87;
    }
  }
  if ( *(_QWORD *)(v51 + 32) <= (unsigned __int64)v50 + v50[1] )
  {
    *(_QWORD *)(v51 + 32) = v50;
    v59 = v50 + 4;
    v60 = *v59;
    v61 = (_QWORD *)v59[1];
    if ( *(_QWORD **)(*v59 + 8LL) != v59 || (_QWORD *)*v61 != v59 )
      __fastfail(3u);
    *v61 = v60;
    *(_QWORD *)(v60 + 8) = v61;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v3;
}
