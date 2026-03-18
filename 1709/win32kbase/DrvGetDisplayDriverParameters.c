/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C006AF2C
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C006B41C (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C006EB8C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  NTSTATUS v7; // esi
  int v8; // r14d
  DWORD *p_dmBitsPerPel; // r12
  DWORD *p_dmPelsWidth; // r13
  PCWSTR *p_Name; // rcx
  __int64 v12; // r9
  wchar_t **v13; // r8
  const WCHAR *v14; // rax
  unsigned int v15; // edi
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r10d
  __int64 v22; // rax
  unsigned __int64 v23; // xmm0_8
  DWORD v24; // ecx
  WORD dmDriverExtra; // cx
  WORD v26; // ax
  _OWORD *v27; // rdx
  __int128 v28; // xmm0
  _OWORD *v29; // rdx
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  DWORD *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  DWORD *p_dmPelsHeight; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  DWORD *p_dmDisplayFrequency; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  int v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  int v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  DWORD *p_dmPanningWidth; // [rsp+180h] [rbp+80h]
  int v65; // [rsp+188h] [rbp+88h]
  __int64 v66; // [rsp+190h] [rbp+90h]
  int v67; // [rsp+198h] [rbp+98h]
  __int64 v68; // [rsp+1A0h] [rbp+A0h]
  int v69; // [rsp+1A8h] [rbp+A8h]
  __int64 v70; // [rsp+1B0h] [rbp+B0h]
  DWORD *p_dmPanningHeight; // [rsp+1B8h] [rbp+B8h]
  int v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  int v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  int v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1F0h] [rbp+F0h]
  int v79; // [rsp+1F8h] [rbp+F8h]
  __int64 v80; // [rsp+200h] [rbp+100h]
  int v81; // [rsp+208h] [rbp+108h]
  __int64 v82; // [rsp+210h] [rbp+110h]
  int v83; // [rsp+218h] [rbp+118h]
  __int64 v84; // [rsp+220h] [rbp+120h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+228h] [rbp+128h]
  int v86; // [rsp+230h] [rbp+130h]
  __int64 v87; // [rsp+238h] [rbp+138h]
  int v88; // [rsp+240h] [rbp+140h]
  __int64 v89; // [rsp+248h] [rbp+148h]
  int v90; // [rsp+250h] [rbp+150h]
  __int64 v91; // [rsp+258h] [rbp+158h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+260h] [rbp+160h]
  int v93; // [rsp+268h] [rbp+168h]
  __int64 v94; // [rsp+270h] [rbp+170h]
  int v95; // [rsp+278h] [rbp+178h]
  __int64 v96; // [rsp+280h] [rbp+180h]
  int v97; // [rsp+288h] [rbp+188h]
  __int64 v98; // [rsp+290h] [rbp+190h]
  LONG *p_y; // [rsp+298h] [rbp+198h]
  int v100; // [rsp+2A0h] [rbp+1A0h]
  __int64 v101; // [rsp+2A8h] [rbp+1A8h]
  int v102; // [rsp+2B0h] [rbp+1B0h]
  __int64 v103; // [rsp+2B8h] [rbp+1B8h]
  int v104; // [rsp+2C0h] [rbp+1C0h]
  __int64 v105; // [rsp+2C8h] [rbp+1C8h]
  int *v106; // [rsp+2D0h] [rbp+1D0h]
  int v107; // [rsp+2D8h] [rbp+1D8h]
  __int64 v108; // [rsp+2E0h] [rbp+1E0h]
  int v109; // [rsp+2E8h] [rbp+1E8h]
  int (*v110)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v111; // [rsp+2F8h] [rbp+1F8h]
  __int64 v112; // [rsp+300h] [rbp+200h]
  struct _devicemodeW *v113; // [rsp+308h] [rbp+208h]
  int v114; // [rsp+310h] [rbp+210h]
  int *v115; // [rsp+318h] [rbp+218h]
  int v116; // [rsp+320h] [rbp+220h]
  __int64 v117; // [rsp+328h] [rbp+228h]
  int v118; // [rsp+330h] [rbp+230h]
  _BYTE v119[40]; // [rsp+338h] [rbp+238h] BYREF

  v30 = 0;
  v7 = 0;
  v31 = 0;
  v8 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    if ( a4 )
    {
      dmDriverExtra = a2->dmDriverExtra;
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
      v26 = *(_WORD *)(a4 + 70);
      if ( dmDriverExtra < v26 )
        v26 = dmDriverExtra;
      a2->dmDriverExtra = v26;
      memmove(&a2[1], (const void *)(a4 + 220), v26);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
        v30 = 1;
      goto LABEL_13;
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
    v33 = 0LL;
    v34 = 288;
    v35 = 0LL;
    v36 = &a2->dmPelsWidth;
    v37 = 0x4000000;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v41 = 288;
    v42 = 0LL;
    v44 = 0x4000000;
    v45 = 0LL;
    v46 = 0;
    v47 = 0LL;
    v48 = 288;
    v49 = 0LL;
    v51 = 0x4000000;
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
    v55 = 288;
    v56 = 0LL;
    v58 = 0x4000000;
    v59 = 0LL;
    v60 = 0;
    v61 = 0LL;
    v62 = 288;
    v63 = 0LL;
    v65 = 0x4000000;
    v66 = 0LL;
    v67 = 0;
    v68 = 0LL;
    v69 = 288;
    v70 = 0LL;
    v72 = 0x4000000;
    v73 = 0LL;
    v74 = 0;
    v75 = 0LL;
    v76 = 288;
    v77 = 0LL;
    v79 = 0x4000000;
    v80 = 0LL;
    v81 = 0;
    v82 = 0LL;
    v83 = 288;
    v84 = 0LL;
    v86 = 0x4000000;
    v87 = 0LL;
    v88 = 0;
    v89 = 0LL;
    v90 = 288;
    v91 = 0LL;
    v93 = 0x4000000;
    v94 = 0LL;
    v97 = 288;
    p_y = &a2->dmPosition.y;
    v100 = 0x4000000;
    v106 = &v30;
    v110 = DrvDriverExtraCallback;
    v104 = 288;
    v107 = 0x4000000;
    v115 = &v31;
    v95 = 0;
    v96 = 0LL;
    v98 = 0LL;
    v101 = 0LL;
    v102 = 0;
    v103 = 0LL;
    v105 = 0LL;
    v108 = 0LL;
    v109 = 0;
    v111 = 0;
    v112 = 0LL;
    v113 = a2;
    v114 = 4;
    v116 = 0x10000;
    v117 = 0LL;
    v118 = 0;
    memset(v119, 0, sizeof(v119));
    if ( !a2->dmDriverExtra )
    {
      v110 = 0LL;
      v111 = 0;
      v112 = 0LL;
      a2->dmDriverExtra = 0;
    }
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
      || (*(_DWORD *)(a1 + 160) & 8) == 0
      || (v27 = *(_OWORD **)(a1 + 288)) == 0LL )
    {
      p_Name = &QueryTable.Name;
      v12 = 13LL;
      v13 = off_1C015E9D0;
      do
      {
        v14 = *v13++;
        *p_Name = v14;
        p_Name += 7;
        --v12;
      }
      while ( v12 );
      v15 = 1;
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                       (unsigned __int16 *)a1,
                                                       v8,
                                                       0LL,
                                                       0LL,
                                                       0,
                                                       0LL,
                                                       gProtocolType);
        v17 = (WCHAR *)RegistryHandleFromDeviceMap;
        if ( RegistryHandleFromDeviceMap )
        {
          v7 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
          ZwClose(v17);
          if ( v7 >= 0 )
          {
            if ( v30
              && !*p_dmBitsPerPel
              && !*p_dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !gbBaseVideo )
            {
              DrvLogDisplayDriverEvent(6LL, v18, v19);
            }
            goto LABEL_13;
          }
        }
        else
        {
          v7 = -1073741823;
        }
        ++v15;
        v8 = 0;
        if ( v15 > 2 )
          return (unsigned int)v7;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v27;
    *(_OWORD *)&a2->dmDeviceName[8] = v27[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v27[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v27[3];
    *(_OWORD *)&a2->dmSpecVersion = v27[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v27[5];
    *(_OWORD *)&a2->dmYResolution = v27[6];
    v28 = v27[7];
    v29 = v27 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v28;
    *(_OWORD *)&a2->dmFormName[13] = *v29;
    *(_OWORD *)&a2->dmFormName[21] = v29[1];
    *(_OWORD *)&a2->dmFormName[29] = v29[2];
    *(_OWORD *)&a2->dmPelsHeight = v29[3];
    *(_OWORD *)&a2->dmICMIntent = v29[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v29 + 10);
    a2->dmPanningHeight = *((_DWORD *)v29 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 288) + 220LL), a2->dmDriverExtra);
  }
LABEL_13:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  a2->dmFields = 410910848;
  if ( v30 != v20 )
    a2->dmFields = 410910880;
  if ( a2->dmDisplayFixedOutput != v20 )
    a2->dmFields |= 0x20000000u;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v23 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    v24 = *((unsigned __int8 *)gpsi + 9979);
    a2->dmFields |= 0x1C0000u;
    a2->dmBitsPerPel = v24;
    a2->dmPelsWidth = v23 - v22;
    a2->dmPelsHeight = HIDWORD(v23) - HIDWORD(v22);
  }
  return (unsigned int)v7;
}
