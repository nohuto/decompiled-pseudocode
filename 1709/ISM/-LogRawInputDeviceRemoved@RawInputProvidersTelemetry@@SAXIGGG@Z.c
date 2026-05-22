/*
 * XREFs of ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C62C
 * Callers:
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18009C444 (-Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
        unsigned int a1,
        __int16 a2,
        __int16 a3,
        __int16 a4)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // r10
  __int64 v6; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+68h] [rbp+7h]
  __int64 v9; // [rsp+70h] [rbp+Fh]
  __int16 *v10; // [rsp+78h] [rbp+17h]
  __int64 v11; // [rsp+80h] [rbp+1Fh]
  __int16 *v12; // [rsp+88h] [rbp+27h]
  __int64 v13; // [rsp+90h] [rbp+2Fh]
  __int16 *v14; // [rsp+98h] [rbp+37h]
  __int64 v15; // [rsp+A0h] [rbp+3Fh]
  __int16 v16; // [rsp+D0h] [rbp+6Fh] BYREF
  __int16 v17; // [rsp+D8h] [rbp+77h] BYREF
  __int16 v18; // [rsp+E0h] [rbp+7Fh] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v4 = a1;
  v5 = RawInputProvidersTelemetry::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v6 = v4;
    v8 = &v6;
    v10 = &v16;
    v12 = &v17;
    v14 = &v18;
    v9 = 8LL;
    v11 = 2LL;
    v13 = 2LL;
    v15 = 2LL;
    TlgWrite(v5, &unk_1800F0730, 0LL, 0LL, 6u, &pData);
  }
}
