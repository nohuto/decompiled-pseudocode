/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8
 * Callers:
 *     IoQueuesCreation @ 0x1C0003C34 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003EAC (IoQueuesDeletion.c)
 *     NVMeControllerIdentify @ 0x1C000D674 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000D7E0 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000DC18 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000DED0 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E054 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E15C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000E2C0 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000E45C (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000E5A0 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000E67C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000E74C (NVMeConfigAsyncEvent.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000ECD0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F224 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000F5C0 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C000115C (RequestPendingCompletion.c)
 *     NVMeRequestComplete @ 0x1C00026E0 (NVMeRequestComplete.c)
 *     NVMeLogTelemetry @ 0x1C000CE9C (NVMeLogTelemetry.c)
 *     ProcessCompletionQueues @ 0x1C0010094 (ProcessCompletionQueues.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v8; // rbx
  char v9; // di
  unsigned int v10; // r13d
  bool v11; // al
  unsigned int v12; // edx
  _DWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int8 v16; // r15
  unsigned int v17; // edx
  unsigned __int8 v18; // bl
  unsigned int v19; // edi
  __int64 v20; // r14
  unsigned int v21; // r11d
  unsigned int v22; // r12d
  int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int64 *v26; // rax
  __int64 result; // rax
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
  if ( (v15 & 0xFFF) != 0 )
    v15 = v15 - (v15 & 0xFFF) + 4096;
  v16 = *(_BYTE *)(a2 + 3);
  v17 = -1;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  v21 = -1;
  v22 = -1;
  if ( v15 )
  {
    v21 = (unsigned __int8)*(_DWORD *)(v15 + 4096);
    v18 = *(_BYTE *)(v15 + 4245) & 1;
    if ( v18 && (v21 == 2 || v21 - 9 <= 1) )
      v19 = (unsigned __int8)*(_DWORD *)(v15 + 4136);
    v23 = *(_DWORD *)(v15 + 4100);
    if ( v23 == -1 || (v24 = *(_DWORD *)(a1 + 148), v25 = 0, !v24) )
    {
LABEL_44:
      v20 = 0LL;
    }
    else
    {
      v26 = (__int64 *)(a1 + 1184);
      while ( 1 )
      {
        v20 = *v26;
        if ( *v26 )
        {
          if ( *(_DWORD *)(v20 + 16) == v23 )
            break;
        }
        ++v25;
        ++v26;
        if ( v25 >= v24 )
          goto LABEL_44;
      }
    }
  }
  if ( v10 < v40 )
  {
    if ( v15 )
    {
      v17 = (*(unsigned __int16 *)(v15 + 4242) >> 9) & 7;
      v22 = (unsigned __int8)(*(unsigned __int16 *)(v15 + 4242) >> 1);
    }
  }
  else
  {
    v16 = 9;
  }
  result = NVMeLogTelemetry(
             a1,
             v20,
             v19,
             v21,
             v28,
             v29,
             v30,
             v31,
             v32,
             v40,
             v33,
             v10,
             v34,
             v16,
             v35,
             v18,
             v36,
             v21,
             v37,
             v19,
             v38,
             v17,
             v39,
             v22);
  if ( v10 >= v40 )
  {
    *(_BYTE *)(a2 + 3) = 9;
    return NVMeRequestComplete(a1, a2);
  }
  return result;
}
