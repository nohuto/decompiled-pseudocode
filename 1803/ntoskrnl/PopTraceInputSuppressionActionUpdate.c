/*
 * XREFs of PopTraceInputSuppressionActionUpdate @ 0x14076A11C
 * Callers:
 *     PopEvaluateInputSuppressionAction @ 0x140613CE0 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PopTraceInputSuppressionActionUpdate(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v7; // r9
  char v8; // r10
  char v9; // r11
  char v10; // [rsp+30h] [rbp-59h] BYREF
  char v11; // [rsp+31h] [rbp-58h] BYREF
  char v12; // [rsp+32h] [rbp-57h] BYREF
  bool v13; // [rsp+33h] [rbp-56h] BYREF
  char v14; // [rsp+34h] [rbp-55h] BYREF
  int v15; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  char *v17; // [rsp+60h] [rbp-29h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  char *v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  char *v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  bool *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  char *v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  int *v27; // [rsp+B0h] [rbp+27h]
  __int64 v28; // [rsp+B8h] [rbp+2Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v14 = PopEnableInputSuppression;
      v13 = v8 == 0;
      v15 = a6;
      v17 = &v10;
      v19 = &v11;
      v21 = &v12;
      v23 = &v13;
      v25 = &v14;
      v27 = &v15;
      v10 = a1;
      v11 = v9;
      v12 = v7;
      v18 = 1LL;
      v20 = 1LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 1LL;
      v28 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14030C1B5, 0LL, 0LL, 8u, &pData);
    }
  }
}
