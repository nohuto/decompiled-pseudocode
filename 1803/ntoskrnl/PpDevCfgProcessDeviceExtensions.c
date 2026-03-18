/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x1407310F0
 * Callers:
 *     PiConfigureDevice @ 0x140739518 (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1405D189C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1405DA00C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1405DA67C (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x14072ADB8 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  int v2; // r13d
  int inited; // ebx
  void *v4; // r12
  __int64 *v5; // rsi
  __int64 v6; // rdi
  int DriverConfiguration; // eax
  char v8; // r9
  UNICODE_STRING *v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+30h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D8h]
  int v23; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch]
  int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v30; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v31; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v32; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING v34; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v35; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v36; // [rsp+F0h] [rbp-18h] BYREF
  const void **v37; // [rsp+100h] [rbp-8h]
  _QWORD v38[10]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v39[5]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v40[4]; // [rsp+180h] [rbp+78h]

  memset(v38, 0, 0x48uLL);
  v27 = 1;
  v29 = 0LL;
  v2 = 0;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v34.Length = 0;
  v34.Buffer = 0LL;
  *(_DWORD *)&v35.Length = 0;
  v35.Buffer = 0LL;
  *(_DWORD *)&v36.Length = 0;
  v36.Buffer = 0LL;
  *(_DWORD *)&v30.Length = 0;
  v30.Buffer = 0LL;
  *(_DWORD *)&v31.Length = 0;
  v31.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_61;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_61;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v38);
  if ( inited < 0 )
    goto LABEL_61;
  v4 = (void *)v38[2];
  inited = PiDevCfgFindDeviceDriver((__int64)v38, 0LL, &v29);
  if ( inited < 0 )
    goto LABEL_59;
  v5 = (__int64 *)(v29 + 192);
  v6 = *(_QWORD *)(v29 + 192);
  if ( v6 == v29 + 192 )
  {
    inited = 0;
    goto LABEL_59;
  }
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v6);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v8 = 1;
      v9 = &v32;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_59;
      if ( *(_QWORD *)(v6 + 280) )
      {
        *(_DWORD *)(v6 + 168) &= ~1u;
        goto LABEL_25;
      }
      if ( *(_QWORD *)(v6 + 296) )
      {
        inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)(v6 + 288), 0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      if ( *(_QWORD *)(v6 + 312) )
      {
        inited = PiDevCfgAppendMultiSz(&v34, 0LL, (const void **)(v6 + 304), 0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      if ( *(_QWORD *)(v6 + 328) )
      {
        inited = PiDevCfgAppendMultiSz(&v35, 0LL, (const void **)(v6 + 320), 0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      if ( *(_QWORD *)(v6 + 344) )
      {
        inited = PiDevCfgAppendMultiSz(&v36, 0LL, (const void **)(v6 + 336), 0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      v2 |= *(_DWORD *)(v6 + 368);
      v25 = v2;
      inited = PiDevCfgAppendMultiSz(&v30, (const void **)(v6 + 40), 0LL, 0);
      if ( inited < 0 )
        goto LABEL_59;
      v8 = 0;
      v9 = &v31;
    }
    inited = PiDevCfgAppendMultiSz(v9, (const void **)(v6 + 376), 0LL, v8);
    if ( inited < 0 )
      goto LABEL_59;
LABEL_25:
    v6 = *(_QWORD *)v6;
  }
  while ( (__int64 *)v6 != v5 );
  v10 = 0LL;
  if ( inited >= 0 )
  {
    if ( v32.Buffer )
    {
      inited = PiDevCfgSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 v38,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)v4,
                 v21,
                 (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                 8210,
                 (__int64)v32.Buffer,
                 v32.Length,
                 0);
      if ( inited >= 0 )
        inited = -1073740653;
    }
    else
    {
      v11 = 0;
      v40[0] = &UnicodeString;
      v40[1] = &v34;
      v40[2] = &v35;
      v40[3] = &v36;
      do
      {
        v37 = (const void **)v40[v10];
        if ( v37[1] )
        {
          memset(v39, 0, sizeof(v39));
          v12 = *(_QWORD *)(a1 + 48);
          v39[0] = off_140861648[v10];
          v39[2] = &DestinationString;
          LODWORD(v39[1]) = 8210;
          HIDWORD(v39[3]) = 6;
          inited = PiDevCfgQueryObjectProperties(1LL, v12, 1u, v4, (__int64)v39, 1u);
          if ( inited < 0 )
            goto LABEL_59;
          if ( SLODWORD(v39[4]) < 0 )
            RtlInitUnicodeString(&DestinationString, 0LL);
          inited = PiDevCfgAppendMultiSz(&DestinationString, 0LL, v37, 0);
          if ( inited < 0 )
            goto LABEL_59;
          inited = PiDevCfgSetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     v38,
                     *(_QWORD *)(a1 + 48),
                     1u,
                     (__int64)v4,
                     v22,
                     (__int64)off_140861648[v10],
                     8210,
                     (__int64)DestinationString.Buffer,
                     DestinationString.Length,
                     0);
          if ( inited < 0 )
            goto LABEL_59;
          RtlFreeAnsiString(&DestinationString);
        }
        ++v11;
        ++v10;
      }
      while ( v11 < 4 );
      v13 = *v5;
      v14 = v25;
      while ( (__int64 *)v13 != v5 )
      {
        if ( (*(_DWORD *)(v13 + 168) & 1) != 0 )
        {
          inited = PiDevCfgConfigureDeviceDriver(a1, (int)v38, v13, &v24, 0LL);
          if ( inited < 0 )
            goto LABEL_59;
          v14 |= v24;
        }
        v13 = *(_QWORD *)v13;
      }
      v15 = *(_QWORD *)(a1 + 48);
      if ( v30.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v38,
                   v15,
                   1u,
                   (__int64)v4,
                   v21,
                   (__int64)&DEVPKEY_Device_DriverExtendedInfs,
                   8210,
                   (__int64)v30.Buffer,
                   v30.Length,
                   0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v38,
          v15,
          1u,
          (__int64)v4,
          v21,
          (__int64)&DEVPKEY_Device_DriverExtendedInfs,
          0,
          0LL,
          0,
          0);
      }
      v16 = *(_QWORD *)(a1 + 48);
      if ( v31.Buffer )
      {
        inited = PiDevCfgSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   v38,
                   v16,
                   1u,
                   (__int64)v4,
                   v23,
                   (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                   8210,
                   (__int64)v31.Buffer,
                   v31.Length,
                   0);
        if ( inited < 0 )
          goto LABEL_59;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v38,
          v16,
          1u,
          (__int64)v4,
          v23,
          (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
          0,
          0LL,
          0,
          0);
      }
      if ( v14 )
      {
        v17 = *(_QWORD *)(a1 + 48);
        v26 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v17,
                    (__int64)v4,
                    11,
                    (__int64)&v27,
                    (__int64)&v24,
                    (__int64)&v26,
                    0) < 0
          || v27 != 4
          || (v19 = v24, v26 != 4) )
        {
          v19 = 0;
        }
        v24 = v14 | v19;
        PiDevCfgSetDeviceRegProp(v18, (__int64)v38, 0xBu, 4, (__int64)&v24, 4);
      }
    }
  }
LABEL_59:
  if ( v29 )
    PiDevCfgFreeDriverNode(v29);
LABEL_61:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v34);
  RtlFreeAnsiString(&v35);
  RtlFreeAnsiString(&v36);
  RtlFreeAnsiString(&v30);
  RtlFreeAnsiString(&v31);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v32);
  PiDevCfgFreeDeviceContext((__int64)v38);
  return (unsigned int)inited;
}
