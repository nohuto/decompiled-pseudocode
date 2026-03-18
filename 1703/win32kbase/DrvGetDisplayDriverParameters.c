/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C005EAEC
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C005EFC8 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008D588 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  NTSTATUS v7; // esi
  int v8; // r14d
  DWORD *p_dmBitsPerPel; // r12
  DWORD *p_dmPelsWidth; // r13
  unsigned __int16 v11; // r10
  unsigned int v12; // edi
  PCWSTR *p_Name; // rcx
  __int64 v14; // r9
  wchar_t **v15; // r8
  const WCHAR *v16; // rax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r11d
  bool v22; // zf
  int dmFields; // eax
  DWORD v25; // r8d
  DWORD v26; // ecx
  DWORD v27; // edx
  WORD dmDriverExtra; // ax
  _OWORD *v29; // rdx
  __int128 v30; // xmm0
  _OWORD *v31; // rdx
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  DWORD *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  DWORD *p_dmPelsHeight; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  DWORD *p_dmDisplayFrequency; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+128h] [rbp+28h]
  __int64 v56; // [rsp+130h] [rbp+30h]
  int v57; // [rsp+138h] [rbp+38h]
  __int64 v58; // [rsp+140h] [rbp+40h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  DWORD *p_dmPanningWidth; // [rsp+180h] [rbp+80h]
  int v67; // [rsp+188h] [rbp+88h]
  __int64 v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+198h] [rbp+98h]
  __int64 v70; // [rsp+1A0h] [rbp+A0h]
  int v71; // [rsp+1A8h] [rbp+A8h]
  __int64 v72; // [rsp+1B0h] [rbp+B0h]
  DWORD *p_dmPanningHeight; // [rsp+1B8h] [rbp+B8h]
  int v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  int v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  int v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1F0h] [rbp+F0h]
  int v81; // [rsp+1F8h] [rbp+F8h]
  __int64 v82; // [rsp+200h] [rbp+100h]
  int v83; // [rsp+208h] [rbp+108h]
  __int64 v84; // [rsp+210h] [rbp+110h]
  int v85; // [rsp+218h] [rbp+118h]
  __int64 v86; // [rsp+220h] [rbp+120h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+228h] [rbp+128h]
  int v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  int v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  int v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+260h] [rbp+160h]
  int v95; // [rsp+268h] [rbp+168h]
  __int64 v96; // [rsp+270h] [rbp+170h]
  int v97; // [rsp+278h] [rbp+178h]
  __int64 v98; // [rsp+280h] [rbp+180h]
  int v99; // [rsp+288h] [rbp+188h]
  __int64 v100; // [rsp+290h] [rbp+190h]
  LONG *p_y; // [rsp+298h] [rbp+198h]
  int v102; // [rsp+2A0h] [rbp+1A0h]
  __int64 v103; // [rsp+2A8h] [rbp+1A8h]
  int v104; // [rsp+2B0h] [rbp+1B0h]
  __int64 v105; // [rsp+2B8h] [rbp+1B8h]
  int v106; // [rsp+2C0h] [rbp+1C0h]
  __int64 v107; // [rsp+2C8h] [rbp+1C8h]
  int *v108; // [rsp+2D0h] [rbp+1D0h]
  int v109; // [rsp+2D8h] [rbp+1D8h]
  __int64 v110; // [rsp+2E0h] [rbp+1E0h]
  int v111; // [rsp+2E8h] [rbp+1E8h]
  int (*v112)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v113; // [rsp+2F8h] [rbp+1F8h]
  __int64 v114; // [rsp+300h] [rbp+200h]
  struct _devicemodeW *v115; // [rsp+308h] [rbp+208h]
  int v116; // [rsp+310h] [rbp+210h]
  int *v117; // [rsp+318h] [rbp+218h]
  int v118; // [rsp+320h] [rbp+220h]
  __int64 v119; // [rsp+328h] [rbp+228h]
  int v120; // [rsp+330h] [rbp+230h]
  _BYTE v121[40]; // [rsp+338h] [rbp+238h] BYREF

  v32 = 0;
  v7 = 0;
  v33 = 0;
  v8 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    if ( a4 )
    {
      a2->dmBitsPerPel = *(_DWORD *)(a4 + 168);
      a2->dmPelsWidth = *(_DWORD *)(a4 + 172);
      a2->dmPelsHeight = *(_DWORD *)(a4 + 176);
      a2->dmDisplayFrequency = *(_DWORD *)(a4 + 184);
      a2->dmDisplayFlags = *(_DWORD *)(a4 + 180);
      a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
      a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
      a2->dmPosition.x = *(_DWORD *)(a4 + 76);
      a2->dmPosition.y = *(_DWORD *)(a4 + 80);
      a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
      a2->dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
      dmDriverExtra = *(_WORD *)(a4 + 70);
      if ( a2->dmDriverExtra < dmDriverExtra )
        dmDriverExtra = a2->dmDriverExtra;
      a2->dmDriverExtra = dmDriverExtra;
      memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
        v32 = 1;
      goto LABEL_12;
    }
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = 0LL;
    p_dmPelsHeight = &a2->dmPelsHeight;
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    QueryTable.EntryContext = &a2->dmBitsPerPel;
    p_dmDisplayFrequency = &a2->dmDisplayFrequency;
    p_dmPelsWidth = &a2->dmPelsWidth;
    QueryTable.DefaultType = 0x4000000;
    p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
    p_dmPanningWidth = &a2->dmPanningWidth;
    p_dmPanningHeight = &a2->dmPanningHeight;
    p_dmDisplayOrientation = &a2->dmDisplayOrientation;
    p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
    p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v35 = 0LL;
    v36 = 288;
    v37 = 0LL;
    v38 = &a2->dmPelsWidth;
    v39 = 0x4000000;
    v40 = 0LL;
    v41 = 0;
    v42 = 0LL;
    v43 = 288;
    v44 = 0LL;
    v46 = 0x4000000;
    v47 = 0LL;
    v48 = 0;
    v49 = 0LL;
    v50 = 288;
    v51 = 0LL;
    v53 = 0x4000000;
    v54 = 0LL;
    v55 = 0;
    v56 = 0LL;
    v57 = 288;
    v58 = 0LL;
    v60 = 0x4000000;
    v61 = 0LL;
    v62 = 0;
    v63 = 0LL;
    v64 = 288;
    v65 = 0LL;
    v67 = 0x4000000;
    v68 = 0LL;
    v69 = 0;
    v70 = 0LL;
    v71 = 288;
    v72 = 0LL;
    v74 = 0x4000000;
    v75 = 0LL;
    v76 = 0;
    v77 = 0LL;
    v78 = 288;
    v79 = 0LL;
    v81 = 0x4000000;
    v82 = 0LL;
    v83 = 0;
    v84 = 0LL;
    v85 = 288;
    v86 = 0LL;
    v88 = 0x4000000;
    v89 = 0LL;
    v90 = 0;
    v91 = 0LL;
    v92 = 288;
    v93 = 0LL;
    v95 = 0x4000000;
    v96 = 0LL;
    v99 = 288;
    p_y = &a2->dmPosition.y;
    v102 = 0x4000000;
    v108 = &v32;
    v112 = DrvDriverExtraCallback;
    v106 = 288;
    v109 = 0x4000000;
    v117 = &v33;
    v97 = 0;
    v98 = 0LL;
    v100 = 0LL;
    v103 = 0LL;
    v104 = 0;
    v105 = 0LL;
    v107 = 0LL;
    v110 = 0LL;
    v111 = 0;
    v113 = 0;
    v114 = 0LL;
    v115 = a2;
    v116 = 4;
    v118 = 0x10000;
    v119 = 0LL;
    v120 = 0;
    memset(v121, 0, sizeof(v121));
    if ( !a2->dmDriverExtra )
    {
      v112 = 0LL;
      v113 = 0;
      v114 = 0LL;
      a2->dmDriverExtra = 0;
    }
    v11 = gProtocolType;
    v12 = 1;
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
      || (*(_DWORD *)(a1 + 160) & 8) == 0
      || (v29 = *(_OWORD **)(a1 + 288)) == 0LL )
    {
      p_Name = &QueryTable.Name;
      v14 = 13LL;
      v15 = off_1C015F8D0;
      do
      {
        v16 = *v15++;
        *p_Name = v16;
        p_Name += 7;
        --v14;
      }
      while ( v14 );
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                       (unsigned __int16 *)a1,
                                                       v8,
                                                       0LL,
                                                       0LL,
                                                       0,
                                                       0LL,
                                                       v11);
        v18 = (WCHAR *)RegistryHandleFromDeviceMap;
        if ( RegistryHandleFromDeviceMap )
        {
          v7 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
          ZwClose(v18);
          if ( v7 >= 0 )
          {
            if ( v32
              && !*p_dmBitsPerPel
              && !*p_dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !gbBaseVideo )
            {
              DrvLogDisplayDriverEvent(6LL, v19, v20);
            }
            goto LABEL_12;
          }
        }
        else
        {
          v7 = -1073741823;
        }
        ++v12;
        v8 = 0;
        if ( v12 > 2 )
          return (unsigned int)v7;
        v11 = gProtocolType;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v29;
    *(_OWORD *)&a2->dmDeviceName[8] = v29[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v29[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v29[3];
    *(_OWORD *)&a2->dmSpecVersion = v29[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v29[5];
    *(_OWORD *)&a2->dmYResolution = v29[6];
    v30 = v29[7];
    v31 = v29 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v30;
    *(_OWORD *)&a2->dmFormName[13] = *v31;
    *(_OWORD *)&a2->dmFormName[21] = v31[1];
    *(_OWORD *)&a2->dmFormName[29] = v31[2];
    *(_OWORD *)&a2->dmPelsHeight = v31[3];
    *(_OWORD *)&a2->dmICMIntent = v31[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v31 + 10);
    a2->dmPanningHeight = *((_DWORD *)v31 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 288) + 220LL), a2->dmDriverExtra);
  }
LABEL_12:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v22 = v32 == v21;
  a2->dmFields = 410910848;
  dmFields = a2->dmFields;
  if ( !v22 )
    dmFields = 410910880;
  a2->dmFields = dmFields;
  if ( a2->dmDisplayFixedOutput != v21 )
    a2->dmFields |= 0x20000000u;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    v25 = *((unsigned __int8 *)gpsi + 8683);
    v26 = *((_DWORD *)gpsi + 548);
    v27 = *((_DWORD *)gpsi + 549);
    a2->dmFields |= 0x1C0000u;
    a2->dmBitsPerPel = v25;
    a2->dmPelsWidth = v26;
    a2->dmPelsHeight = v27;
  }
  return (unsigned int)v7;
}
