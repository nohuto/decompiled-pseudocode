/*
 * XREFs of PopTransitionToSleep @ 0x140435830
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x14021EB3C (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14021EC88 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14022733C (MmFlushAllPagesEx.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     PopEnlargeHiberFile @ 0x1406FB854 (PopEnlargeHiberFile.c)
 */

LONG __fastcall PopTransitionToSleep(PRKEVENT Event)
{
  volatile unsigned int Lock; // esi
  LONG v3; // eax
  LONG v4; // ecx
  int v5; // eax
  char v6; // cl
  char v7; // r14
  char v8; // r15
  int v9; // eax
  _QWORD v11[6]; // [rsp+30h] [rbp-30h] BYREF
  char v12; // [rsp+90h] [rbp+30h] BYREF

  memset(v11, 0, 0x28uLL);
  Lock = Event[3].Header.Lock;
  qword_140365BD0 = (__int64)KeGetCurrentThread();
  v12 = 0;
  if ( Lock != 3 && Lock != 6 )
  {
    KeSetEvent(Event, 0, 1u);
    KeWaitForSingleObject(&Event[1], Executive, 0, 0, 0LL);
    v3 = PopInvokeSystemStateHandler(Lock);
LABEL_21:
    v4 = v3;
    goto LABEL_22;
  }
  if ( (PopSimulateHiberBugcheck & 0x20) == 0 )
  {
    v5 = PopEnlargeHiberFile(&v12);
    v6 = v12;
    if ( v5 < 0 )
      v6 = 1;
    v11[0] = xHalPciEarlyRestore;
    v11[3] = 0LL;
    v11[1] = PopEndMirroring;
    v7 = 0;
    v8 = 0;
    v11[2] = PopMirrorPhysicalMemory;
    if ( v6 )
    {
      MmEmptyAllWorkingSets();
      v9 = 17;
      v8 = 1;
    }
    else
    {
      if ( (dword_1403657EC & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
      {
        MmEmptyAllWorkingSets();
        v8 = 1;
      }
      else if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v9 = 17;
LABEL_18:
        LODWORD(v11[4]) = v9;
        byte_1403666DC = v7;
        byte_1403666DD = v8;
        dword_1403666D8 = v9;
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
        if ( v7 )
          MmFlushAllPagesEx(v8);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
        PopHibernatePowerStateHandlerType = Lock;
        PopSleeperHandoff = Event;
        v3 = MmDuplicateMemory((__int64)v11);
        PopSleeperHandoff = 0LL;
        PopHibernatePowerStateHandlerType = 7;
        goto LABEL_21;
      }
      v9 = 20;
    }
    v7 = 1;
    goto LABEL_18;
  }
  KeSetEvent(Event, 0, 1u);
  KeWaitForSingleObject(&Event[1], Executive, 0, 0, 0LL);
  v4 = 0;
LABEL_22:
  qword_140365D60 = __rdtsc();
  Event[3].Header.SignalState = v4;
  return KeSetEvent(Event + 2, 0, 0);
}
