/*
 * XREFs of CmpSendUnsupportedOperationTelemetryEvent @ 0x1406981A8
 * Callers:
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140596294 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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

  if ( stru_1403549F0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v3 = v0;
      v6 = 4;
      v9 = 4;
      TlgWrite(&stru_1403549F0, &unk_1402CF042, 0LL, 0LL, 4u, &pData);
    }
  }
}
