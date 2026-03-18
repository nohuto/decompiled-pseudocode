/*
 * XREFs of ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C01965A0
 * Callers:
 *     ?_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C01D43EC (-_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0Utag.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingEdgePalmRejection(struct tagPOINT a1, struct tagPOINT a2)
{
  const GUID *v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v10; // [rsp+60h] [rbp-9h]
  __int64 v11; // [rsp+68h] [rbp-1h]
  int *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  char *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
    {
      v6 = v3;
      v10 = &v6;
      v12 = &v7;
      v5 = (const GUID *)HIDWORD(v3);
      v14 = &v8;
      v8 = v4;
      v16 = (char *)&v8 + 4;
      v11 = 4LL;
      v7 = (int)v5;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAA9B, v2, v5, 6u, &pData);
    }
  }
}
