/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C0135110
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0134D98 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C00141F0 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KEVENT *KernelEvent; // rax
  bool v9; // zf

  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *((_DWORD *)this + 9) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  *(_OWORD *)((char *)this + 88) = 0uLL;
  *((_QWORD *)this + 13) = 0LL;
  KernelEvent = (struct _KEVENT *)*((_QWORD *)this + 14);
  v9 = KernelEvent == 0LL;
  if ( !KernelEvent )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 14) = KernelEvent;
    v9 = KernelEvent == 0LL;
  }
  if ( KernelEvent )
  {
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  }
  return !v9;
}
