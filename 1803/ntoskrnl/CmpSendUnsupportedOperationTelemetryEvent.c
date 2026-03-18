/*
 * XREFs of CmpSendUnsupportedOperationTelemetryEvent @ 0x1406FB32C
 * Callers:
 *     CmpFlushUnsupportedOperationTelemetry @ 0x14057DD64 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void CmpSendUnsupportedOperationTelemetryEvent()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_140397090.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v3 = v0;
      v6 = 4;
      v9 = 4;
      TlgWrite(&stru_140397090, &unk_14030895D, 0LL, 0LL, 4u, &pData);
    }
  }
}
