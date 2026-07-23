/*
 * XREFs of sub_18010580C @ 0x18010580C
 * Callers:
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

void __fastcall sub_18010580C(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  void (__fastcall *v3)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int); // r9
  void (__fastcall *v4)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int); // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == sub_1800132E0 )
      v4 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD *, PTP_WAIT, int))(*(_QWORD *)(a3 + 88) + 32LL);
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
