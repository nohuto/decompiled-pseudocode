/*
 * XREFs of ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x1C0136210
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0134D98 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(void **this, struct _KTHREAD *a2)
{
  void *v2; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *this;
  if ( !*this )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v2 = *this;
  }
  Object[0] = a2;
  Object[1] = v2;
  return KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL) >= 1;
}
