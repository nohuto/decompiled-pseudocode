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

void __fastcall TppTimerpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], a2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(a1, v3, 0LL) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
      RtlpTpETWCallbackStart(v3[18], a2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v14, v3[10], v3[11], v3[13]);
    *(_QWORD *)(a1 + 88) = v3[10];
    *(_QWORD *)(a1 + 96) = v3[11];
    v10 = (__int64 (__fastcall *)(__int64, __int64))v3[10];
    v11 = v3[11];
    if ( v10 == RtlpTpTimerCallback )
      RtlpTpTimerCallback(a1, v11);
    else
      ((void (__fastcall *)(__int64, __int64, __int64 *))v10)(a1, v11, v3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], a2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData(v14);
  }
}
