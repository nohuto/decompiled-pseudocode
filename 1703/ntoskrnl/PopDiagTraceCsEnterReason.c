/*
 * XREFs of PopDiagTraceCsEnterReason @ 0x1406CC940
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char PopDiagTraceCsEnterReason()
{
  _UNKNOWN **v0; // rax
  char v1; // bl
  int v2; // esi
  int v3; // r14d
  int v4; // edi
  REGHANDLE v5; // r15
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C8h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B8h] BYREF
  int v11; // [rsp+54h] [rbp-B4h] BYREF
  int v12; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v16; // [rsp+78h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+84h] [rbp-84h]
  int *v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  char *v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+A0h] [rbp-68h]
  int v24; // [rsp+A4h] [rbp-64h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+E0h] [rbp-28h]
  int v28; // [rsp+E4h] [rbp-24h]
  int *v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+F0h] [rbp-18h]
  int v31; // [rsp+F4h] [rbp-14h]
  int *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+104h] [rbp-4h]
  __int64 *v35; // [rsp+108h] [rbp+0h]
  int v36; // [rsp+110h] [rbp+8h]
  int v37; // [rsp+114h] [rbp+Ch]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v0 = &retaddr;
  v1 = PopWnfCsEnterScenarioId;
  v2 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v3 = (unsigned __int8)PopLidOpened;
  v4 = PopPdcLastCsEnterReason;
  v7 = PopWnfCsEnterScenarioId;
  v10 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v11 = (unsigned __int8)PopLidOpened;
  v9 = PopPdcLastCsEnterReason;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v0) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( (_BYTE)v0 )
    {
      UserData.Reserved = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v16 = &v11;
      v19 = &v10;
      v22 = &v7;
      v17 = 4;
      v20 = 4;
      v23 = 1;
      LOBYTE(v0) = EtwWrite(v5, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 4u, &UserData);
      v4 = v9;
      v2 = v10;
      v3 = v11;
      v1 = PopWnfCsEnterScenarioId;
    }
  }
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v0) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v0 )
    {
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v26 = &v8;
      v29 = &v12;
      v32 = &v13;
      v35 = &v14;
      LOBYTE(v8) = v1;
      v12 = v4;
      v13 = v3;
      LODWORD(v14) = v2;
      v27 = 1;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      LOBYTE(v0) = TlgWrite(&hProvider, &unk_1402ADB83, 0LL, 0LL, 6u, &pData);
    }
  }
  return (char)v0;
}
