/*
 * XREFs of RtlRaiseException @ 0x140286F30
 * Callers:
 *     RaiseException @ 0x14018CD50 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x14022DB10 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x14022DB9C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14022DC60 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x140289E40 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1400CFE60 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x14012EA90 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x14012EE80 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401AA080 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1401B2CD0 (RtlpCaptureContext.c)
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
