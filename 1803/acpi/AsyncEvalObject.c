/*
 * XREFs of AsyncEvalObject @ 0x1C0002BD8
 * Callers:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 * Callees:
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 *     LogEvent @ 0x1C00029B8 (LogEvent.c)
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00030A0 (AcpiDiagTraceAmlEvaluation.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     PushPost @ 0x1C00032BC (PushPost.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x1C00034B4 (AcpiDiagTraceFrequentAmlEvaluation.c)
 *     AmliEnableWatchdog @ 0x1C000351C (AmliEnableWatchdog.c)
 *     ConvertMethodNameToUnicode @ 0x1C00035A8 (ConvertMethodNameToUnicode.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     NewContext @ 0x1C0003A74 (NewContext.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0046100 (AMLIReadNamespaceOverrideObject.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     PushCall @ 0x1C004E600 (PushCall.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned int v12; // ebx
  __int16 v13; // ax
  __int64 v14; // rcx
  char *v15; // rdi
  _QWORD *v16; // r8
  void *ObjectPath; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  void *v23; // rax
  __int16 v24; // dx
  __int64 v25; // rdx
  unsigned int Object; // eax
  __int64 v28; // rbp
  void *v29; // rbx
  __int64 v30; // rax
  PVOID Entry[2]; // [rsp+40h] [rbp-28h] BYREF

  Entry[0] = 0LL;
  v10 = a1;
  CurrentIrql = KeGetCurrentIrql();
  LogEvent(1095981390, (__int64)KeGetCurrentThread(), 0LL, 0LL, (unsigned int)gReadyQueue, CurrentIrql, a1, 0LL);
  v12 = NewContext(Entry);
  if ( !v12 )
  {
    v13 = *(_WORD *)(v10 + 64);
    if ( (v13 & 0x400) != 0 )
    {
      v14 = *(_QWORD *)(v10 + 136);
    }
    else
    {
      v14 = 0LL;
      if ( (v13 & 0x200) != 0 )
        v14 = v10;
    }
    v15 = (char *)Entry[0];
    v16 = (char *)Entry[0] + 72;
    *((_QWORD *)Entry[0] + 9) = v10;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
      v15 = (char *)Entry[0];
    }
    *((_QWORD *)v15 + 10) = v10;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
      v15 = (char *)Entry[0];
    }
    if ( v14 )
    {
      *((_QWORD *)v15 + 53) = v14;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 112));
        v15 = (char *)Entry[0];
      }
      v10 = v14;
    }
    *((_QWORD *)v15 + 21) = a5;
    *((_QWORD *)v15 + 22) = a2;
    *((_QWORD *)v15 + 23) = a6;
    ObjectPath = (void *)GetObjectPath(*v16);
    RtlInitUnicodeString((PUNICODE_STRING)(v15 + 440), 0LL);
    ConvertMethodNameToUnicode(ObjectPath, v15 + 440);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
    v20 = *((_QWORD *)v15 + 58);
    v21 = 12LL;
    if ( v20 )
    {
      v22 = *(_QWORD *)(v10 + 16);
      v23 = (void *)*((_QWORD *)v15 + 58);
      if ( v22 )
      {
        v24 = *(_WORD *)(v22 + 66);
        if ( v24 == 6 || v24 == 12 || v24 == 13 )
        {
          *(_QWORD *)(v20 + 8) = *(_QWORD *)(v22 + 104);
          v23 = (void *)*((_QWORD *)v15 + 58);
        }
      }
      AmliEnableWatchdog(v23);
    }
    AcpiDiagTraceFrequentAmlEvaluation(v15, v18, v19, v21);
    LOBYTE(v25) = 1;
    AcpiDiagTraceAmlEvaluation(v15, v25);
    if ( a7 )
      *((_DWORD *)v15 + 16) |= 0x100u;
    if ( (*(_WORD *)(v10 + 64) & 0x180) != 0 )
    {
      v12 = PushPost((_DWORD)v15, (unsigned int)ProcessEvalObj, v10, 0, (__int64)(v15 + 128));
      if ( v12 )
        goto LABEL_26;
      Object = AMLIReadNamespaceOverrideObject(v15, v10, v15 + 128);
    }
    else
    {
      if ( *(_WORD *)(v10 + 66) == 8 )
      {
        v12 = PushCall(v15, v10, v15 + 128);
        if ( !v12 )
        {
          v28 = *((_QWORD *)v15 + 52);
          if ( a3 == *(_DWORD *)(v28 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              v29 = (void *)GetObjectPath(v10);
              ConPrintf("\nAMLI: %p: %s(");
              if ( v29 )
                ExFreePoolWithTag(v29, 0);
              v15 = (char *)Entry[0];
            }
            *(_DWORD *)(v28 + 56) = 0;
            if ( !a3 )
            {
LABEL_50:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v28 + 16) = *(_DWORD *)(v28 + 16) & 0xFFFF0000 | 2;
              return (unsigned int)RestartContext((__int64)v15, 0);
            }
            v30 = 0LL;
            while ( 1 )
            {
              v12 = DupObjData(*((_QWORD *)v15 + 40), *(_QWORD *)(v28 + 64) + 40 * v30, a4 + 40 * v30);
              if ( v12 )
                break;
              if ( (gDebugger & 0xD0) != 0 )
              {
                PrintObject(a4 + 40LL * *(unsigned int *)(v28 + 56));
                if ( *(_DWORD *)(v28 + 56) + 1 < a3 )
                  ConPrintf(",");
              }
              v30 = (unsigned int)(*(_DWORD *)(v28 + 56) + 1);
              *(_DWORD *)(v28 + 56) = v30;
              if ( (unsigned int)v30 >= a3 )
                goto LABEL_50;
            }
          }
          else
          {
            v12 = -1072431093;
            LogError(3222536203LL);
            AcpiDiagTraceAmlError(v15, 3222536203LL);
            PrintDebugMessage(12, a3, *(_DWORD *)(v28 + 60), 0, 0LL);
          }
        }
LABEL_26:
        FreeContext(v15);
        return v12;
      }
      v12 = PushPost((_DWORD)v15, (unsigned int)ProcessEvalObj, v10, 0, (__int64)(v15 + 128));
      if ( v12 )
        goto LABEL_26;
      Object = ReadObject(v15, v10 + 64, v15 + 128);
    }
    v12 = Object;
    if ( Object != 32772 )
      return (unsigned int)RestartContext((__int64)v15, 0);
    goto LABEL_26;
  }
  return v12;
}
