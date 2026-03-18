/*
 * XREFs of AMLIInitialize @ 0x1C00AD4B4
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00AD404 (ACPIInitializeAMLI.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     SetLogSize @ 0x1C0011928 (SetLogSize.c)
 *     NewGlobalHeap @ 0x1C0011990 (NewGlobalHeap.c)
 *     InitMutex @ 0x1C0011BF0 (InitMutex.c)
 *     InitializeNativeNamespace @ 0x1C0012064 (InitializeNativeNamespace.c)
 *     NewObjOwner @ 0x1C00134CC (NewObjOwner.c)
 *     NewNameSpaceObject @ 0x1C001A558 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x1C001A5C8 (InsertOwnerObjList.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C005D298 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C005D408 (FreeOwnedObjects.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     CatError @ 0x1C005DC80 (CatError.c)
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00A4614 (OSOpenAMLINamespaceOverrideHandle.c)
 *     AMLIGetEmOverride @ 0x1C00AD360 (AMLIGetEmOverride.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AE588 (InitIllegalIOAddressListFromHAL.c)
 */

__int64 __fastcall AMLIInitialize(int a1, int a2, int a3, unsigned int a4, struct _EX_RUNDOWN_REF *a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  unsigned int NameSpaceObject; // ebx
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int8 **v13; // rsi
  struct _EX_RUNDOWN_REF *v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  void *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rbx
  void *v18; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v20; // r8
  _QWORD *v21; // rax
  int NamespaceOverride; // ebx
  __int64 v23; // rax
  void *v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+A0h] [rbp+50h]
  unsigned int v28; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a1;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  dword_1C00797B8 = 0;
  pszDest[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v10 = 66;
LABEL_3:
    PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    MemoryInfo = v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    if ( v6 > 0x400 )
      v6 = 1024;
    v11 = 16;
    if ( v6 > 0x10 )
      v11 = v6;
    gdwcCTObjsMax = v11;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v26) >= 0
      && v26 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      (PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v12 = 0;
        v13 = (unsigned __int8 **)&apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v13,
                              0LL,
                              0LL,
                              (struct _EX_RUNDOWN_REF **)&AmliGlobalPreDefinedRootObjects + v12,
                              0);
          if ( NameSpaceObject )
            break;
          ++v12;
          ++v13;
          if ( v12 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v14 = a5;
              WORD1(a5[8].Ptr) = 1;
              v14[10].Count = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v15 = a5;
                WORD1(a5[8].Ptr) = 2;
                LODWORD(v15[11].Count) = 21;
                v16 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0x15u);
                v15[12].Count = (unsigned __int64)v16;
                if ( !v16 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v10 = 68;
                  goto LABEL_3;
                }
                memmove(v16, "Microsoft Windows NT", LODWORD(v15[11].Count));
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v17 = a5;
                  WORD1(a5[8].Ptr) = 8;
                  LODWORD(v17[11].Count) = 202;
                  v18 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
                  v17[12].Count = (unsigned __int64)v18;
                  if ( !v18 )
                  {
                    NameSpaceObject = -1073741670;
                    LogError(-1073741670);
                    AcpiDiagTraceAmlError(0LL, -1073741670);
                    v10 = 69;
                    goto LABEL_3;
                  }
                  memset(v18, 0, LODWORD(v17[11].Count));
                  *(_BYTE *)(v17[12].Count + 193) |= 1u;
                  Count = v17[12].Count;
                  *(_WORD *)(Count + 194) = OSIAML;
                  *(_BYTE *)(Count + 196) = 104;
                  NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, &a5, 0);
                  if ( !NameSpaceObject )
                  {
                    v20 = a5;
                    LOWORD(a5[8].Count) = 2;
                    NameSpaceObject = InitMutex(0LL, gpheapGlobal, (__int64)v20, 0, 1);
                    if ( !NameSpaceObject )
                    {
                      NameSpaceObject = InitializeNativeNamespace();
                      if ( !NameSpaceObject )
                      {
                        if ( (gOverrideFlags & 0x20) != 0
                          && (int)OSOpenAMLINamespaceOverrideHandle(&v25) >= 0
                          && !gpnsNameSpaceOverrideRoot
                          && (int)NewObjOwner(gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner) >= 0 )
                        {
                          v21 = NewNameSpaceObject(gpheapGlobal);
                          gpnsNameSpaceOverrideRoot = (__int64)v21;
                          if ( v21 )
                          {
                            *((_DWORD *)v21 + 10) = 1600085852;
                            InsertOwnerObjList(
                              (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner,
                              (struct _EX_RUNDOWN_REF *)v21);
                            NamespaceOverride = AMLIAddNextNamespaceOverride(v25, gpnsNameSpaceOverrideRoot);
                            OSCloseHandle(v25);
                            DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
                            if ( NamespaceOverride < 0 )
                            {
                              *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
                              FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
                              FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
                              gpNameSpaceOverrideOwner = 0LL;
                              gpnsNameSpaceOverrideRoot = 0LL;
                            }
                          }
                          else
                          {
                            LogError(-1073741670);
                            CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
                          }
                        }
                        KeInitializeSpinLock(&SpinLock);
                        byte_1C0079660 = 0;
                        qword_1C0079678 = (__int64)DispatchCtxtQueue;
                        qword_1C0079668 = 0LL;
                        qword_1C0079680 = (__int64)&gReadyQueue;
                        qword_1C0079698 = (__int64)&qword_1C0079690;
                        qword_1C0079690 = (__int64)&qword_1C0079690;
                        qword_1C0079650 = (__int64)&qword_1C0079648;
                        qword_1C0079648 = (__int64)&qword_1C0079648;
                        KeInitializeSpinLock(&gmutCtxtList);
                        byte_1C0079CC8 = 0;
                        KeInitializeSpinLock(&gmutOwnerList);
                        byte_1C0079CF0 = 0;
                        KeInitializeSpinLock(&gmutHeap);
                        NewIrql = 0;
                        KeInitializeSpinLock(&gmutSleep);
                        byte_1C007A068 = 0;
                        v27 = 9;
                        ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                        SleepTimer = v23;
                        qword_1C007A058 = (__int64)&SleepQueue;
                        SleepQueue = (__int64)&SleepQueue;
                        qword_1C0078808 = (__int64)&RunningContextListHead;
                        RunningContextListHead = (__int64)&RunningContextListHead;
                        InitIllegalIOAddressListFromHAL();
                        v28 = 4;
                        AmliWatchdogEnabled = 1;
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogTimeout", 0LL, &AmliWatchdogTimeout, &v28)
                          || v28 != 4 )
                        {
                          AmliWatchdogTimeout = 30;
                        }
                        if ( AmliWatchdogTimeout )
                        {
                          if ( (unsigned int)AmliWatchdogTimeout < 0xF )
                            AmliWatchdogTimeout = 15;
                        }
                        else
                        {
                          AmliWatchdogEnabled = 0;
                        }
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogAction", 0LL, &AmliWatchdogAction, &v28)
                          || v28 != 4 )
                        {
                          AmliWatchdogAction = 0;
                        }
                        _InterlockedExchange(&dword_1C0078920, 0);
                        AcpiRecordBlackboxWorkItem.WorkerRoutine = (void (__fastcall *)(void *))AcpiRecordBlackboxInformationWorker;
                        NameSpaceObject = 0;
                        AcpiRecordBlackboxWorkItem.Parameter = 0LL;
                        AcpiRecordBlackboxWorkItem.List.Flink = 0LL;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(67, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
