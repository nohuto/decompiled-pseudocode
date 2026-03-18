/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C
 * Callers:
 *     IoQueuesCreation @ 0x1C0003EDC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C000414C (IoQueuesDeletion.c)
 *     NVMeControllerIdentify @ 0x1C000DDE8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DF54 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E398 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000E658 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E7DC (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E8E4 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EA50 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000EBEC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000ED30 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000EE0C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000EEDC (NVMeConfigAsyncEvent.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F460 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F9C4 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000FC78 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000FD60 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000FE48 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeSyncHostTime @ 0x1C001238C (NVMeSyncHostTime.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001088 (RequestPendingCompletion.c)
 *     NVMeRequestComplete @ 0x1C0002980 (NVMeRequestComplete.c)
 *     NVMeLogTelemetry @ 0x1C000D608 (NVMeLogTelemetry.c)
 *     ProcessCompletionQueues @ 0x1C0011818 (ProcessCompletionQueues.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rbx
  char v9; // di
  unsigned int v10; // r15d
  bool v11; // al
  unsigned int v12; // edx
  _DWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned __int8 v17; // r12
  unsigned int v18; // edx
  unsigned __int8 v19; // bl
  unsigned int v20; // edi
  __int64 v21; // r14
  unsigned int v22; // r11d
  unsigned int v23; // r13d
  int v24; // r10d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  __int64 *v27; // rax
  int v28; // [rsp+20h] [rbp-C8h]
  int v29; // [rsp+28h] [rbp-C0h]
  int v30; // [rsp+30h] [rbp-B8h]
  int v31; // [rsp+38h] [rbp-B0h]
  int v32; // [rsp+40h] [rbp-A8h]
  int v33; // [rsp+50h] [rbp-98h]
  int v34; // [rsp+60h] [rbp-88h]
  int v35; // [rsp+70h] [rbp-78h]
  int v36; // [rsp+80h] [rbp-68h]
  int v37; // [rsp+90h] [rbp-58h]
  int v38; // [rsp+A0h] [rbp-48h]
  int v39; // [rsp+B0h] [rbp-38h]
  unsigned int v40; // [rsp+108h] [rbp+20h]

  v40 = a4;
  v4 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  if ( (_DWORD)a4 )
  {
    do
    {
      if ( !v11 )
        break;
      if ( a3 && !v9 && RequestPendingCompletion(a1, 0) )
      {
        ProcessCompletionQueues(a1, 0, a3);
        v9 = 1;
      }
      StorPortExtendedFunction(81LL, a1, 1000LL, a4);
      if ( a2 == a1 + 568 )
        goto LABEL_18;
      v12 = 0;
      while ( a2 != 104LL * v12 + a1 + 672 )
      {
        if ( ++v12 >= 4 )
        {
          v11 = (*(_BYTE *)(v8 + 4245) & 8) == 0;
          goto LABEL_23;
        }
      }
      if ( a2 == a1 + 568 )
      {
LABEL_18:
        v13 = (_DWORD *)(a1 + 560);
      }
      else
      {
        v14 = 0;
        while ( a2 != 104LL * v14 + a1 + 672 )
        {
          if ( ++v14 >= 4 )
            goto LABEL_22;
        }
        v13 = (_DWORD *)(104LL * v14 + a1 + 664);
      }
      if ( v13 && *v13 == 1 )
        v11 = 1;
      else
LABEL_22:
        v11 = 0;
LABEL_23:
      ++v10;
    }
    while ( v10 < v4 );
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v15 = *(_QWORD *)(a2 + 104);
  else
    v15 = *(_QWORD *)(a2 + 56);
  result = v15 & 0xFFF;
  if ( (v15 & 0xFFF) != 0 )
    v15 = v15 - result + 4096;
  v17 = *(_BYTE *)(a2 + 3);
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v22 = -1;
  v23 = -1;
  if ( v10 >= 0xFA )
  {
    if ( v15 )
    {
      v22 = (unsigned __int8)*(_DWORD *)(v15 + 4096);
      v19 = *(_BYTE *)(v15 + 4245) & 1;
      if ( v19 && (v22 == 2 || v22 - 9 <= 1) )
        v20 = (unsigned __int8)*(_DWORD *)(v15 + 4136);
      v24 = *(_DWORD *)(v15 + 4100);
      if ( v24 == -1 || (v25 = *(_DWORD *)(a1 + 148), v26 = 0, !v25) )
      {
LABEL_45:
        v21 = 0LL;
      }
      else
      {
        v27 = (__int64 *)(a1 + 1184);
        while ( 1 )
        {
          v21 = *v27;
          if ( *v27 )
          {
            if ( *(_DWORD *)(v21 + 16) == v24 )
              break;
          }
          ++v26;
          ++v27;
          if ( v26 >= v25 )
            goto LABEL_45;
        }
      }
    }
    if ( v10 < v40 )
    {
      if ( v15 )
      {
        v18 = (*(unsigned __int16 *)(v15 + 4242) >> 9) & 7;
        v23 = (unsigned __int8)(*(unsigned __int16 *)(v15 + 4242) >> 1);
      }
    }
    else
    {
      v17 = 9;
    }
    result = NVMeLogTelemetry(
               a1,
               v21,
               v20,
               v22,
               v28,
               v29,
               v30,
               v31,
               v32,
               v40,
               v33,
               v10,
               v34,
               v17,
               v35,
               v19,
               v36,
               v22,
               v37,
               v20,
               v38,
               v18,
               v39,
               v23);
  }
  if ( v10 >= v40 )
  {
    *(_BYTE *)(a2 + 3) = 9;
    return NVMeRequestComplete(a1, a2);
  }
  return result;
}
