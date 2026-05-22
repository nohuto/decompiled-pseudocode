/*
 * XREFs of ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18008E4DC
 * Callers:
 *     ?SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x180093E7C (-SendDeviceUpdate@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spatia.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::ControllerDeviceUpdate_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        struct DeviceInfo *a4)
{
  __int64 v5; // r10
  __int64 v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v8; // [rsp+58h] [rbp-19h]
  int v9; // [rsp+60h] [rbp-11h]
  int v10; // [rsp+64h] [rbp-Dh]
  int *v11; // [rsp+68h] [rbp-9h]
  int v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+74h] [rbp+3h]
  char *v14; // [rsp+78h] [rbp+7h]
  int v15; // [rsp+80h] [rbp+Fh]
  int v16; // [rsp+84h] [rbp+13h]
  char *v17; // [rsp+88h] [rbp+17h]
  int v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+94h] [rbp+23h]
  char *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]
  char *v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]
  int v26; // [rsp+E0h] [rbp+6Fh] BYREF
  int v27; // [rsp+E8h] [rbp+77h] BYREF

  v27 = a3;
  v26 = a2;
  if ( a4 )
  {
    v5 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
    {
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v8 = &v26;
      v11 = &v27;
      v14 = (char *)a4 + 472;
      v17 = (char *)a4 + 876;
      v20 = (char *)a4 + 896;
      v9 = 4;
      v12 = 4;
      v23 = (char *)a4 + 897;
      v15 = 1;
      v18 = 16;
      v21 = 1;
      v24 = 1;
      TlgWrite((TraceLoggingHProvider)v5, &unk_1800EFEB4, 0LL, 0LL, 8u, &pData);
    }
  }
  else
  {
    v6 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 2) != 0 && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
    {
      v10 = 0;
      v13 = 0;
      v8 = &v26;
      v11 = &v27;
      v9 = 4;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1800EFE80, 0LL, 0LL, 4u, &pData);
    }
  }
}
