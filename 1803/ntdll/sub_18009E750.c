/*
 * XREFs of sub_18009E750 @ 0x18009E750
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x18009AB60 (ZwCallbackReturn.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 */

__int64 __fastcall sub_18009E750(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, PCONTEXT ContextRecord)
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
        &loc_18009E804,
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
    sub_1800CBC40(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
