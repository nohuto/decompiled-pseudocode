/*
 * XREFs of RtlUnwind @ 0x1800F9610
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  struct _CONTEXT ContextRecord; // [rsp+30h] [rbp-4E8h] BYREF

  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, &ContextRecord, 0LL);
}
