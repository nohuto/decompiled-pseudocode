/*
 * XREFs of RtlRaiseException @ 0x14023BBE0
 * Callers:
 *     RaiseException @ 0x14016E690 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x1401EB658 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1401EB6DC (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401EB784 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x14023E048 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x14000A970 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14000B020 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140180A60 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x140189570 (RtlpCaptureContext.c)
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
