/*
 * XREFs of ?SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z @ 0x18008F324
 * Callers:
 *     ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948 (-SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z.c)
 *     wil::details::lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___::_lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___ @ 0x180096324 (wil--details--lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___--_lambda_call__lambda_4361.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::SetHapticsFeedback_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6)
{
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v8; // [rsp+58h] [rbp-19h]
  __int64 v9; // [rsp+60h] [rbp-11h]
  int *v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+70h] [rbp-1h]
  char *v12; // [rsp+78h] [rbp+7h]
  __int64 v13; // [rsp+80h] [rbp+Fh]
  char *v14; // [rsp+88h] [rbp+17h]
  __int64 v15; // [rsp+90h] [rbp+1Fh]
  char *v16; // [rsp+98h] [rbp+27h]
  __int64 v17; // [rsp+A0h] [rbp+2Fh]
  int v18; // [rsp+D0h] [rbp+5Fh] BYREF
  int v19; // [rsp+D8h] [rbp+67h] BYREF
  char v20; // [rsp+E0h] [rbp+6Fh] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v6 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 2) != 0 && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
  {
    v9 = 4LL;
    v8 = &v18;
    v10 = &v19;
    v12 = &v20;
    v14 = &a5;
    v16 = &a6;
    v11 = 4LL;
    v13 = 1LL;
    v15 = 1LL;
    v17 = 2LL;
    TlgWrite((TraceLoggingHProvider)v6, &unk_1800EFA87, 0LL, 0LL, 7u, &pData);
  }
}
