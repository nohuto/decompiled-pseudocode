/*
 * XREFs of RtlRaiseException @ 0x140251460
 * Callers:
 *     RaiseException @ 0x140162E90 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x1401F09B4 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1401F0A40 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401F0AF4 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x140253E60 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1400D5980 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x14012C5E0 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140180440 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x140189070 (RtlpCaptureContext.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  NTSTATUS v2; // ebx
  DWORD64 Rip; // rsi
  struct _RUNTIME_FUNCTION *v4; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-528h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-520h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-518h] BYREF
  CONTEXT Context; // [rsp+60h] [rbp-508h] BYREF

  v2 = -1073741786;
  RtlpCaptureContext();
  Rip = Context.Rip;
  v4 = RtlLookupFunctionEntry(Context.Rip, &ImageBase, 0LL);
  if ( !v4 )
LABEL_4:
    RtlRaiseStatus(v2);
  RtlVirtualUnwind(0, ImageBase, Rip, v4, &Context, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = (void *)Context.Rip;
  if ( !RtlDispatchException(ExceptionRecord, &Context) )
  {
    v2 = ZwRaiseException(ExceptionRecord, &Context, 0);
    goto LABEL_4;
  }
}
