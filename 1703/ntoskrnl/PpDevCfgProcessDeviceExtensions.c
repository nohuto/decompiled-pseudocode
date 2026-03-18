/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x14069EB7C
 * Callers:
 *     PiConfigureDevice @ 0x1406A69EC (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDeviceContext @ 0x14055947C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14058FD34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140592D7C (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x140698BEC (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  int inited; // ebx
  void *v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rdi
  int DriverConfiguration; // eax
  char v7; // r9
  UNICODE_STRING *v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 i; // rdi
  const WCHAR *v13; // r8
  const WCHAR *v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v20; // [rsp+30h] [rbp-D8h]
  int v21; // [rsp+30h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v28; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v29; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v30; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING v32; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v33; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v34; // [rsp+F0h] [rbp-18h] BYREF
  const void **v35; // [rsp+100h] [rbp-8h]
  _QWORD v36[10]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v37[5]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v38[4]; // [rsp+180h] [rbp+78h]

  LODWORD(v36[0]) = 0;
  memset(&v36[1], 0, 0x40uLL);
  v27 = 0LL;
  *(_DWORD *)&v30.Length = 0;
  v30.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&v28.Length = 0;
  v28.Buffer = 0LL;
  *(_DWORD *)&v29.Length = 0;
  v29.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v23 = 0LL;
  v25 = 1;
  v24 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_62;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_62;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v36);
  if ( inited < 0 )
    goto LABEL_62;
  v3 = (void *)v36[2];
  inited = PiDevCfgFindDeviceDriver((__int64)v36, 0LL, &v27);
  if ( inited < 0 )
    goto LABEL_60;
  v4 = (__int64 *)(v27 + 192);
  v5 = *(_QWORD *)(v27 + 192);
  if ( v5 == v27 + 192 )
  {
    inited = 0;
    goto LABEL_60;
  }
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v5);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v7 = 1;
      v8 = &v30;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_60;
      if ( *(_QWORD *)(v5 + 280) )
      {
        *(_DWORD *)(v5 + 168) &= ~1u;
        goto LABEL_25;
      }
      if ( *(_QWORD *)(v5 + 296) )
      {
        inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)(v5 + 288), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v5 + 312) )
      {
        inited = PiDevCfgAppendMultiSz(&v32, 0LL, (const void **)(v5 + 304), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v5 + 328) )
      {
        inited = PiDevCfgAppendMultiSz(&v33, 0LL, (const void **)(v5 + 320), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v5 + 344) )
      {
        inited = PiDevCfgAppendMultiSz(&v34, 0LL, (const void **)(v5 + 336), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      HIDWORD(v23) |= *(_DWORD *)(v5 + 368);
      inited = PiDevCfgAppendMultiSz(&v28, (const void **)(v5 + 40), 0LL, 0);
      if ( inited < 0 )
        goto LABEL_60;
      v7 = 0;
      v8 = &v29;
    }
    inited = PiDevCfgAppendMultiSz(v8, (const void **)(v5 + 376), 0LL, v7);
    if ( inited < 0 )
      goto LABEL_60;
LABEL_25:
    v5 = *(_QWORD *)v5;
  }
  while ( (__int64 *)v5 != v4 );
  if ( inited >= 0 )
  {
    if ( v30.Buffer )
    {
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v36,
                 *(const WCHAR **)(a1 + 48),
                 1,
                 (__int64)v3,
                 v20,
                 (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                 8210,
                 (unsigned int *)v30.Buffer,
                 v30.Length);
      if ( inited >= 0 )
        inited = -1073740653;
    }
    else
    {
      v9 = 0;
      v38[0] = &UnicodeString;
      v10 = 0LL;
      v38[1] = &v32;
      v38[2] = &v33;
      v38[3] = &v34;
      do
      {
        v35 = (const void **)v38[v10];
        if ( v35[1] )
        {
          memset(v37, 0, sizeof(v37));
          v11 = *(_QWORD *)(a1 + 48);
          v37[0] = off_1407AC638[v10];
          v37[2] = &DestinationString;
          LODWORD(v37[1]) = 8210;
          HIDWORD(v37[3]) = 6;
          inited = PiDevCfgQueryObjectProperties(1LL, v11, 1u, v3, (__int64)v37, 1u);
          if ( inited < 0 )
            goto LABEL_60;
          if ( SLODWORD(v37[4]) < 0 )
            RtlInitUnicodeString(&DestinationString, 0LL);
          inited = PiDevCfgAppendMultiSz(&DestinationString, 0LL, v35, 0);
          if ( inited < 0 )
            goto LABEL_60;
          inited = PiDevCfgSetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     v36,
                     *(const WCHAR **)(a1 + 48),
                     1,
                     (__int64)v3,
                     v21,
                     (__int64)off_1407AC638[v10],
                     8210,
                     (unsigned int *)DestinationString.Buffer,
                     DestinationString.Length);
          if ( inited < 0 )
            goto LABEL_60;
          RtlFreeUnicodeString(&DestinationString);
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 4 );
      for ( i = *v4; (__int64 *)i != v4; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 168) & 1) != 0 )
        {
          inited = PiDevCfgConfigureDeviceDriver(a1, (int)v36, i, &v23, 0LL);
          if ( inited < 0 )
            goto LABEL_60;
          HIDWORD(v23) |= v23;
        }
      }
      v13 = *(const WCHAR **)(a1 + 48);
      if ( v28.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v36,
                   v13,
                   1,
                   (__int64)v3,
                   v20,
                   (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                   8210,
                   (unsigned int *)v28.Buffer,
                   v28.Length);
        if ( inited < 0 )
          goto LABEL_60;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v36,
          v13,
          1,
          (__int64)v3,
          v20,
          (__int64)&DEVPKEY_Device_DriverExtendedInfs,
          0,
          0LL,
          0);
      }
      v14 = *(const WCHAR **)(a1 + 48);
      if ( v29.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v36,
                   v14,
                   1,
                   (__int64)v3,
                   v22,
                   (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                   8210,
                   (unsigned int *)v29.Buffer,
                   v29.Length);
        if ( inited < 0 )
          goto LABEL_60;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v36,
          v14,
          1,
          (__int64)v3,
          v22,
          (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
          0,
          0LL,
          0);
      }
      v15 = HIDWORD(v23);
      if ( HIDWORD(v23) )
      {
        v16 = *(_QWORD *)(a1 + 48);
        v24 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v16,
                    (__int64)v3,
                    11,
                    (__int64)&v25,
                    (__int64)&v23,
                    (__int64)&v24,
                    0) >= 0
          && v25 == 4
          && v24 == 4 )
        {
          v18 = v23;
        }
        else
        {
          v18 = 0;
        }
        LODWORD(v23) = v15 | v18;
        PiDevCfgSetDeviceRegProp(v17, (__int64)v36, 0xBu, 4, (__int64)&v23, 4);
      }
    }
  }
LABEL_60:
  if ( v27 )
    PiDevCfgFreeDriverNode(v27);
LABEL_62:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v32);
  RtlFreeUnicodeString(&v33);
  RtlFreeUnicodeString(&v34);
  RtlFreeUnicodeString(&v28);
  RtlFreeUnicodeString(&v29);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v30);
  PiDevCfgFreeDeviceContext((__int64)v36);
  return (unsigned int)inited;
}
