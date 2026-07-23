/*
 * XREFs of sub_18010861C @ 0x18010861C
 * Callers:
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

void __fastcall sub_18010861C(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  void (__fastcall *v3)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int); // r9
  void (__fastcall *v4)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int); // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == sub_180076EF0 )
      v4 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, __int64 *, PTP_WAIT, unsigned int))(*(_QWORD *)(a3 + 88) + 32LL);
    else
      v4 = 0LL;
    if ( v4 )
      v3 = v4;
    ExceptionRecord.ExceptionInformation[4] = (ULONG_PTR)v3;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
