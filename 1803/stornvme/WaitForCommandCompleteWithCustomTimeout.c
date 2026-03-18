/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28
 * Callers:
 *     IoQueuesCreation @ 0x1C0003F00 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0004170 (IoQueuesDeletion.c)
 *     NVMeControllerIdentify @ 0x1C000E2A8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000E414 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E864 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000EB30 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000ECB4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000EDB8 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EF30 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000F0D8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000F228 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000F304 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000F3D4 (NVMeConfigAsyncEvent.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F970 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0010158 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0010240 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C000108C (RequestPendingCompletion.c)
 *     NVMeRequestComplete @ 0x1C00028FC (NVMeRequestComplete.c)
 *     NVMeLogTelemetry @ 0x1C000DABC (NVMeLogTelemetry.c)
 *     ProcessCompletionQueues @ 0x1C0011D00 (ProcessCompletionQueues.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // bp
  bool v11; // r8
  __int64 result; // rax
  unsigned int v13; // r13d
  unsigned int v14; // edx
  _DWORD *v15; // rax
  unsigned int v16; // edx
  char v17; // r9
  __int64 v18; // rcx
  unsigned __int8 v19; // r15
  unsigned int v20; // edx
  unsigned __int8 v21; // bl
  unsigned int v22; // edi
  __int64 v23; // rbp
  unsigned int v24; // r11d
  unsigned int v25; // r12d
  int v26; // r10d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  __int64 *v29; // rax
  int v30; // [rsp+20h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D0h]
  int v32; // [rsp+30h] [rbp-C8h]
  int v33; // [rsp+38h] [rbp-C0h]
  int v34; // [rsp+40h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-A8h]
  int v36; // [rsp+60h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp-48h]
  char v42; // [rsp+100h] [rbp+8h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v9 = *(_QWORD *)(a1 + 120);
  v10 = 0;
  v11 = 1;
  v42 = 0;
  result = *(unsigned int *)(v9 + 40);
  if ( *(_QWORD *)(v9 + 40) == -1LL )
  {
    *(_BYTE *)(a2 + 3) = 8;
  }
  else
  {
    v13 = 0;
    if ( !a4 )
      goto LABEL_27;
    do
    {
      if ( !v11 )
        break;
      if ( a3 && !v10 && RequestPendingCompletion(a1, 0) )
      {
        ProcessCompletionQueues(a1, 0, a3);
        v10 = 1;
      }
      StorPortStallExecution(1000LL);
      if ( a2 == a1 + 600 )
        goto LABEL_20;
      v14 = 0;
      while ( a2 != 104LL * v14 + a1 + 704 )
      {
        if ( ++v14 >= 4 )
        {
          v11 = (*(_BYTE *)(v8 + 4253) & 8) == 0;
          goto LABEL_25;
        }
      }
      if ( a2 == a1 + 600 )
      {
LABEL_20:
        v15 = (_DWORD *)(a1 + 592);
      }
      else
      {
        v16 = 0;
        while ( a2 != 104LL * v16 + a1 + 704 )
        {
          if ( ++v16 >= 4 )
            goto LABEL_24;
        }
        v15 = (_DWORD *)(104LL * v16 + a1 + 696);
      }
      if ( v15 && *v15 == 1 )
        v11 = 1;
      else
LABEL_24:
        v11 = 0;
LABEL_25:
      ++v13;
    }
    while ( v13 < a4 );
    if ( v13 < a4 )
    {
      v17 = 0;
    }
    else
    {
LABEL_27:
      v17 = 1;
      v42 = 1;
      *(_BYTE *)(a2 + 3) = (*(_QWORD *)(*(_QWORD *)(a1 + 120) + 40LL) != -1LL) + 8;
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v18 = *(_QWORD *)(a2 + 104);
    else
      v18 = *(_QWORD *)(a2 + 56);
    result = v18 & 0xFFF;
    if ( (v18 & 0xFFF) != 0 )
      v18 = v18 - result + 4096;
    v19 = *(_BYTE *)(a2 + 3);
    v20 = -1;
    v21 = 0;
    v22 = 0;
    v23 = 0LL;
    v24 = -1;
    v25 = -1;
    if ( v13 >= 0xFA )
    {
      if ( v18 )
      {
        v24 = (unsigned __int8)*(_DWORD *)(v18 + 4096);
        v21 = *(_BYTE *)(v18 + 4253) & 1;
        if ( v21 && (v24 == 2 || v24 - 9 <= 1) )
          v22 = (unsigned __int8)*(_DWORD *)(v18 + 4136);
        v26 = *(_DWORD *)(v18 + 4100);
        if ( v26 == -1 || (v27 = *(_DWORD *)(a1 + 156), v28 = 0, !v27) )
        {
LABEL_50:
          v23 = 0LL;
        }
        else
        {
          v29 = (__int64 *)(a1 + 1224);
          while ( 1 )
          {
            v23 = *v29;
            if ( *v29 )
            {
              if ( *(_DWORD *)(v23 + 16) == v26 )
                break;
            }
            ++v28;
            ++v29;
            if ( v28 >= v27 )
              goto LABEL_50;
          }
        }
      }
      if ( v13 < a4 )
      {
        if ( v18 )
        {
          v20 = (*(unsigned __int16 *)(v18 + 4250) >> 9) & 7;
          v25 = (unsigned __int8)(*(unsigned __int16 *)(v18 + 4250) >> 1);
        }
      }
      else
      {
        v19 = 9;
      }
      result = NVMeLogTelemetry(
                 a1,
                 v23,
                 v22,
                 v24,
                 v30,
                 v31,
                 v32,
                 v33,
                 v34,
                 a4,
                 v35,
                 v13,
                 v36,
                 v19,
                 v37,
                 v21,
                 v38,
                 v24,
                 v39,
                 v22,
                 v40,
                 v20,
                 v41,
                 v25);
      v17 = v42;
    }
    if ( v17 )
      return NVMeRequestComplete(a1, a2);
  }
  return result;
}
