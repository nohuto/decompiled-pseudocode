/*
 * XREFs of RtlpTpTimerCallback @ 0x18000BD60
 * Callers:
 *     TppTimerpExecuteCallback @ 0x18000F4D0 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180088908 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      RtlpTpImpersonate();
    v4 = NtCurrentTeb();
    v5 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3, a2) )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStart(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppStartThreadData(&v11, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v4->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v10 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v10);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    return TppCompleteThreadData(v11);
  }
  return result;
}
