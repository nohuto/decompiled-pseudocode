/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A3D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     ZwCallbackReturn @ 0x1800A0160 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  int Status; // [rsp+30h] [rbp-8h]
  NTSTATUS Statusa; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      Status = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(Status);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      Statusa = ZwCallbackReturn(0LL, 0, ExceptionRecord->ExceptionCode);
      RtlRaiseStatus(Statusa);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
