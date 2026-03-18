/*
 * XREFs of AsyncEvalObject @ 0x1C00081E0
 * Callers:
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C000C0B0 (GetObjectPathNoLock.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     PushPost @ 0x1C0018BF8 (PushPost.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     OSQueueWorkItem @ 0x1C005B504 (OSQueueWorkItem.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D1DC (AMLIReadNamespaceOverrideObject.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        _SLIST_ENTRY *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rdi
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // r9
  __int64 v11; // r8
  __int64 CurrentIrql; // r10
  __int64 v13; // rdx
  PSLIST_ENTRY v14; // r12
  KIRQL v15; // al
  int v16; // edx
  char *v17; // rax
  size_t v18; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  KIRQL v20; // al
  struct _SLIST_ENTRY **v21; // rcx
  struct _SLIST_ENTRY *v22; // rax
  __int16 v23; // ax
  char v24; // al
  char v25; // al
  __int64 v26; // rsi
  KIRQL v27; // r15
  _QWORD *v28; // r14
  __int64 v29; // rdi
  __int64 ObjectPathNoLock; // rax
  void *v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  _BYTE *v38; // rdx
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // r8d
  __int64 v43; // rdx
  _BYTE *v44; // rax
  __int64 v45; // r9
  _BYTE *v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  const char *v49; // r9
  char v50; // al
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // r8d
  __int64 v54; // rdx
  _BYTE *v55; // rax
  __int64 v56; // r9
  _BYTE *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r10
  char v61; // al
  int v62; // edi
  __int64 i; // rax
  unsigned __int16 *v64; // rsi
  _BYTE *v65; // rax
  __int64 v66; // rcx
  _SLIST_ENTRY *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r9
  char *v70; // r8
  __int16 v71; // cx
  _SLIST_ENTRY *Next; // rcx
  __int64 v73; // rax
  __int16 v74; // dx
  _SLIST_ENTRY *v75; // r14
  __int64 v76; // r15
  _SLIST_ENTRY *v77; // r8
  __int64 v78; // rbx
  PSLIST_ENTRY v79; // rcx
  struct _SLIST_ENTRY *v80; // rsi
  unsigned int Field; // edi
  __int64 v82; // rax
  __int16 v83; // ax
  __int64 v84; // rax
  __int64 v85; // r8
  struct _KTHREAD *v86; // r11
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rdx
  bool v95; // zf
  int v96; // eax
  _SLIST_ENTRY *v97; // rbx
  unsigned int v98; // esi
  KIRQL v99; // al
  _SLIST_ENTRY *v100; // rcx
  __int64 v101; // r14
  void *v102; // rax
  char v103; // al
  _BYTE *v104; // rax
  unsigned __int16 v105; // bx
  ULONG TimeIncrement; // eax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  unsigned __int16 v109; // ax
  unsigned __int16 v110; // ax
  void *ObjectPath; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v114; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v115; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v116; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v117; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v118; // [rsp+50h] [rbp-B0h]
  __int64 v119; // [rsp+58h] [rbp-A8h]
  __int64 v120; // [rsp+60h] [rbp-A0h]
  __int64 v121; // [rsp+68h] [rbp-98h]
  _QWORD v122[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+80h] [rbp-80h] BYREF
  _SLIST_ENTRY *v124; // [rsp+90h] [rbp-70h]
  int v125; // [rsp+98h] [rbp-68h]
  int v126; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v127; // [rsp+A0h] [rbp-60h]
  __int64 v128; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  _SLIST_ENTRY *v130; // [rsp+C0h] [rbp-40h]
  int v131; // [rsp+C8h] [rbp-38h]
  int v132; // [rsp+CCh] [rbp-34h]
  __int16 *v133; // [rsp+D0h] [rbp-30h]
  __int64 v134; // [rsp+D8h] [rbp-28h]
  __int64 *v135; // [rsp+E0h] [rbp-20h]
  __int64 v136; // [rsp+E8h] [rbp-18h]

  v121 = a4;
  v7 = 0LL;
  v118 = a3;
  v9 = a1;
  CurrentThread = KeGetCurrentThread();
  v11 = (unsigned int)gReadyQueue;
  CurrentIrql = KeGetCurrentIrql();
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v13 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u) % (unsigned int)qword_1C0079788);
    *(_QWORD *)((char *)P + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v13) = 1095981390;
    *(_QWORD *)((char *)P + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)P + v13 + 24) = 0LL;
    *(_QWORD *)((char *)P + v13 + 32) = 0LL;
    *(_QWORD *)((char *)P + v13 + 40) = v11;
    *(_QWORD *)((char *)P + v13 + 48) = CurrentIrql;
    *(_QWORD *)((char *)P + v13 + 56) = a1;
    *(_QWORD *)((char *)P + v13 + 64) = 0LL;
  }
  ++dword_1C0079C54;
  v14 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v14 )
  {
    ++dword_1C0079C58;
    v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0079C70)(
                          (unsigned int)dword_1C0079C64,
                          (unsigned int)dword_1C0079C6C,
                          (unsigned int)dword_1C0079C68);
    if ( !v14 )
      return (unsigned int)-1073741670;
  }
  memset(v14, 0, 0x238uLL);
  v15 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v16 = gdwcCTObjs + 1;
  gdwcCTObjs = v16;
  if ( v16 > 0 && v16 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v16;
  KeReleaseSpinLock(&gdwGContextSpinLock, v15);
  memset(v14, 0, 0x1E0uLL);
  v17 = (char *)v14 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v14->Next) = 1415074883;
  *((_QWORD *)&v14->Next + 1) = v17;
  v14[20].Next = v14 + 30;
  KeInitializeDpc((PRKDPC)&v14[16], TimeoutCallback, v14);
  KeInitializeTimer((PKTIMER)&v14[12]);
  v18 = (unsigned int)(*((_DWORD *)&v14->Next + 2) - (_DWORD)v14 - 480);
  memset(&v14[30], 0, v18);
  LODWORD(v14[30].Next) = 1346454856;
  *((_QWORD *)&v14[30].Next + 1) = (char *)v14 + v18 + 480;
  v14[32].Next = (PSLIST_ENTRY)((char *)v14 + 536);
  v14[33].Next = (PSLIST_ENTRY)((char *)v14 + 520);
  *((_QWORD *)&v14[32].Next + 1) = (char *)v14 + 520;
  *((_QWORD *)&v14[23].Next + 1) = RestartCtxtPassive;
  v14[24].Next = v14;
  *((_QWORD *)&v14[22].Next + 1) = 0LL;
  v14[25].Next = (PSLIST_ENTRY)((char *)v14 + 392);
  *((_QWORD *)&v14[24].Next + 1) = (char *)v14 + 392;
  *((_QWORD *)&v14[3].Next + 1) = v14 + 3;
  v14[3].Next = v14 + 3;
  *((_QWORD *)&v14[2].Next + 1) = v14 + 2;
  v14[2].Next = v14 + 2;
  v14[31].Next = v14 + 30;
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x646C6D61u);
  v14[29].Next = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA8uLL);
    v14[29].Next->Next = v14;
    LODWORD(v14[29].Next[1].Next) = AmliWatchdogAction;
    *((_QWORD *)&v14[28].Next + 1) = MEMORY[0xFFFFF78000000008];
    *((_BYTE *)&v14[29].Next + 8) = 0;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v21 = (struct _SLIST_ENTRY **)off_1C0076380;
  byte_1C0079CC8 = v20;
  v22 = v14 + 1;
  if ( *off_1C0076380 != (_UNKNOWN *)&glistCtxtHead )
    __fastfail(3u);
  *((_QWORD *)&v14[1].Next + 1) = off_1C0076380;
  v22->Next = (_SLIST_ENTRY *)&glistCtxtHead;
  *v21 = v22;
  off_1C0076380 = (_UNKNOWN **)&v14[1];
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0079CC8);
  v23 = *(_WORD *)(v9 + 64);
  if ( (v23 & 0x400) != 0 )
  {
    v7 = *(_QWORD *)(v9 + 136);
  }
  else if ( (v23 & 0x200) != 0 )
  {
    v7 = v9;
  }
  v24 = gdwfAMLI;
  *((_QWORD *)&v14[4].Next + 1) = v9;
  if ( (v24 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
  v25 = gdwfAMLI;
  v14[5].Next = (_SLIST_ENTRY *)v9;
  if ( (v25 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
  if ( v7 )
  {
    v103 = gdwfAMLI;
    *((_QWORD *)&v14[26].Next + 1) = v7;
    if ( (v103 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 112));
    v9 = v7;
  }
  *((_QWORD *)&v14[10].Next + 1) = a5;
  v14[11].Next = a2;
  v26 = *((_QWORD *)&v14[4].Next + 1);
  *((_QWORD *)&v14[11].Next + 1) = a6;
  v27 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v28 = 0LL;
  if ( v26 )
  {
    v29 = -1LL;
    if ( !*(_QWORD *)(v26 + 16) )
    {
      v28 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x5254535Fu);
      if ( !v28 )
        goto LABEL_81;
      *v28 = 0LL;
      *(_BYTE *)v28 = 92;
      goto LABEL_77;
    }
    ObjectPathNoLock = GetObjectPathNoLock();
    v31 = (void *)ObjectPathNoLock;
    if ( !ObjectPathNoLock )
      goto LABEL_81;
    v32 = -1LL;
    do
      ++v32;
    while ( *(_BYTE *)(ObjectPathNoLock + v32) );
    v33 = ExAllocatePoolWithTag(NonPagedPoolNx, v32 + 9, 0x5254535Fu);
    v28 = v33;
    if ( !v33 )
    {
LABEL_76:
      ExFreePoolWithTag(v31, 0x5254535Fu);
LABEL_77:
      if ( v28 )
      {
        do
          ++v29;
        while ( *((_BYTE *)v28 + v29) );
        v62 = v29 - 1;
        for ( i = v62; i >= 0; *((_BYTE *)v28 + i--) = 0 )
        {
          if ( *((_BYTE *)v28 + i) != 95 )
            break;
        }
      }
      goto LABEL_81;
    }
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v31 + v34) );
    memset(v33, 0, v34 + 9);
    v35 = -1LL;
    do
      ++v35;
    while ( *((_BYTE *)v31 + v35) );
    v36 = v35 + 1;
    if ( (unsigned __int64)(v36 - 1) > 0x7FFFFFFE )
    {
      if ( v36 )
        *(_BYTE *)v28 = 0;
    }
    else
    {
      v37 = 2147483646 - v36;
      v38 = v28;
      while ( v37 + v36 )
      {
        v39 = v38[(_BYTE *)v31 - (_BYTE *)v28];
        if ( !v39 )
          break;
        *v38++ = v39;
        if ( !--v36 )
          goto LABEL_178;
      }
      if ( v36 )
        goto LABEL_36;
LABEL_178:
      --v38;
LABEL_36:
      *v38 = 0;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
LABEL_56:
      v51 = -1LL;
      do
        ++v51;
      while ( *((_BYTE *)v31 + v51) );
      v52 = v51 + 9;
      v53 = 0;
      if ( (unsigned __int64)(v52 - 1) > 0x7FFFFFFE )
        v53 = -1073741811;
      if ( v53 >= 0 )
      {
        v54 = v52;
        v55 = v28;
        v53 = 0;
        if ( v52 )
        {
          while ( *v55 )
          {
            ++v55;
            if ( !--v54 )
              goto LABEL_184;
          }
          if ( v54 )
          {
            v56 = v52 - v54;
            v120 = v52 - v54;
            goto LABEL_67;
          }
        }
LABEL_184:
        v53 = -1073741811;
      }
      v120 = 0LL;
      v56 = 0LL;
LABEL_67:
      if ( v53 >= 0 )
      {
        v57 = (char *)v28 + v56;
        v58 = v52 - v56;
        if ( v52 == v56 )
          goto LABEL_186;
        v59 = 4LL;
        v60 = v26 + 40 - (_QWORD)v57;
        while ( v59 )
        {
          v61 = v57[v60];
          if ( !v61 )
            break;
          *v57 = v61;
          --v59;
          ++v57;
          if ( !--v58 )
            goto LABEL_186;
        }
        if ( !v58 )
LABEL_186:
          --v57;
        *v57 = 0;
      }
      goto LABEL_76;
    }
    v40 = -1LL;
    do
      ++v40;
    while ( *((_BYTE *)v31 + v40) );
    v41 = v40 + 9;
    v42 = 0;
    if ( (unsigned __int64)(v41 - 1) > 0x7FFFFFFE )
      v42 = -1073741811;
    if ( v42 >= 0 )
    {
      v43 = v41;
      v44 = v28;
      v42 = 0;
      if ( v41 )
      {
        while ( *v44 )
        {
          ++v44;
          if ( !--v43 )
            goto LABEL_181;
        }
        if ( v43 )
        {
          v45 = v41 - v43;
          v119 = v41 - v43;
          goto LABEL_49;
        }
      }
LABEL_181:
      v42 = -1073741811;
    }
    v119 = 0LL;
    v45 = 0LL;
LABEL_49:
    if ( v42 >= 0 )
    {
      v46 = (char *)v28 + v45;
      v47 = v41 - v45;
      if ( v41 == v45 )
        goto LABEL_183;
      v48 = 2147483646LL;
      v49 = (const char *)("." - v46);
      while ( v48 )
      {
        v50 = v46[(_QWORD)v49];
        if ( !v50 )
          break;
        *v46 = v50;
        --v48;
        ++v46;
        if ( !--v47 )
          goto LABEL_183;
      }
      if ( !v47 )
LABEL_183:
        --v46;
      *v46 = 0;
    }
    goto LABEL_56;
  }
  v104 = ExAllocatePoolWithTag(NonPagedPoolNx, 1uLL, 0x5254535Fu);
  v28 = v104;
  if ( v104 )
    *v104 = 0;
LABEL_81:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v27);
  v64 = (unsigned __int16 *)(&v14[27].Next + 1);
  RtlInitUnicodeString((PUNICODE_STRING)(&v14[27].Next + 1), 0LL);
  if ( v28 )
  {
    if ( *(_BYTE *)v28 )
    {
      v65 = v28;
      v66 = 512LL;
      while ( *v65 )
      {
        ++v65;
        if ( !--v66 )
        {
          v105 = 512;
          goto LABEL_88;
        }
      }
      v105 = 512 - v66;
      v122[1] = 512 - v66;
LABEL_88:
      v67 = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * ((unsigned int)v105 + 1), 0x53706341u);
      v14[28].Next = v67;
      if ( v67 )
      {
        *v64 = 2 * v105;
        *((_WORD *)&v14[27].Next + 5) = 2 * v105 + 2;
        if ( v105 )
        {
          v68 = 0LL;
          v69 = v105;
          v70 = (char *)v28;
          do
          {
            v71 = *v70;
            v68 += 2LL;
            ++v70;
            *(_WORD *)((char *)v14[28].Next + v68 - 2) = v71;
            --v69;
          }
          while ( v69 );
        }
        *((_WORD *)&v14[28].Next->Next + v105) = 0;
      }
    }
    ExFreePoolWithTag(v28, 0);
  }
  Next = v14[29].Next;
  if ( Next )
  {
    v73 = *(_QWORD *)(v9 + 16);
    if ( v73 )
    {
      v74 = *(_WORD *)(v73 + 66);
      if ( v74 == 6 || (unsigned __int16)(v74 - 12) <= 1u )
        *((_QWORD *)&Next->Next + 1) = *(_QWORD *)(v73 + 104);
    }
    v75 = v14[29].Next;
    if ( AmliWatchdogEnabled )
    {
      v76 = (unsigned int)AmliWatchdogTimeout;
      if ( AmliWatchdogTimeout )
      {
        v77 = v14[29].Next;
        *((_BYTE *)&v75[5].Next + 8) = 1;
        KeInitializeDpc((PRKDPC)(&v75[1].Next + 1), AmliWatchdog, v77);
        KeInitializeTimer((PKTIMER)(&v75[6].Next + 1));
        v75[6].Next = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000008];
        KeSetTimer((PKTIMER)(&v75[6].Next + 1), (LARGE_INTEGER)(-10000000 * v76), (PKDPC)(&v75[1].Next + 1));
      }
    }
  }
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD) )
    {
      TimeIncrement = KeQueryTimeIncrement();
      v107 = *((_QWORD *)&v14[4].Next + 1);
      v108 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)TimeIncrement / 0x11E1A300;
      v113 = *(_QWORD *)(v107 + 144);
      v117 = *(_QWORD *)(v107 + 152);
      if ( v117 == v108 )
      {
        ++v113;
        *(_DWORD *)(v107 + 148) = HIDWORD(v113);
        *(_DWORD *)(*((_QWORD *)&v14[4].Next + 1) + 144LL) = v113;
      }
      else
      {
        v113 = 1LL;
        *(_DWORD *)(v107 + 148) = 0;
        *(_DWORD *)(*((_QWORD *)&v14[4].Next + 1) + 144LL) = v113;
        *(_QWORD *)(*((_QWORD *)&v14[4].Next + 1) + 152LL) = v108;
      }
      if ( v113 >= 0x3C )
      {
        v109 = *v64;
        v125 = *v64;
        v114 = v109 >> 1;
        v123.Ptr = (unsigned __int64)&v114;
        v124 = v14[28].Next;
        v127 = &v113;
        *(_QWORD *)&v123.Size = 2LL;
        v126 = 0;
        v128 = 8LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD, 0LL, 3u, &v123);
      }
    }
    v117 = 0LL;
    if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
    {
      v110 = *v64;
      v131 = *v64;
      v115 = v110 >> 1;
      UserData.Ptr = (unsigned __int64)&v115;
      v130 = v14[28].Next;
      v133 = &v116;
      v135 = &v117;
      *(_QWORD *)&UserData.Size = 2LL;
      v132 = 0;
      v116 = 1;
      v134 = 2LL;
      v136 = 8LL;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
    }
  }
  if ( a7 )
    LODWORD(v14[4].Next) |= 0x100u;
  v78 = v9 + 64;
  if ( (*(_WORD *)(v9 + 64) & 0x180) == 0 )
  {
    v79 = v14 + 30;
    if ( *(_WORD *)(v9 + 66) == 8 )
    {
      v92 = HeapAlloc(v79, 1297237576LL, 400LL);
      v93 = v92;
      if ( v92 )
      {
        Field = 0;
        *(_QWORD *)(v92 + 8) = v14[26].Next;
        v14[26].Next = (_SLIST_ENTRY *)v92;
        *(_DWORD *)v92 = 1280065859;
        *(_QWORD *)(v92 + 24) = ParseCall;
        v94 = *(_QWORD *)(v9 + 96);
        *(_QWORD *)(v92 + 48) = v9;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
        if ( (*(_BYTE *)(v94 + 193) & 8) != 0 )
          *(_DWORD *)(v92 + 16) |= 0x10000u;
        if ( *(_WORD *)(v9 + 66) == 8 && (*(_WORD *)v78 & 0x200) != 0 )
          *(_DWORD *)(v92 + 16) |= 0x80000u;
        v95 = (*(_BYTE *)(v94 + 193) & 7) == 0;
        v96 = *(_BYTE *)(v94 + 193) & 7;
        *(_DWORD *)(v93 + 60) = v96;
        if ( !v95 )
        {
          v102 = (void *)HeapAlloc(v14[20].Next, 1413563464LL, (unsigned int)(40 * v96));
          *(_QWORD *)(v93 + 64) = v102;
          if ( v102 )
          {
            memset(v102, 0, 40LL * *(unsigned int *)(v93 + 60));
          }
          else
          {
            Field = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(v14, 3221225626LL);
            PrintDebugMessage(152, 0, 0, 0, 0LL);
          }
        }
        *(_QWORD *)(v93 + 392) = v14 + 8;
        if ( !Field )
        {
          v97 = v14[26].Next;
          v98 = v118;
          if ( v118 == *((_DWORD *)&v97[3].Next + 3) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = (void *)GetObjectPath(v9);
              ConPrintf("\nAMLI: %p: %s(");
              if ( ObjectPath )
                ExFreePoolWithTag(ObjectPath, 0);
            }
            *((_DWORD *)&v97[3].Next + 2) = 0;
            if ( !v98 )
            {
LABEL_150:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              LODWORD(v97[1].Next) = (__int64)v97[1].Next & 0xFFFF0000 | 2;
              goto LABEL_125;
            }
            v101 = v121;
            while ( 1 )
            {
              Field = DupObjData(
                        (__int64)v14[20].Next,
                        (__int64)v97[4].Next + 40 * *((unsigned int *)&v97[3].Next + 2),
                        v101 + 40LL * *((unsigned int *)&v97[3].Next + 2));
              if ( Field )
                break;
              if ( (gDebugger & 0xD0) != 0 )
              {
                PrintObject(v101 + 40LL * *((unsigned int *)&v97[3].Next + 2));
                if ( *((_DWORD *)&v97[3].Next + 2) + 1 < v98 )
                  ConPrintf(",");
              }
              if ( ++*((_DWORD *)&v97[3].Next + 2) >= v98 )
                goto LABEL_150;
            }
          }
          else
          {
            Field = -1072431093;
            LogError(3222536203LL);
            AcpiDiagTraceAmlError(v14, 3222536203LL);
            PrintDebugMessage(12, v98, *((_DWORD *)&v97[3].Next + 3), 0, 0LL);
          }
        }
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(v14, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
    }
    else
    {
      v80 = v14 + 8;
      Field = 0;
      v82 = HeapAlloc(v79, 1297237576LL, 56LL);
      if ( v82 )
      {
        *(_QWORD *)(v82 + 8) = v14[26].Next;
        v14[26].Next = (_SLIST_ENTRY *)v82;
        *(_QWORD *)(v82 + 24) = ProcessEvalObj;
        *(_DWORD *)v82 = 1414745936;
        *(_QWORD *)(v82 + 32) = v9;
        *(_QWORD *)(v82 + 40) = 0LL;
        *(_QWORD *)(v82 + 48) = v80;
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(v14, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
      if ( !Field )
      {
        Field = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v83 = *(_WORD *)(v78 + 2);
            if ( v83 != 128 )
              break;
            v78 = *(_QWORD *)(v78 + 16) + 64LL;
          }
          if ( v83 != 129 )
            break;
          v78 = *(_QWORD *)(v78 + 16);
        }
        if ( v83 == 5 )
        {
          Field = PushFrame((_DWORD)v14, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)v122);
          if ( !Field )
          {
            v112 = v122[0];
            *(_QWORD *)(v122[0] + 32LL) = v78;
            *(_DWORD *)(v112 + 16) = 0x10000;
            *(_QWORD *)(v112 + 40) = v80;
          }
        }
        else if ( v83 == 14 )
        {
          Field = ReadField(v14, v78, *(_QWORD *)(v78 + 32) + 12LL, &v14[8]);
        }
        else
        {
          if ( v80 != (struct _SLIST_ENTRY *)v78 )
          {
            *v80 = *(struct _SLIST_ENTRY *)v78;
            v14[9] = *(PSLIST_ENTRY)(v78 + 16);
            v14[10].Next = *(_SLIST_ENTRY **)(v78 + 32);
            if ( (*(_BYTE *)v78 & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v78 + 8) + 8LL));
            }
            else if ( *(_QWORD *)(v78 + 32) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
              LOWORD(v80->Next) |= 1u;
              *((_QWORD *)&v14[8].Next + 1) = v78;
            }
          }
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("=");
            PrintObject(&v14[8]);
          }
        }
        if ( Field != 32772 )
          goto LABEL_125;
      }
    }
LABEL_202:
    FreeContext(v14);
    return Field;
  }
  Field = PushPost((_DWORD)v14, (unsigned int)ProcessEvalObj, v9, 0, (__int64)&v14[8]);
  if ( Field )
    goto LABEL_202;
  Field = AMLIReadNamespaceOverrideObject(v14, v9, &v14[8]);
  if ( Field == 32772 )
    goto LABEL_202;
LABEL_125:
  v84 = *((_QWORD *)&v14[6].Next + 1);
  if ( v84 )
    v85 = *(_QWORD *)(v84 + 32);
  else
    v85 = *((_QWORD *)&v14[4].Next + 1);
  v86 = KeGetCurrentThread();
  v87 = *((_QWORD *)&v14[7].Next + 1);
  v88 = *((_QWORD *)&v14[25].Next + 1);
  v89 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && P )
  {
    v90 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0079788 + 1, 1u) % (unsigned int)qword_1C0079788);
    *(_QWORD *)((char *)P + v90 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)P + v90) = 1380275028;
    *(_QWORD *)((char *)P + v90 + 16) = v86;
    *(_QWORD *)((char *)P + v90 + 24) = v88;
    *(_QWORD *)((char *)P + v90 + 32) = v14;
    *(_QWORD *)((char *)P + v90 + 40) = v89;
    *(_QWORD *)((char *)P + v90 + 48) = v14;
    *(_QWORD *)((char *)P + v90 + 56) = v85;
    *(_QWORD *)((char *)P + v90 + 64) = v87;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v14[27].Next )
      v14[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(v14[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( !(unsigned __int8)ExTryQueueWorkItem(&v14[22].Next + 1, 1LL) )
        OSQueueWorkItem(&v14[22].Next + 1);
    }
    else
    {
      v99 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v100 = (_SLIST_ENTRY *)qword_1C0078868;
      if ( *(__int64 **)qword_1C0078868 != &ACPIWorkQueue )
        __fastfail(3u);
      *((_QWORD *)&v14[22].Next + 1) = &ACPIWorkQueue;
      v14[23].Next = v100;
      v100->Next = (PSLIST_ENTRY)((char *)v14 + 360);
      qword_1C0078868 = (__int64)(&v14[22].Next + 1);
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v99);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
    }
    return 32772;
  }
  else
  {
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v14[27].Next )
      v14[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    Field = InsertReadyQueue(v14, 0);
    KeReleaseSpinLock(&SpinLock, byte_1C0079660);
  }
  return Field;
}
