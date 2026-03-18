/*
 * XREFs of PopBatteryTracePercentageRemaining @ 0x1406FE90C
 * Callers:
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTracePercentageRemaining(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v6; // rbx
  BOOL v8; // [rsp+38h] [rbp-89h] BYREF
  int v9; // [rsp+3Ch] [rbp-85h] BYREF
  int v10; // [rsp+40h] [rbp-81h] BYREF
  BOOL v11; // [rsp+44h] [rbp-7Dh] BYREF
  int v12; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-69h] BYREF
  int *v14; // [rsp+68h] [rbp-59h]
  int v15; // [rsp+70h] [rbp-51h]
  int v16; // [rsp+74h] [rbp-4Dh]
  BOOL *v17; // [rsp+78h] [rbp-49h]
  int v18; // [rsp+80h] [rbp-41h]
  int v19; // [rsp+84h] [rbp-3Dh]
  int *v20; // [rsp+88h] [rbp-39h]
  int v21; // [rsp+90h] [rbp-31h]
  int v22; // [rsp+94h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  int *v24; // [rsp+B8h] [rbp-9h]
  int v25; // [rsp+C0h] [rbp-1h]
  int v26; // [rsp+C4h] [rbp+3h]
  int *v27; // [rsp+C8h] [rbp+7h]
  int v28; // [rsp+D0h] [rbp+Fh]
  int v29; // [rsp+D4h] [rbp+13h]
  BOOL *v30; // [rsp+D8h] [rbp+17h]
  int v31; // [rsp+E0h] [rbp+1Fh]
  int v32; // [rsp+E4h] [rbp+23h]
  int *v33; // [rsp+E8h] [rbp+27h]
  int v34; // [rsp+F0h] [rbp+2Fh]
  int v35; // [rsp+F4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF
  int v37; // [rsp+128h] [rbp+67h] BYREF
  int v38; // [rsp+130h] [rbp+6Fh] BYREF
  int v39; // [rsp+140h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v39 = a4;
  v38 = a2;
  v37 = a1;
  if ( PopBatteryEtwRegistered )
  {
    v6 = PopBatteryEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PopBatteryEtwHandle, &BATTERY_EVT_BATTERY_PERCENT_REMAINING);
    if ( (_BYTE)v4 )
    {
      UserData.Size = 4;
      UserData.Reserved = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v8 = a3 == 0;
      UserData.Ptr = (ULONGLONG)&v37;
      v14 = &v38;
      v17 = &v8;
      v20 = &v39;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      LOBYTE(v4) = EtwWrite(v6, &BATTERY_EVT_BATTERY_PERCENT_REMAINING, 0LL, 4u, &UserData);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        LOBYTE(v4) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
        if ( (_BYTE)v4 )
        {
          v26 = 0;
          v29 = 0;
          v32 = 0;
          v35 = 0;
          v9 = v37;
          v10 = v38;
          v11 = v8;
          v12 = v39;
          v24 = &v9;
          v27 = &v10;
          v30 = &v11;
          v33 = &v12;
          v25 = 4;
          v28 = 4;
          v31 = 4;
          v34 = 4;
          LOBYTE(v4) = TlgWrite(&pCallbackContext, &unk_1402D1494, 0LL, 0LL, 6u, &pData);
        }
      }
    }
  }
  return (char)v4;
}
