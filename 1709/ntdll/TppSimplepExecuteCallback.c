/*
 * XREFs of TppSimplepExecuteCallback @ 0x18000B180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x180001AE0 (TppETWCallbackDequeue.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppSimplepExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], a2, v3[10], v3[11], v3[13]);
  result = TppWorkCallbackPrologRelease(a1, v3, 1LL);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      RtlpTpETWCallbackStart(v3[18], a2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v13, v3[10], v3[11], v3[13]);
    ((void (__fastcall *)(__int64, __int64))v3[10])(a1, v3[11]);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], a2, v3[10], v3[11], v3[13]);
    return TppCompleteThreadData(v13);
  }
  return result;
}
