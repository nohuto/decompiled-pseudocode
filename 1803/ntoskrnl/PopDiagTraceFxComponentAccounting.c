/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x140767820
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char PopDiagTraceFxComponentAccounting(__int64 a1, int a2, __int64 a3, ...)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  char v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  int *v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  va_list v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+84h] [rbp-84h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  char *v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-58h]
  int v23; // [rsp+B4h] [rbp-54h]
  _DWORD *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  _DWORD v28[2]; // [rsp+D0h] [rbp-38h] BYREF
  int *v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  __int64 v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  __int64 v39; // [rsp+138h] [rbp+30h] BYREF
  int v40; // [rsp+140h] [rbp+38h] BYREF
  __int64 v41; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  va_list va1; // [rsp+158h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  v3 = &retaddr;
  v40 = a2;
  v39 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_ACCOUNTING);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v13 = &v39;
      v15 = &v40;
      va_copy(v17, va);
      v14 = 8LL;
      v16 = 4LL;
      v18 = 8;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_COMPONENT_ACCOUNTING, 0LL, 4u, &UserData);
      if ( *(_DWORD *)(a3 + 12) != -1 && pCallbackContext.LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
        if ( (_BYTE)v3 )
        {
          v23 = 0;
          v9 = PopWnfCsEnterScenarioId;
          v10 = v40;
          v11 = v41;
          v21 = &v9;
          v22 = 1;
          v6 = *(_QWORD *)(v39 + 48);
          v7 = *(unsigned __int16 *)(v39 + 40);
          v26 = 0;
          v28[1] = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v27 = v6;
          v29 = &v10;
          v32 = &v11;
          v35 = a3 + 88;
          v24 = v28;
          v25 = 2;
          v28[0] = v7;
          v30 = 4;
          v33 = 8;
          v36 = 40;
          LOBYTE(v3) = TlgWrite(&pCallbackContext, &unk_14030BBFA, 0LL, 0LL, 8u, &pData);
        }
      }
    }
  }
  return (char)v3;
}
