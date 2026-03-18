/*
 * XREFs of PopTransitionToSleep @ 0x14040BE50
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MmFlushAllPagesEx @ 0x14013F244 (MmFlushAllPagesEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x140215A74 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140215BB0 (MmTrimFilePagesFromWorkingSets.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     PopEnlargeHiberFile @ 0x14057B3F8 (PopEnlargeHiberFile.c)
 */

LONG __fastcall PopTransitionToSleep(PRKEVENT Event)
{
  volatile LONG Lock; // esi
  int v3; // eax
  char v4; // cl
  char v5; // r14
  char v6; // r15
  unsigned int v7; // r12d
  LONG v8; // eax
  LONG v9; // ecx
  _QWORD v11[6]; // [rsp+30h] [rbp-30h] BYREF
  char v12; // [rsp+90h] [rbp+30h] BYREF

  memset(v11, 0, 0x28uLL);
  Lock = Event[3].Header.Lock;
  qword_14034B370 = (__int64)KeGetCurrentThread();
  v12 = 0;
  if ( Lock != 3 && Lock != 6 )
  {
    KeSetEvent(Event, 0, 1u);
    KeWaitForSingleObject(&Event[1], Executive, 0, 0, 0LL);
    v8 = PopInvokeSystemStateHandler(Lock, qword_14034B1C0);
    goto LABEL_14;
  }
  v3 = PopEnlargeHiberFile(&v12);
  v4 = v12;
  if ( v3 < 0 )
    v4 = 1;
  v11[0] = xHalPciEarlyRestore;
  v11[3] = 0LL;
  v11[1] = PopEndMirroring;
  v5 = 0;
  v6 = 0;
  v11[2] = PopMirrorPhysicalMemory;
  v7 = 60;
  if ( v4 )
  {
    MmEmptyAllWorkingSets();
    v6 = 1;
    LODWORD(v11[4]) = 17;
  }
  else
  {
    if ( (dword_14034B18C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v6 = 1;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        LODWORD(v11[4]) = 17;
        goto LABEL_11;
      }
      v7 = 8;
    }
    LODWORD(v11[4]) = 20;
  }
  v5 = 1;
LABEL_11:
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
  if ( v5 )
    MmFlushAllPagesEx(v6, v7);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
  PopHibernatePowerStateHandlerType = Lock;
  PopSleeperHandoff = Event;
  v8 = MmDuplicateMemory(v11);
  PopSleeperHandoff = 0LL;
  PopHibernatePowerStateHandlerType = 7;
LABEL_14:
  v9 = v8;
  qword_14034B6E0 = __rdtsc();
  Event[3].Header.SignalState = v9;
  return KeSetEvent(Event + 2, 0, 0);
}
