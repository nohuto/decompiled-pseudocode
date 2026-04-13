/*
 * XREFs of __report_rangecheckfailure @ 0x1800C0BF4
 * Callers:
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800930A0 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     __raise_securityfailure @ 0x1800C0A4C (__raise_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-30h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-20h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp-18h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_18017B660 = ContextRecord.Rip;
  dword_18017B650 = -1073740791;
  dword_18017B654 = 1;
  dword_18017B668 = 1;
  qword_18017B670[0] = 8LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
