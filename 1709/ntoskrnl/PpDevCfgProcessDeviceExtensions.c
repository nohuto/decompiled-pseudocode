/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x1406C9D50
 * Callers:
 *     PiConfigureDevice @ 0x14044EA84 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1405A46D8 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x1406C4A18 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  int v2; // r13d
  int inited; // ebx
  void *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // r14
  __int64 v8; // rdi
  int DriverConfiguration; // eax
  char v10; // r9
  UNICODE_STRING *v11; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // r13d
  const WCHAR *v17; // r8
  const WCHAR *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D8h]
  int v25; // [rsp+30h] [rbp-D8h]
  int v26; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+6Ch] [rbp-9Ch]
  int v28; // [rsp+70h] [rbp-98h] BYREF
  int v29; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v33; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v34; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING v36; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v37; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v38; // [rsp+F0h] [rbp-18h] BYREF
  const void **v39; // [rsp+100h] [rbp-8h]
  _QWORD v40[10]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v41[5]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v42[4]; // [rsp+180h] [rbp+78h]

  LODWORD(v40[0]) = 0;
  memset(&v40[1], 0, 0x40uLL);
  v31 = 0LL;
  v2 = 0;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v36.Length = 0;
  v36.Buffer = 0LL;
  *(_DWORD *)&v37.Length = 0;
  v37.Buffer = 0LL;
  *(_DWORD *)&v38.Length = 0;
  v38.Buffer = 0LL;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v26 = 0;
  v27 = 0;
  v29 = 1;
  v28 = 0;
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
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v40);
  if ( inited < 0 )
    goto LABEL_62;
  v4 = (void *)v40[2];
  inited = PiDevCfgFindDeviceDriver((__int64)v40, 0LL, &v31);
  if ( inited < 0 )
    goto LABEL_60;
  v7 = (__int64 *)(v31 + 192);
  v8 = *(_QWORD *)(v31 + 192);
  if ( v8 == v31 + 192 )
  {
    inited = 0;
    goto LABEL_60;
  }
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v8);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v10 = 1;
      v11 = &v34;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_60;
      if ( *(_QWORD *)(v8 + 280) )
      {
        *(_DWORD *)(v8 + 168) &= ~1u;
        goto LABEL_25;
      }
      if ( *(_QWORD *)(v8 + 296) )
      {
        inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)(v8 + 288), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v8 + 312) )
      {
        inited = PiDevCfgAppendMultiSz(&v36, 0LL, (const void **)(v8 + 304), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v8 + 328) )
      {
        inited = PiDevCfgAppendMultiSz(&v37, 0LL, (const void **)(v8 + 320), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      if ( *(_QWORD *)(v8 + 344) )
      {
        inited = PiDevCfgAppendMultiSz(&v38, 0LL, (const void **)(v8 + 336), 0);
        if ( inited < 0 )
          goto LABEL_60;
      }
      v2 |= *(_DWORD *)(v8 + 368);
      v27 = v2;
      inited = PiDevCfgAppendMultiSz(&v32, (const void **)(v8 + 40), 0LL, 0);
      if ( inited < 0 )
        goto LABEL_60;
      v10 = 0;
      v11 = &v33;
    }
    inited = PiDevCfgAppendMultiSz(v11, (const void **)(v8 + 376), 0LL, v10);
    if ( inited < 0 )
      goto LABEL_60;
LABEL_25:
    v8 = *(_QWORD *)v8;
  }
  while ( (__int64 *)v8 != v7 );
  if ( inited >= 0 )
  {
    if ( v34.Buffer )
    {
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v40,
                 *(const WCHAR **)(a1 + 48),
                 1,
                 (__int64)v4,
                 v23,
                 (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                 8210,
                 (unsigned int *)v34.Buffer,
                 v34.Length);
      if ( inited >= 0 )
        inited = -1073740653;
    }
    else
    {
      v12 = 0;
      v42[0] = &UnicodeString;
      v13 = 0LL;
      v42[1] = &v36;
      v42[2] = &v37;
      v42[3] = &v38;
      do
      {
        v39 = (const void **)v42[v13];
        if ( v39[1] )
        {
          memset(v41, 0, sizeof(v41));
          v14 = *(_QWORD *)(a1 + 48);
          v41[0] = off_1407F3628[v13];
          v41[2] = &DestinationString;
          LODWORD(v41[1]) = 8210;
          HIDWORD(v41[3]) = 6;
          inited = PiDevCfgQueryObjectProperties(1LL, v14, 1u, v4, (__int64)v41, 1u);
          if ( inited < 0 )
            goto LABEL_60;
          if ( SLODWORD(v41[4]) < 0 )
            RtlInitUnicodeString(&DestinationString, 0LL);
          inited = PiDevCfgAppendMultiSz(&DestinationString, 0LL, v39, 0);
          if ( inited < 0 )
            goto LABEL_60;
          inited = PiDevCfgSetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     v40,
                     *(const WCHAR **)(a1 + 48),
                     1,
                     (__int64)v4,
                     v24,
                     (__int64)off_1407F3628[v13],
                     8210,
                     (unsigned int *)DestinationString.Buffer,
                     DestinationString.Length);
          if ( inited < 0 )
            goto LABEL_60;
          RtlFreeUnicodeString(&DestinationString);
        }
        ++v12;
        ++v13;
      }
      while ( v12 < 4 );
      v15 = *v7;
      v16 = v27;
      while ( (__int64 *)v15 != v7 )
      {
        if ( (*(_DWORD *)(v15 + 168) & 1) != 0 )
        {
          inited = PiDevCfgConfigureDeviceDriver(a1, (int)v40, v15, &v26, 0LL);
          if ( inited < 0 )
            goto LABEL_60;
          v16 |= v26;
        }
        v15 = *(_QWORD *)v15;
      }
      v17 = *(const WCHAR **)(a1 + 48);
      if ( v32.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v40,
                   v17,
                   1,
                   (__int64)v4,
                   v23,
                   (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                   8210,
                   (unsigned int *)v32.Buffer,
                   v32.Length);
        if ( inited < 0 )
          goto LABEL_60;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v40,
          v17,
          1,
          (__int64)v4,
          v23,
          (__int64)&DEVPKEY_Device_DriverExtendedInfs,
          0,
          0LL,
          0);
      }
      v18 = *(const WCHAR **)(a1 + 48);
      if ( v33.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v40,
                   v18,
                   1,
                   (__int64)v4,
                   v25,
                   (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                   8210,
                   (unsigned int *)v33.Buffer,
                   v33.Length);
        if ( inited < 0 )
          goto LABEL_60;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v40,
          v18,
          1,
          (__int64)v4,
          v25,
          (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
          0,
          0LL,
          0);
      }
      if ( v16 )
      {
        v19 = *(_QWORD *)(a1 + 48);
        v28 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v19,
                    (__int64)v4,
                    11,
                    (__int64)&v29,
                    (__int64)&v26,
                    (__int64)&v28,
                    0) >= 0
          && v29 == 4
          && v28 == 4 )
        {
          v21 = v26;
        }
        else
        {
          v21 = 0;
        }
        v26 = v16 | v21;
        PiDevCfgSetDeviceRegProp(v20, (__int64)v40, 0xBu, 4, (__int64)&v26, 4);
      }
    }
  }
LABEL_60:
  if ( v31 )
    PiDevCfgFreeDriverNode(v31, v5, v6);
LABEL_62:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v36);
  RtlFreeUnicodeString(&v37);
  RtlFreeUnicodeString(&v38);
  RtlFreeUnicodeString(&v32);
  RtlFreeUnicodeString(&v33);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v34);
  PiDevCfgFreeDeviceContext((__int64)v40);
  return (unsigned int)inited;
}
