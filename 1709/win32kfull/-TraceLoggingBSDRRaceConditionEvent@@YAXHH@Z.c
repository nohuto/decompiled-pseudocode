/*
 * XREFs of ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C014225C
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingBSDRRaceConditionEvent(int a1, int a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v11;
      v8 = &v12;
      v6 = 4;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8313, v2, v3, 4u, &pData);
    }
  }
}
