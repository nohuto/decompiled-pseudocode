/*
 * XREFs of ParseCall @ 0x1C000B660
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     ParseArg @ 0x1C0019DE4 (ParseArg.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     PerformNativeMethodCall @ 0x1C005C910 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C005D600 (MoveObjData.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
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
  struct _EX_RUNDOWN_REF *v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rbx
  unsigned __int64 v43; // rcx
  struct _EX_RUNDOWN_REF **v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 *v48; // rbx
  __int64 v49; // r9
  __int64 *v50; // rax
  __int64 *j; // r8
  __int64 **v52; // rcx
  __int64 *v53; // rdx
  __int64 *v54; // rax
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rsi
  __int64 Ptr_high; // rcx
  __int64 v68; // r10
  unsigned __int64 v69; // rax
  __int64 v70; // r10
  _QWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r10
  _QWORD *v74; // rax
  __int64 v75; // r10
  _QWORD *v76; // rcx
  __int64 v77; // rcx
  __int64 *v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rcx
  struct _EX_RUNDOWN_REF *v81; // r8
  unsigned __int64 v82; // rcx
  struct _EX_RUNDOWN_REF **v83; // rax
  __int64 *v84; // rcx
  __int64 **v85; // rax
  _DWORD v86[8]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v87; // [rsp+50h] [rbp-128h]
  __int128 v88; // [rsp+58h] [rbp-120h]
  _BYTE v89[40]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v90[48]; // [rsp+90h] [rbp-E8h] BYREF
  struct _KTIMER Timer; // [rsp+C0h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+100h] [rbp-78h] BYREF
  __int64 v93; // [rsp+188h] [rbp+10h]

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
          v60 = *(unsigned int *)(a2 + 56);
          v61 = *(_QWORD *)(a2 + 64) + 40 * v60;
          v62 = v60 + 1;
          LOBYTE(v60) = 67;
          *(_DWORD *)(a2 + 56) = v62;
          v3 = ParseArg(a1, v60, v61, 0LL);
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
      v59 = HeapAlloc((__int64)(a1 + 60), 1297237576, 0x40u);
      if ( v59 )
      {
        v3 = 0;
        *(_QWORD *)(v59 + 8) = a1[52];
        a1[52] = v59;
        *(_DWORD *)v59 = 1179730753;
        *(_QWORD *)(v59 + 24) = ParseAcquire;
        *(_QWORD *)(v59 + 32) = v8;
        *(_WORD *)(v59 + 40) = -1;
        *(_QWORD *)(v59 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_113;
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
        byte_1C0079CF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
        v13 = off_1C00763B0;
        if ( *off_1C00763B0 != (_UNKNOWN *)&glistObjOwners )
          __fastfail(3u);
        *(_QWORD *)v12 = &glistObjOwners;
        *((_QWORD *)v12 + 1) = v13;
        *v13 = v12;
        off_1C00763B0 = (_UNKNOWN **)v12;
        KeReleaseSpinLock(&gmutOwnerList, byte_1C0079CF0);
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
        v93 = a1[15];
        v18 = *(_QWORD *)(v16 + 96) + *(unsigned int *)(v16 + 88);
        v19 = HeapAlloc((__int64)(a1 + 60), 1297237576, 0x50u);
        v20 = (_QWORD *)v19;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 8) = a1[52];
          a1[52] = v19;
          *(_DWORD *)v19 = 1347371859;
          *(_QWORD *)(v19 + 24) = ParseScope;
          a1[15] = v8 + 194;
          *(_QWORD *)(v19 + 32) = v18;
          *(_QWORD *)(v19 + 40) = v93;
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
LABEL_113:
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
    DupObjData(a1[40], (__int64)v89, *(_QWORD *)(a2 + 392));
    PerformNativeMethodCall(2LL, a1, a2);
    MoveObjData(*(_QWORD *)(a2 + 392), v89);
LABEL_46:
    a1[11] = *(_QWORD *)(a2 + 40);
    a1[12] = *(_QWORD *)(a2 + 32);
    goto LABEL_47;
  }
  v26 = *(_BYTE **)(a2 + 392);
  if ( (*v26 & 1) != 0 )
  {
    DupObjData(a1[40], (__int64)v90, (__int64)v26);
    FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
    MoveObjData(*(_QWORD *)(a2 + 392), v90);
  }
  v27 = a2 + 72;
  v28 = 8LL;
  do
  {
    if ( (*(_BYTE *)v27 & 1) != 0 )
    {
      v79 = *(_QWORD *)(v27 + 8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v79 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v79 & 8) != 0 )
        FreeData(v79);
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
    byte_1C0079CF0 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v30 = *v29;
    if ( *(_QWORD **)(*v29 + 8LL) != v29 || (v31 = (_QWORD *)v29[1], (_QWORD *)*v31 != v29) )
      __fastfail(3u);
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0079CF0);
    v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v33 = v29[3];
    if ( v33 )
    {
      do
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
        v66 = *(_QWORD *)(v33 + 56);
        if ( (gdwfAMLI & 4) != 0 )
          AMLIDereferenceHandleEx(v33 + 120);
        else
          FreeNameSpaceObjects(v33);
        v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v33 = v66;
      }
      while ( v66 );
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
      if ( (struct _EX_RUNDOWN_REF *)v40->Count != i )
      {
        Ptr_high = HIDWORD(v35->Ptr);
        v68 = v40->Count - 16;
        if ( (struct _EX_RUNDOWN_REF *)v68 == (struct _EX_RUNDOWN_REF *)((char *)v35 + Ptr_high) )
        {
          v69 = v40->Count;
          HIDWORD(v35->Ptr) = *(_DWORD *)(v68 + 4) + Ptr_high;
          v70 = *(_QWORD *)(v68 + 16);
          if ( *(_QWORD *)(v70 + 8) != v69 || (v71 = *(_QWORD **)(v69 + 8), *v71 != v69) )
            __fastfail(3u);
          *v71 = v70;
          *(_QWORD *)(v70 + 8) = v71;
        }
      }
      v41 = (struct _EX_RUNDOWN_REF *)v35[3].Count;
      if ( v41 != i )
      {
        v80 = HIDWORD(v41[-2].Ptr);
        v81 = v41 - 2;
        if ( v35 == (struct _EX_RUNDOWN_REF *)((char *)&v41[-2] + v80) )
        {
          HIDWORD(v81->Ptr) = HIDWORD(v35->Ptr) + v80;
          v82 = v40->Count;
          if ( *(struct _EX_RUNDOWN_REF **)(v40->Count + 8) != v40
            || (v83 = (struct _EX_RUNDOWN_REF **)v35[3].Count, *v83 != v40) )
          {
            __fastfail(3u);
          }
          *v83 = (struct _EX_RUNDOWN_REF *)v82;
          v35 = v81;
          *(_QWORD *)(v82 + 8) = v83;
        }
      }
      if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v35 + HIDWORD(v35->Ptr) )
      {
        *(_QWORD *)(Count + 32) = v35;
        v42 = v35 + 2;
        v43 = v42->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(v42->Count + 8) != v42
          || (v44 = (struct _EX_RUNDOWN_REF **)v42[1].Count, *v44 != v42) )
        {
          __fastfail(3u);
        }
        *v44 = (struct _EX_RUNDOWN_REF *)v43;
        *(_QWORD *)(v43 + 8) = v44;
      }
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    goto LABEL_46;
  }
  if ( !*(_QWORD *)(a2 + 48) )
    goto LABEL_46;
LABEL_47:
  v45 = *(_QWORD *)(a2 + 48);
  if ( v45 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v45 + 64) |= 4u;
      if ( (*(_WORD *)(v45 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v45);
    }
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  v46 = *(_QWORD *)(a2 + 64);
  if ( v46 )
  {
    v63 = *(_DWORD *)(a2 + 60);
    if ( v63 )
    {
      v64 = v63;
      do
      {
        FreeData(v46);
        v46 += 40LL;
        --v64;
      }
      while ( v64 );
    }
    v65 = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(v65 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v65 - 8), v65 - 16);
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
  {
    v87 = v8;
    v86[0] = 1179403602;
    v86[4] = 393216;
    v88 = 0LL;
    ParseRelease(a1, v86, 0LL);
  }
LABEL_53:
  v47 = a1[52];
  v48 = (_QWORD *)(v47 - 16);
  a1[52] = *(_QWORD *)(v47 + 8);
  *(_DWORD *)(v47 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v49 = v48[1];
  v50 = *(__int64 **)(v49 + 40);
  for ( j = (__int64 *)(v49 + 40); v50 != j; v50 = (__int64 *)*v50 )
  {
    if ( v48 + 2 < v50 )
      break;
  }
  v52 = (__int64 **)v50[1];
  v53 = v48 + 2;
  if ( *v52 != v50 )
    __fastfail(3u);
  *v53 = (__int64)v50;
  v48[3] = v52;
  *v52 = v53;
  v50[1] = (__int64)v53;
  if ( (__int64 *)*v53 != j )
  {
    v72 = *((unsigned int *)v48 + 1);
    v73 = *v53 - 16;
    if ( (_QWORD *)v73 == (_QWORD *)((char *)v48 + v72) )
    {
      v74 = (_QWORD *)*v53;
      *((_DWORD *)v48 + 1) = *(_DWORD *)(v73 + 4) + v72;
      v75 = *(_QWORD *)(v73 + 16);
      if ( *(_QWORD **)(v75 + 8) != v74 || (v76 = (_QWORD *)v74[1], (_QWORD *)*v76 != v74) )
        __fastfail(3u);
      *v76 = v75;
      *(_QWORD *)(v75 + 8) = v76;
    }
  }
  v54 = (__int64 *)v48[3];
  if ( v54 != j )
  {
    v77 = *((unsigned int *)v54 - 3);
    v78 = v54 - 2;
    if ( v48 == (__int64 *)((char *)v54 + v77 - 16) )
    {
      *((_DWORD *)v78 + 1) = *((_DWORD *)v48 + 1) + v77;
      v84 = (__int64 *)*v53;
      if ( *(__int64 **)(*v53 + 8) != v53 || (v85 = (__int64 **)v48[3], *v85 != v53) )
        __fastfail(3u);
      *v85 = v84;
      v48 = v78;
      v84[1] = (__int64)v85;
    }
  }
  if ( *(_QWORD *)(v49 + 32) <= (unsigned __int64)v48 + *((unsigned int *)v48 + 1) )
  {
    *(_QWORD *)(v49 + 32) = v48;
    v55 = v48 + 2;
    v56 = *v55;
    if ( *(_QWORD **)(*v55 + 8LL) != v55 || (v57 = (_QWORD *)v55[1], (_QWORD *)*v57 != v55) )
      __fastfail(3u);
    *v57 = v56;
    *(_QWORD *)(v56 + 8) = v57;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v3;
}
