/*
 * XREFs of PoTraceForceIdleReset @ 0x14022FB6C
 * Callers:
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+17h] BYREF
  int *v6; // [rsp+70h] [rbp+37h]
  int v7; // [rsp+78h] [rbp+3Fh]
  int v8; // [rsp+7Ch] [rbp+43h]
  int v9; // [rsp+A0h] [rbp+67h] BYREF

  v9 = a1;
  if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
  {
    v8 = 0;
    v6 = &v3;
    v3 = v1;
    v7 = 4;
    TlgWrite(&hProvider, &unk_1402AD2C2, 0LL, 0LL, 3u, &pData);
  }
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      EtwWrite(v2, &POP_ETW_FORCEIDLE_RESET, 0LL, 1u, &UserData);
    }
  }
}
