/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0044158
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  char v2; // r10
  char v3; // [rsp+30h] [rbp-68h] BYREF
  char v4; // [rsp+31h] [rbp-67h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v9 = &v4;
      v3 = v2;
      v7 = 1;
      v4 = (char)v1;
      v10 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7D7B, v0, v1, 4u, &pData);
    }
  }
}
