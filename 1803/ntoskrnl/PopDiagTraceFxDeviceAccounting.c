/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x14027C6AC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  char v9; // [rsp+48h] [rbp-69h] BYREF
  __int64 v10; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-49h]
  int v13; // [rsp+70h] [rbp-41h]
  int v14; // [rsp+74h] [rbp-3Dh]
  __int64 *v15; // [rsp+78h] [rbp-39h]
  int v16; // [rsp+80h] [rbp-31h]
  int v17; // [rsp+84h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  char *v19; // [rsp+A8h] [rbp-9h]
  int v20; // [rsp+B0h] [rbp-1h]
  int v21; // [rsp+B4h] [rbp+3h]
  _DWORD *v22; // [rsp+B8h] [rbp+7h]
  int v23; // [rsp+C0h] [rbp+Fh]
  int v24; // [rsp+C4h] [rbp+13h]
  __int64 v25; // [rsp+C8h] [rbp+17h]
  _DWORD v26[2]; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 *v27; // [rsp+D8h] [rbp+27h]
  int v28; // [rsp+E0h] [rbp+2Fh]
  int v29; // [rsp+E4h] [rbp+33h]
  __int64 v30; // [rsp+E8h] [rbp+37h]
  int v31; // [rsp+F0h] [rbp+3Fh]
  int v32; // [rsp+F4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+118h] [rbp+67h] BYREF
  __int64 v35; // [rsp+128h] [rbp+77h] BYREF

  v3 = &retaddr;
  v35 = a3;
  v34 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_ACCOUNTING);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v12 = &v34;
      v13 = 8;
      v15 = &v35;
      v16 = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &POP_ETW_EVENT_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      if ( *(_DWORD *)(a2 + 12) < 5u && pCallbackContext.LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
        if ( (_BYTE)v3 )
        {
          v21 = 0;
          v9 = PopWnfCsEnterScenarioId;
          v10 = v35;
          v19 = &v9;
          v20 = 1;
          v6 = *(_QWORD *)(v34 + 48);
          v7 = *(unsigned __int16 *)(v34 + 40);
          v24 = 0;
          v26[1] = 0;
          v29 = 0;
          v32 = 0;
          v25 = v6;
          v27 = &v10;
          v30 = a2 + 88;
          v22 = v26;
          v23 = 2;
          v26[0] = v7;
          v28 = 8;
          v31 = 40;
          LOBYTE(v3) = TlgWrite(&pCallbackContext, &unk_14030B73A, 0LL, 0LL, 7u, &pData);
        }
      }
    }
  }
  return (char)v3;
}
