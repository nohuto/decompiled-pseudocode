/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C0134F4C
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0133EB4 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v9; // eax

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v7 = *(unsigned int *)(a1 + 32);
  if ( v6 == (_DWORD)v7 )
    return 1LL;
  v9 = *(_DWORD *)(a1 + 36);
  if ( v6 != v9 )
    return 2LL;
  if ( (_DWORD)v7 == v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v4);
  return 0LL;
}
