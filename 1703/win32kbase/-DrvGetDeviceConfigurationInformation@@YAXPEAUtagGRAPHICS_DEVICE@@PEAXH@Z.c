/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0044268 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C009B248 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008D588 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C009D3C4 (_wcsicmp.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(PVOID Context, PCWSTR Path, int a3)
{
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  NTSTATUS RegistryValues; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *v12; // r8
  unsigned int v13; // r9d
  struct _DEVICE_OBJECT *v14; // rcx
  const wchar_t *v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rax
  const void *v18; // rcx
  __int64 v19; // rcx
  void *v20; // rax
  const void *v21; // rcx
  void *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  void *InputBuffer[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]
  const wchar_t *v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h] BYREF
  int v41; // [rsp+108h] [rbp+8h]
  const wchar_t *v42; // [rsp+110h] [rbp+10h]
  int *v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+120h] [rbp+20h]
  int *v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+140h] [rbp+40h]
  const wchar_t *v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  int v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  int v53; // [rsp+168h] [rbp+68h]
  __int64 v54; // [rsp+170h] [rbp+70h]
  int v55; // [rsp+178h] [rbp+78h]
  const wchar_t *v56; // [rsp+180h] [rbp+80h]
  int *v57; // [rsp+188h] [rbp+88h]
  int v58; // [rsp+190h] [rbp+90h]
  int *v59; // [rsp+198h] [rbp+98h]
  int v60; // [rsp+1A0h] [rbp+A0h]
  int (*v61)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1A8h] [rbp+A8h]
  int v62; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v63; // [rsp+1B8h] [rbp+B8h]
  __int64 v64; // [rsp+1C0h] [rbp+C0h]
  int v65; // [rsp+1C8h] [rbp+C8h]
  __int64 v66; // [rsp+1D0h] [rbp+D0h]
  int v67; // [rsp+1D8h] [rbp+D8h]
  int (*v68)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  int v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  int v74; // [rsp+210h] [rbp+110h]
  int (*v75)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+218h] [rbp+118h]
  int v76; // [rsp+220h] [rbp+120h]
  const wchar_t *v77; // [rsp+228h] [rbp+128h]
  __int64 v78; // [rsp+230h] [rbp+130h]
  int v79; // [rsp+238h] [rbp+138h]
  __int64 v80; // [rsp+240h] [rbp+140h]
  int v81; // [rsp+248h] [rbp+148h]
  __int64 v82; // [rsp+250h] [rbp+150h]
  int v83; // [rsp+258h] [rbp+158h]
  const wchar_t *v84; // [rsp+260h] [rbp+160h]
  int *v85; // [rsp+268h] [rbp+168h]
  int v86; // [rsp+270h] [rbp+170h]
  int *v87; // [rsp+278h] [rbp+178h]
  int v88; // [rsp+280h] [rbp+180h]
  __int64 v89; // [rsp+288h] [rbp+188h]
  int v90; // [rsp+290h] [rbp+190h]
  _BYTE v91[40]; // [rsp+298h] [rbp+198h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v92; // [rsp+2C0h] [rbp+1C0h] BYREF
  int (*v93)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F8h] [rbp+1F8h] BYREF
  int v94; // [rsp+300h] [rbp+200h]
  const wchar_t *v95; // [rsp+308h] [rbp+208h]
  __int64 v96; // [rsp+310h] [rbp+210h]
  int v97; // [rsp+318h] [rbp+218h]
  __int64 v98; // [rsp+320h] [rbp+220h]
  int v99; // [rsp+328h] [rbp+228h]
  __int64 v100; // [rsp+330h] [rbp+230h]
  int v101; // [rsp+338h] [rbp+238h]
  _BYTE v102[40]; // [rsp+340h] [rbp+240h] BYREF

  QueryTable.Name = L"DriverDesc";
  v29 = 0;
  v35 = L"Settings";
  v42 = L"MultiDisplayDriver";
  v27 = 0;
  v43 = &v27;
  v25 = 0;
  v45 = &v29;
  v49 = L"MirrorDriver";
  v26 = 0;
  v28 = 0;
  v50 = &v25;
  v52 = &v29;
  v56 = L"AccDriver";
  v57 = &v26;
  v59 = &v29;
  v63 = L"Device Description";
  v70 = L"HardwareInformation.AdapterString";
  v77 = L"HardwareInformation.ChipType";
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 20;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v33 = 0LL;
  v34 = 1;
  v36 = 0LL;
  v37 = 0;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v58 = 67108868;
  v60 = 4;
  v61 = __EnumDisplayQueryRoutine;
  v62 = 16;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v67 = 0;
  v68 = __EnumDisplayQueryRoutine;
  v69 = 16;
  v71 = 0LL;
  v72 = 0;
  v73 = 0LL;
  v74 = 0;
  v75 = __EnumDisplayQueryRoutine;
  v76 = 16;
  v84 = L"TSCompatible";
  v85 = &v28;
  v83 = 288;
  v86 = 67108868;
  v88 = 4;
  v87 = &v29;
  v78 = 0LL;
  v79 = 0;
  v80 = 0LL;
  v81 = 0;
  v82 = 0LL;
  v89 = 0LL;
  v90 = 0;
  memset(v91, 0, sizeof(v91));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v40;
  if ( a3 )
    p_QueryTable = &QueryTable;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  v9 = 1936876615LL;
  if ( RegistryValues < 0 )
  {
    if ( (*((_DWORD *)Context + 40) & 0x800000) == 0 )
      goto LABEL_10;
    v17 = PALLOCMEM2(0xAuLL, 1936876615LL, 0);
    *((_QWORD *)Context + 26) = v17;
    if ( v17 )
    {
      RegistryValues = 0;
      *(_QWORD *)v17 = *(_QWORD *)L"cdd";
      v17[4] = 0;
      *((_DWORD *)Context + 70) = 10;
      goto LABEL_11;
    }
    goto LABEL_31;
  }
  v10 = v25;
  if ( v26 )
    v10 = 1;
  v11 = (*((_DWORD *)Context + 40) & 0x800000) == 0;
  v25 = v10;
  if ( !v11 )
  {
    v16 = PALLOCMEM2(0xAuLL, 1936876615LL, 0);
    *((_QWORD *)Context + 26) = v16;
    if ( v16 )
    {
      *(_QWORD *)v16 = *(_QWORD *)L"cdd";
      v16[4] = 0;
      *((_DWORD *)Context + 70) = 10;
      goto LABEL_10;
    }
LABEL_31:
    RegistryValues = -1073741670;
    goto LABEL_10;
  }
  v92.QueryRoutine = 0LL;
  v92.Name = L"Settings";
  v92.Flags = 1;
  v93 = __DisplayDriverQueryRoutine;
  v95 = L"InstalledDisplayDrivers";
  v92.EntryContext = 0LL;
  v92.DefaultType = 0;
  v92.DefaultData = 0LL;
  v92.DefaultLength = 0;
  v94 = 16;
  v96 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v99 = 0;
  v100 = 0LL;
  v101 = 0;
  memset(v102, 0, sizeof(v102));
  v12 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v93;
  if ( a3 )
    v12 = &v92;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, v12, Context, 0LL);
LABEL_10:
  if ( RegistryValues < 0 )
    goto LABEL_54;
LABEL_11:
  memset(InputBuffer, 0, sizeof(InputBuffer));
  GreDeviceIoControlEx(*((PDEVICE_OBJECT *)Context + 17), 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, (__int64)&v31, 1u);
  v13 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v27;
    HIDWORD(InputBuffer[1]) = v28;
    InputBuffer[2] = *((void **)Context + 26);
    v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 17);
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 70);
    InputBuffer[4] = *((void **)Context + 27);
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 71);
    HIDWORD(InputBuffer[0]) = (v26 != 0 ? 2 : 0) | (v25 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlEx(v14, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, (__int64)&v31, 1u);
    goto LABEL_13;
  }
  if ( v27 != LODWORD(InputBuffer[0])
    || (v25 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v26 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v28 != HIDWORD(InputBuffer[1]) )
  {
    v27 = (int)InputBuffer[0];
    v25 = BYTE4(InputBuffer[0]) & 1;
    v28 = HIDWORD(InputBuffer[1]);
    v26 = (BYTE4(InputBuffer[0]) >> 1) & 1;
  }
  v18 = (const void *)*((_QWORD *)Context + 26);
  if ( !v18 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 70) )
    goto LABEL_42;
  if ( RtlCompareMemory(v18, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 70) )
  {
    v13 = (unsigned int)InputBuffer[3];
LABEL_42:
    v19 = *((_QWORD *)Context + 26);
    if ( v19 )
    {
      Win32FreePool(v19);
      v13 = (unsigned int)InputBuffer[3];
    }
    v20 = PALLOCMEM2(v13, 1936876615LL, 0);
    *((_QWORD *)Context + 26) = v20;
    if ( v20 )
      memmove(v20, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      RegistryValues = -1073741670;
  }
  v21 = (const void *)*((_QWORD *)Context + 27);
  if ( v21 )
  {
    v9 = (__int64)InputBuffer[4];
    if ( InputBuffer[4] )
    {
      if ( LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 71)
        || RtlCompareMemory(v21, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 71) )
      {
        Win32FreePool(*((_QWORD *)Context + 27));
        v22 = PALLOCMEM2(LODWORD(InputBuffer[5]), 1936876615LL, 0);
        *((_QWORD *)Context + 27) = v22;
        if ( v22 )
          memmove(v22, InputBuffer[4], LODWORD(InputBuffer[5]));
        else
          RegistryValues = -1073741670;
      }
    }
  }
LABEL_13:
  if ( RegistryValues >= 0 )
  {
    if ( v27 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v25 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v26 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v28 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v15 = (const wchar_t *)*((_QWORD *)Context + 27);
    if ( v15 )
    {
      if ( !wcsicmp(v15, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_54:
  DrvLogDisplayDriverEvent(1LL, v9, v8);
  v23 = *((_QWORD *)Context + 26);
  if ( v23 )
  {
    Win32FreePool(v23);
    *((_QWORD *)Context + 26) = 0LL;
  }
  v24 = *((_QWORD *)Context + 27);
  if ( v24 )
  {
    Win32FreePool(v24);
    *((_QWORD *)Context + 27) = 0LL;
  }
}
