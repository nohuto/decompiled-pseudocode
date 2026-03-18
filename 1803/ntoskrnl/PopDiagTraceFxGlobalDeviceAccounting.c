/*
 * XREFs of PopDiagTraceFxGlobalDeviceAccounting @ 0x14027C954
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopDiagTraceFxGlobalDeviceAccounting()
{
  __int64 v0; // r9
  __int64 v1; // r10
  char v2; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  __int64 *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  __int64 v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v2 = PopWnfCsEnterScenarioId;
      v5 = &v2;
      v7 = &v3;
      v3 = v1;
      v6 = 1LL;
      v8 = 8LL;
      v9 = v0;
      v10 = 40LL;
      TlgWrite(&pCallbackContext, &unk_14030B7A4, 0LL, 0LL, 5u, &pData);
    }
  }
}
