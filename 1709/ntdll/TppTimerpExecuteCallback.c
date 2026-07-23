/*
 * XREFs of TppTimerpExecuteCallback @ 0x18000F4D0
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x180001AE0 (TppETWCallbackDequeue.c)
 *     RtlpTpTimerCallback @ 0x18000BD60 (RtlpTpTimerCallback.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppTimerpExecuteCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  void (__fastcall *v8)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  void *v9; // rdx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], a2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStart(v3[18], a2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v10, v3[10], v3[11], v3[13]);
    *((_QWORD *)Instance + 11) = v3[10];
    *((_QWORD *)Instance + 12) = v3[11];
    v8 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))v3[10];
    v9 = (void *)v3[11];
    if ( v8 == RtlpTpTimerCallback )
      RtlpTpTimerCallback(Instance, v9, (PTP_TIMER)v3);
    else
      v8(Instance, v9, (PTP_TIMER)v3);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], a2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData(v10);
  }
}
