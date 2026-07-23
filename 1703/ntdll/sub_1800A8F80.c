/*
 * XREFs of sub_1800A8F80 @ 0x1800A8F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     ZwCallbackReturn @ 0x1800A53A0 (ZwCallbackReturn.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 */

__int64 __fastcall sub_1800A8F80(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, PCONTEXT ContextRecord)
{
  DWORD Status; // [rsp+30h] [rbp-8h]
  NTSTATUS Statusa; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      Status = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &loc_1800A9034,
        ExceptionRecord,
        (PVOID)ExceptionRecord->ExceptionCode,
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
    sub_1800D6480(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
