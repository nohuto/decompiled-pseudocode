/*
 * XREFs of ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C0197C18
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSysQueueLockedRetryFailed()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v6; // [rsp+60h] [rbp-48h]
  int v7; // [rsp+68h] [rbp-40h]
  int v8; // [rsp+6Ch] [rbp-3Ch]
  int *v9; // [rsp+70h] [rbp-38h]
  int v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+7Ch] [rbp-2Ch]

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v9 = &v4;
      v3 = v2;
      v7 = 4;
      v4 = (int)v1;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAE29, v0, v1, 4u, &pData);
    }
  }
}
