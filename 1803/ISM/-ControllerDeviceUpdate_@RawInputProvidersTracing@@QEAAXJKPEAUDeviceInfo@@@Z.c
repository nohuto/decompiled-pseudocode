/*
 * XREFs of ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18006F23C
 * Callers:
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x1800716E0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::ControllerDeviceUpdate_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        struct DeviceInfo *a4)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v7; // [rsp+58h] [rbp-19h]
  __int64 v8; // [rsp+60h] [rbp-11h]
  int *v9; // [rsp+68h] [rbp-9h]
  __int64 v10; // [rsp+70h] [rbp-1h]
  char *v11; // [rsp+78h] [rbp+7h]
  __int64 v12; // [rsp+80h] [rbp+Fh]
  char *v13; // [rsp+88h] [rbp+17h]
  __int64 v14; // [rsp+90h] [rbp+1Fh]
  char *v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+A0h] [rbp+2Fh]
  char *v17; // [rsp+A8h] [rbp+37h]
  __int64 v18; // [rsp+B0h] [rbp+3Fh]
  int v19; // [rsp+E0h] [rbp+6Fh] BYREF
  int v20; // [rsp+E8h] [rbp+77h] BYREF

  v20 = a3;
  v19 = a2;
  v5 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( a4 )
  {
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
    {
      v8 = 4LL;
      v7 = &v19;
      v9 = &v20;
      v11 = (char *)a4 + 468;
      v13 = (char *)a4 + 872;
      v15 = (char *)a4 + 892;
      v17 = (char *)a4 + 894;
      v10 = 4LL;
      v12 = 1LL;
      v14 = 16LL;
      v16 = 1LL;
      v18 = 1LL;
      TlgWrite((TraceLoggingHProvider)v5, &unk_18010F0A8, 0LL, 0LL, 8u, &pData);
    }
  }
  else if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = 4LL;
    v7 = &v19;
    v9 = &v20;
    v10 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18010F10D, 0LL, 0LL, 4u, &pData);
  }
}
