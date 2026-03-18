/*
 * XREFs of PiDevCfgResolveDeviceDependencies @ 0x14069C020
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140691EBC (PipHardwareConfigTriggerRespecialize.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     PnpGetStableSystemBootTime @ 0x140695AE0 (PnpGetStableSystemBootTime.c)
 */

__int64 __fastcall PiDevCfgResolveDeviceDependencies(__int64 a1, _BYTE *a2)
{
  void *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int ObjectProperties; // ebx
  void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+28h] [rbp-51h]
  int v17; // [rsp+28h] [rbp-51h]
  __int64 v18; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v20[11]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+E8h] [rbp+6Fh] BYREF
  int v23; // [rsp+F0h] [rbp+77h] BYREF
  int v24; // [rsp+F8h] [rbp+7Fh] BYREF

  *a2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v22 = 0;
  v24 = 1;
  LOBYTE(v21) = 0;
  v23 = 0;
  memset(v20, 0, 0x28uLL);
  v4 = *(void **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v20[0] = &DEVPKEY_Device_FirmwareDependencies;
  v20[2] = &DestinationString;
  LODWORD(v20[1]) = 8210;
  HIDWORD(v20[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 1u, v4, (__int64)v20, 1u);
  if ( ObjectProperties >= 0 )
  {
    ObjectProperties = v20[4];
    if ( LODWORD(v20[4]) == -1073741275 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else if ( SLODWORD(v20[4]) < 0 )
    {
      goto LABEL_27;
    }
    if ( !DestinationString.Buffer || DestinationString.Length < 2u )
    {
      *a2 = 1;
      goto LABEL_26;
    }
    ObjectProperties = PnpCheckDriverDependencies(DestinationString.Buffer, a2, &v21);
    if ( ObjectProperties < 0 || !*a2 )
      goto LABEL_26;
    if ( (_BYTE)v21 )
    {
      memset(v20, 0, 0x28uLL);
      v8 = *(void **)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 8);
      v20[2] = &v18;
      v20[0] = &DEVPKEY_Device_DependencyBootSession;
      LODWORD(v20[1]) = 16;
      LODWORD(v20[3]) = 8;
      ObjectProperties = PiDevCfgQueryObjectProperties(v10, v9, 1u, v8, (__int64)v20, 1u);
      if ( ObjectProperties < 0 )
        goto LABEL_27;
      if ( LODWORD(v20[4]) != -1073741275 )
      {
        if ( SLODWORD(v20[4]) < 0 )
        {
          ObjectProperties = v20[4];
          goto LABEL_27;
        }
        ObjectProperties = PnpGetStableSystemBootTime(&v21);
        if ( ObjectProperties < 0 || v21 == v18 )
        {
          *a2 = 0;
LABEL_26:
          ObjectProperties = 0;
          goto LABEL_27;
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 8);
    v23 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v12, v11, 11, (__int64)&v24, (__int64)&v22, (__int64)&v23, 0) < 0
      || v24 != 4
      || (v14 = v22, v23 != 4) )
    {
      v14 = 0;
    }
    v22 = v14 | 0x20;
    if ( (int)PiDevCfgSetDeviceRegProp(v13, a1, 0xBu, 4, (__int64)&v22, 4) >= 0 )
    {
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_BYTE *)a1,
        *(const WCHAR **)(a1 + 8),
        1,
        *(_QWORD *)(a1 + 16),
        v16,
        (__int64)&DEVPKEY_Device_FirmwareDependencies,
        0,
        0LL,
        0);
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_BYTE *)a1,
        *(const WCHAR **)(a1 + 8),
        1,
        *(_QWORD *)(a1 + 16),
        v17,
        (__int64)&DEVPKEY_Device_DependencyBootSession,
        0,
        0LL,
        0);
    }
    if ( PnpBootMode )
      PipHardwareConfigTriggerRespecialize(0LL);
  }
LABEL_27:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
