/*
 * XREFs of PoTraceForceIdleReset @ 0x14027AB04
 * Callers:
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+1Fh] BYREF
  int *v6; // [rsp+78h] [rbp+3Fh]
  int v7; // [rsp+80h] [rbp+47h]
  int v8; // [rsp+84h] [rbp+4Bh]
  int v9; // [rsp+A0h] [rbp+67h] BYREF

  v9 = a1;
  if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v8 = 0;
    v6 = &v3;
    v3 = v1;
    v7 = 4;
    TlgWrite(&pCallbackContext, &unk_14030CA21, 0LL, 0LL, 3u, &pData);
  }
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      EtwWriteEx(v2, &POP_ETW_FORCEIDLE_RESET, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
