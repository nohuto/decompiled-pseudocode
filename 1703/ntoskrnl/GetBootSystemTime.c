/*
 * XREFs of GetBootSystemTime @ 0x140811A90
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rtt
  unsigned __int64 v10; // r9
  __int64 QuadPart; // rbx
  bool v12; // zf
  LARGE_INTEGER Time; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 2280);
  if ( (*(_BYTE *)(a1 + 2304) & 1) == 0 && !ExpRealTimeIsUniversal )
    v3 += ExpTimeZoneBias;
  v5 = ((__int64 (__fastcall *)(unsigned __int64 *))off_14033B500)(&v15) - *(_QWORD *)(a1 + 2288);
  v6 = 10000000 * v5;
  if ( is_mul_ok(v5, 0x989680uLL) )
  {
    v7 = 0;
  }
  else
  {
    v6 = -1LL;
    v7 = -1073741675;
  }
  v9 = v6;
  v8 = v6 / v15;
  v10 = v9 / v15;
  if ( v7 < 0 )
  {
    v8 = 10000000 * (v5 / v15);
    v10 = v8 + 10000000 * (v5 % v15) / v15;
  }
  QuadPart = v10 + v3;
  v12 = (*(_BYTE *)(a1 + 2304) & 2) == 0;
  Time.QuadPart = QuadPart;
  if ( v12 )
  {
    if ( !ExpRealTimeIsUniversal )
      Time.QuadPart = QuadPart - ExpTimeZoneBias;
    RtlTimeToTimeFields(&Time, &TimeFields);
    LOBYTE(v8) = HalSetRealTimeClock(&TimeFields);
  }
  else if ( (qword_140344B38 & 4) == 0 )
  {
    LOBYTE(v8) = HalQueryRealTimeClock(&TimeFields);
    if ( (_BYTE)v8 )
    {
      LOBYTE(v8) = RtlTimeFieldsToTime(&TimeFields, &Time);
      if ( !(_BYTE)v8 || ExpRealTimeIsUniversal )
        QuadPart = Time.QuadPart;
      else
        QuadPart = ExpTimeZoneBias + Time.QuadPart;
    }
  }
  *a2 = QuadPart;
  return v8;
}
