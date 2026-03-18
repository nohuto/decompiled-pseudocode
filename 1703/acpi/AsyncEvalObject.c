/*
 * XREFs of AsyncEvalObject @ 0x1C0003100
 * Callers:
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     OSQueueWorkItem @ 0x1C0027898 (OSQueueWorkItem.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00414A0 (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0041EE4 (AcpiDiagTraceFrequentAmlEvaluation.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D3E8 (AMLIReadNamespaceOverrideObject.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
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
  __int64 v8; // rbp
  struct _KTHREAD *CurrentThread; // r11
  __int64 v11; // rbx
  __int64 CurrentIrql; // r10
  unsigned __int32 v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  PSLIST_ENTRY v16; // rbx
  KIRQL v17; // dl
  int v18; // eax
  char *v19; // rax
  size_t v20; // rdi
  _SLIST_ENTRY *v21; // r13
  KIRQL v22; // al
  struct _SLIST_ENTRY **v23; // rcx
  struct _SLIST_ENTRY *v24; // rax
  __int16 v25; // ax
  char v26; // al
  __int64 v27; // rdi
  char *v28; // rcx
  struct _SLIST_ENTRY *v29; // r14
  unsigned int Field; // ebp
  __int64 v31; // rax
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // r9
  struct _KTHREAD *v35; // rdi
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rsi
  unsigned __int32 v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rcx
  bool v46; // zf
  int v47; // eax
  _SLIST_ENTRY *Next; // rdi
  KIRQL v49; // al
  _SLIST_ENTRY *v50; // rcx
  void *v51; // rax
  void *ObjectPath; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // rdi
  void *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (unsigned int)gReadyQueue;
  CurrentIrql = KeGetCurrentIrql();
  if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
  {
    v13 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
    if ( (_DWORD)qword_1C00776C8 == 204 )
      v14 = v13 % 0xCC;
    else
      v14 = v13 % (unsigned int)qword_1C00776C8;
    v15 = 72LL * v14;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00776D0 + v15) = 1095981390;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 40) = v11;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 48) = CurrentIrql;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 56) = a1;
    *(_QWORD *)((char *)qword_1C00776D0 + v15 + 64) = 0LL;
  }
  ++dword_1C00779D4;
  v16 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v16 )
  {
    ++dword_1C00779D8;
    v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00779F0)(
                          (unsigned int)dword_1C00779E4,
                          (unsigned int)dword_1C00779EC,
                          (unsigned int)dword_1C00779E8);
    if ( !v16 )
      return (unsigned int)-1073741670;
  }
  memset(v16, 0, 0x210uLL);
  v17 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v18 = gdwcCTObjs + 1;
  gdwcCTObjs = v18;
  if ( v18 > 0 && v18 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v18;
  KeReleaseSpinLock(&gdwGContextSpinLock, v17);
  memset(v16, 0, 0x1B8uLL);
  v19 = (char *)v16 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v16->Next) = 1415074883;
  *((_QWORD *)&v16->Next + 1) = v19;
  v16[20].Next = (PSLIST_ENTRY)((char *)v16 + 440);
  KeInitializeDpc((PRKDPC)&v16[16], TimeoutCallback, v16);
  KeInitializeTimer((PKTIMER)&v16[12]);
  v20 = (unsigned int)(*((_DWORD *)&v16->Next + 2) - (_DWORD)v16 - 440);
  memset(&v16[27].Next + 1, 0, v20);
  *((_DWORD *)&v16[27].Next + 2) = 1346454856;
  v21 = (PSLIST_ENTRY)((char *)v16 + 360);
  v16[28].Next = (PSLIST_ENTRY)((char *)v16 + v20 + 440);
  *((_QWORD *)&v16[29].Next + 1) = v16 + 31;
  *((_QWORD *)&v16[30].Next + 1) = v16 + 30;
  v16[30].Next = v16 + 30;
  *((_QWORD *)&v16[23].Next + 1) = RestartCtxtPassive;
  v16[24].Next = v16;
  *((_QWORD *)&v16[22].Next + 1) = 0LL;
  v16[25].Next = (PSLIST_ENTRY)((char *)v16 + 392);
  *((_QWORD *)&v16[24].Next + 1) = (char *)v16 + 392;
  *((_QWORD *)&v16[3].Next + 1) = v16 + 3;
  v16[3].Next = v16 + 3;
  *((_QWORD *)&v16[2].Next + 1) = v16 + 2;
  v16[2].Next = v16 + 2;
  *((_QWORD *)&v16[28].Next + 1) = (char *)v16 + 440;
  v22 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v23 = (struct _SLIST_ENTRY **)off_1C0074358[0];
  byte_1C00779B0 = v22;
  v24 = v16 + 1;
  if ( *(_UNKNOWN ***)off_1C0074358[0] != &glistCtxtHead )
    __fastfail(3u);
  *((_UNKNOWN ***)&v16[1].Next + 1) = off_1C0074358[0];
  v24->Next = (_SLIST_ENTRY *)&glistCtxtHead;
  *v23 = v24;
  off_1C0074358[0] = (_UNKNOWN **)&v16[1];
  KeReleaseSpinLock(&gmutCtxtList, byte_1C00779B0);
  v25 = *(_WORD *)(a1 + 64);
  if ( (v25 & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
  }
  else if ( (v25 & 0x200) != 0 )
  {
    v8 = a1;
  }
  v26 = gdwfAMLI;
  *((_QWORD *)&v16[4].Next + 1) = a1;
  if ( (v26 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
    v26 = gdwfAMLI;
  }
  v16[5].Next = (_SLIST_ENTRY *)a1;
  if ( (v26 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
    v26 = gdwfAMLI;
  }
  if ( v8 )
  {
    *((_QWORD *)&v16[26].Next + 1) = v8;
    if ( (v26 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
    a1 = v8;
  }
  *((_QWORD *)&v16[10].Next + 1) = a5;
  *((_QWORD *)&v16[11].Next + 1) = a6;
  v16[11].Next = a2;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD) )
    {
      ObjectPath = (void *)GetObjectPath(*((_QWORD *)&v16[4].Next + 1));
      AcpiDiagTraceFrequentAmlEvaluation(*((_QWORD *)&v16[4].Next + 1), ObjectPath);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
    if ( AcpiDiagHandle )
    {
      if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
      {
        v53 = GetObjectPath(*((_QWORD *)&v16[4].Next + 1));
        LOBYTE(v54) = 1;
        v55 = (void *)v53;
        AcpiDiagTraceAmlEvaluation(v53, v54);
        if ( v55 )
          ExFreePoolWithTag(v55, 0);
      }
    }
  }
  if ( a7 )
    LODWORD(v16[4].Next) |= 0x100u;
  v27 = a1 + 64;
  if ( (*(_WORD *)(a1 + 64) & 0x180) == 0 )
  {
    v28 = (char *)(&v16[27].Next + 1);
    if ( *(_WORD *)(a1 + 66) == 8 )
    {
      Field = 0;
      v43 = HeapAlloc(v28, 1297237576LL, 400LL);
      v44 = v43;
      if ( v43 )
      {
        *(_QWORD *)(v43 + 8) = v16[26].Next;
        v16[26].Next = (_SLIST_ENTRY *)v43;
        *(_QWORD *)(v43 + 24) = ParseCall;
        *(_DWORD *)v43 = 1280065859;
        v45 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(v43 + 48) = a1;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        if ( (*(_BYTE *)(v45 + 193) & 8) != 0 )
          *(_DWORD *)(v43 + 16) |= 0x10000u;
        if ( *(_WORD *)(a1 + 66) == 8 && (*(_WORD *)v27 & 0x200) != 0 )
          *(_DWORD *)(v43 + 16) |= 0x80000u;
        v46 = (*(_BYTE *)(v45 + 193) & 7) == 0;
        v47 = *(_BYTE *)(v45 + 193) & 7;
        *(_DWORD *)(v44 + 60) = v47;
        if ( !v46 )
        {
          v51 = (void *)HeapAlloc(v16[20].Next, 1413563464LL, (unsigned int)(40 * v47));
          *(_QWORD *)(v44 + 64) = v51;
          if ( v51 )
          {
            memset(v51, 0, 40LL * *(unsigned int *)(v44 + 60));
          }
          else
          {
            Field = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(v16, 3221225626LL);
            PrintDebugMessage(152, 0, 0, 0, 0LL);
          }
        }
        *(_QWORD *)(v44 + 392) = v16 + 8;
        if ( !Field )
        {
          Next = v16[26].Next;
          if ( a3 == *((_DWORD *)&Next[3].Next + 3) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              v56 = (void *)GetObjectPath(a1);
              ConPrintf("\nAMLI: %p: %s(");
              if ( v56 )
                ExFreePoolWithTag(v56, 0);
            }
            *((_DWORD *)&Next[3].Next + 2) = 0;
            if ( !a3 )
            {
LABEL_67:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              LODWORD(Next[1].Next) = (__int64)Next[1].Next & 0xFFFF0000 | 2;
              goto LABEL_42;
            }
            while ( 1 )
            {
              Field = DupObjData(
                        v16[20].Next,
                        (char *)Next[4].Next + 40 * *((unsigned int *)&Next[3].Next + 2),
                        a4 + 40LL * *((unsigned int *)&Next[3].Next + 2));
              if ( Field )
                break;
              if ( (gDebugger & 0xD0) != 0 )
              {
                PrintObject(a4 + 40LL * *((unsigned int *)&Next[3].Next + 2));
                if ( *((_DWORD *)&Next[3].Next + 2) + 1 < a3 )
                  ConPrintf(",");
              }
              if ( ++*((_DWORD *)&Next[3].Next + 2) >= a3 )
                goto LABEL_67;
            }
          }
          else
          {
            Field = -1072431093;
            LogError(3222536203LL);
            AcpiDiagTraceAmlError(v16, 3222536203LL);
            PrintDebugMessage(12, a3, *((_DWORD *)&Next[3].Next + 3), 0, 0LL);
          }
        }
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(v16, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
    }
    else
    {
      v29 = v16 + 8;
      Field = 0;
      v31 = HeapAlloc(v28, 1297237576LL, 56LL);
      if ( v31 )
      {
        *(_QWORD *)(v31 + 8) = v16[26].Next;
        v16[26].Next = (_SLIST_ENTRY *)v31;
        *(_QWORD *)(v31 + 24) = ProcessEvalObj;
        *(_DWORD *)v31 = 1414745936;
        *(_QWORD *)(v31 + 32) = a1;
        *(_QWORD *)(v31 + 40) = 0LL;
        *(_QWORD *)(v31 + 48) = v29;
      }
      else
      {
        Field = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(v16, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
      if ( !Field )
      {
        Field = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v32 = *(_WORD *)(v27 + 2);
            if ( v32 != 128 )
              break;
            v27 = *(_QWORD *)(v27 + 16) + 64LL;
          }
          if ( v32 != 129 )
            break;
          v27 = *(_QWORD *)(v27 + 16);
        }
        if ( v32 == 5 )
        {
          Field = PushFrame((_DWORD)v16, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v58);
          if ( !Field )
          {
            v57 = v58;
            *(_QWORD *)(v58 + 32) = v27;
            *(_DWORD *)(v57 + 16) = 0x10000;
            *(_QWORD *)(v57 + 40) = v29;
          }
        }
        else if ( v32 == 14 )
        {
          Field = ReadField(v16, v27, *(_QWORD *)(v27 + 32) + 12LL, &v16[8]);
        }
        else
        {
          if ( v29 != (struct _SLIST_ENTRY *)v27 )
          {
            *v29 = *(struct _SLIST_ENTRY *)v27;
            v16[9] = *(PSLIST_ENTRY)(v27 + 16);
            v16[10].Next = *(_SLIST_ENTRY **)(v27 + 32);
            if ( (*(_BYTE *)v27 & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 8) + 8LL));
            }
            else if ( *(_QWORD *)(v27 + 32) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
              LOWORD(v29->Next) |= 1u;
              *((_QWORD *)&v16[8].Next + 1) = v27;
            }
          }
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("=");
            PrintObject(&v16[8]);
          }
        }
        if ( Field != 32772 )
          goto LABEL_42;
      }
    }
LABEL_100:
    FreeContext(v16);
    return Field;
  }
  Field = PushPost((_DWORD)v16, (unsigned int)ProcessEvalObj, a1, 0, (__int64)&v16[8]);
  if ( Field )
    goto LABEL_100;
  Field = AMLIReadNamespaceOverrideObject(v16, a1, &v16[8]);
  if ( Field == 32772 )
    goto LABEL_100;
LABEL_42:
  v33 = *((_QWORD *)&v16[6].Next + 1);
  if ( v33 )
    v34 = *(_QWORD *)(v33 + 32);
  else
    v34 = *((_QWORD *)&v16[4].Next + 1);
  v35 = KeGetCurrentThread();
  v36 = *((_QWORD *)&v16[7].Next + 1);
  v37 = *((_QWORD *)&v16[25].Next + 1);
  v38 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00776D0 )
  {
    v39 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00776C8 + 1, 1u);
    if ( (_DWORD)qword_1C00776C8 == 204 )
      v40 = v39 % 0xCC;
    else
      v40 = v39 % (unsigned int)qword_1C00776C8;
    v41 = 72LL * v40;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00776D0 + v41) = 1380275028;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 16) = v35;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 24) = v37;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 32) = v16;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 40) = v38;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 48) = v16;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 56) = v34;
    *(_QWORD *)((char *)qword_1C00776D0 + v41 + 64) = v36;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v16[27].Next )
      v16[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(v16[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( !(unsigned __int8)ExTryQueueWorkItem(&v16[22].Next + 1, 1LL) )
        OSQueueWorkItem(&v16[22].Next + 1);
    }
    else
    {
      v49 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v50 = (_SLIST_ENTRY *)qword_1C0076808;
      if ( *(__int64 **)qword_1C0076808 != &ACPIWorkQueue )
        __fastfail(3u);
      v21->Next = (_SLIST_ENTRY *)&ACPIWorkQueue;
      v16[23].Next = v50;
      v50->Next = v21;
      qword_1C0076808 = (__int64)(&v16[22].Next + 1);
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v49);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
    }
    return 32772;
  }
  else
  {
    byte_1C00775A0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v16[27].Next )
      v16[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    Field = InsertReadyQueue(v16);
    KeReleaseSpinLock(&SpinLock, byte_1C00775A0);
  }
  return Field;
}
