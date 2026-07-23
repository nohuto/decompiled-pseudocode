/*
 * XREFs of PpDevCfgInit @ 0x14083EBC0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     PiDmEnumObjectsWithCallback @ 0x140526100 (PiDmEnumObjectsWithCallback.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     _PnpCtxRegQueryValue @ 0x1405C45E0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1405C4630 (_PnpCtxRegOpenKey.c)
 */

__int64 PpDevCfgInit()
{
  int ObjectProperties; // ebx
  int v1; // eax
  char v2; // al
  __int64 v3; // rcx
  int MatchingChangeStamp; // [rsp+30h] [rbp-D8h]
  int v6; // [rsp+68h] [rbp-A0h] BYREF
  int v7; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v8; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v9; // [rsp+74h] [rbp-94h] BYREF
  int v10; // [rsp+78h] [rbp-90h] BYREF
  int v11; // [rsp+7Ch] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v13; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v14; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v15[16]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v15, 0, 0x78uLL);
  LODWORD(v15[1]) = 7;
  v15[0] = &DEVPKEY_DriverDatabase_ConfigMode;
  LODWORD(v15[3]) = 4;
  v15[2] = &v7;
  LODWORD(v15[6]) = 7;
  v15[5] = &DEVPKEY_DriverDatabase_ConfigOptions;
  LODWORD(v15[8]) = 4;
  v15[7] = &v8;
  v15[10] = &DEVPKEY_DriverDatabase_Updated;
  v15[12] = &v6;
  LODWORD(v15[11]) = 17;
  LODWORD(v15[13]) = 1;
  ObjectProperties = PiDevCfgQueryObjectProperties(7LL, (__int64)L"SYSTEM", 6u, 0LL, (__int64)v15, 3u);
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v15[4]) >= 0 )
      v7 = (v7 & 3) != 0 ? v7 : 0;
    else
      v7 = 3;
    v1 = v8;
    *(_DWORD *)&v14.Length = 1835034;
    if ( SLODWORD(v15[9]) < 0 )
      v1 = 0;
    v8 = v1;
    v2 = v6;
    if ( SLODWORD(v15[14]) < 0 )
      v2 = 0;
    LOBYTE(v6) = v2;
    v14.Buffer = L"DeviceInstall";
    if ( PipOpenServiceEnumKeys(&v14, 0x20019u, &v13, 0LL, 0) >= 0 )
    {
      if ( (int)PnpCtxRegOpenKey(
                  *(__int64 **)&PiPnpRtlCtx,
                  (__int64)v13,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        v9 = 4;
        if ( (int)PnpCtxRegQueryValue(v3, Handle, L"DriverUpdatesPending", &v10, &v11, &v9) >= 0
          && v10 == 4
          && v9 == 4
          && v11 )
        {
          ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
        }
        ZwClose(Handle);
      }
      ZwClose(v13);
      PiDevCfgFlags |= 2u;
    }
    PiDevCfgMode = v7;
    PiDevCfgOptions = v8;
    if ( (_BYTE)v6 == 0xFF )
      PiDevCfgFlags |= 1u;
    if ( v7 )
    {
      if ( (PiDevCfgFlags & 1) != 0 )
      {
        ObjectProperties = PiDmEnumObjectsWithCallback(
                             1,
                             (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDevCfgInitDeviceCallback,
                             0LL);
        if ( ObjectProperties >= 0 )
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            0LL,
            L"SYSTEM",
            6,
            0LL,
            MatchingChangeStamp,
            (__int64)&DEVPKEY_DriverDatabase_Updated,
            0,
            0LL,
            0);
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
