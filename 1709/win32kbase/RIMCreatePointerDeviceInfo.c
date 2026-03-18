/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C000F028
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMUpdateMonitorQuirk @ 0x1C000B05C (RIMUpdateMonitorQuirk.c)
 *     RIMGetDeviceParent @ 0x1C000B2A0 (RIMGetDeviceParent.c)
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C000C538 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     RIMGetProductString @ 0x1C000E9E0 (RIMGetProductString.c)
 *     RIMGetContainerId @ 0x1C000EB54 (RIMGetContainerId.c)
 *     RIMIsDeviceExcluded @ 0x1C000ED04 (RIMIsDeviceExcluded.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     RIMIsEssentialUsage @ 0x1C000FAD4 (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C000FB80 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C000FBB0 (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C00902B4 (RIMComputeSpecificHighMetricValue.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00904D0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMGetDeviceButtons @ 0x1C00914CC (RIMGetDeviceButtons.c)
 *     RIMGetPropertyCount @ 0x1C00934B0 (RIMGetPropertyCount.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00944D4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMAssignTouchType @ 0x1C0095C58 (RIMAssignTouchType.c)
 *     RIMInitializeDeadzone @ 0x1C0096ED4 (RIMInitializeDeadzone.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0098660 (RIMReadDigitizerToMonitorMappings.c)
 *     ApiSetValidateDeviceSignature @ 0x1C009965C (ApiSetValidateDeviceSignature.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C00998F0 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C009B3BC (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMIsRunningOnDesktop @ 0x1C009B3E0 (RIMIsRunningOnDesktop.c)
 *     rimSetupPalmTelemetry @ 0x1C009B674 (rimSetupPalmTelemetry.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMComputePTPCurtainRegions @ 0x1C0105B50 (RIMComputePTPCurtainRegions.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01060B0 (RIMGetMonitorPhysicalSize.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0107E94 (RIMIsRunningOnSurfaceHub.c)
 *     RIMValidatePTPProperties @ 0x1C0116E80 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A57C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6,
        __int64 a7)
{
  __m128i *v7; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // rdx
  __int16 v15; // cx
  BOOL v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r14d
  int v20; // ecx
  int v21; // esi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v26; // rcx
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rsi
  int SpecificValueCaps; // eax
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // r12
  __m128i *v34; // r14
  int v35; // edx
  int v36; // r9d
  int v37; // eax
  unsigned int v38; // r11d
  bool v39; // zf
  int v40; // r12d
  int v41; // r10d
  __m128i *v42; // r14
  __int16 v43; // r12
  unsigned __int16 v44; // r12
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __m128i v51; // xmm5
  __int64 v52; // xmm0_8
  __m128i v53; // xmm2
  __m128i v54; // xmm3
  __m128i v55; // xmm4
  int v56; // eax
  int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // eax
  struct _EVENT_DATA_DESCRIPTOR v61; // xmm5
  ULONGLONG v62; // xmm0_8
  EVENT_DATA_DESCRIPTOR v63; // xmm2
  __m128i v64; // xmm3
  struct _EVENT_DATA_DESCRIPTOR v65; // xmm4
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // edx
  int v70; // eax
  int v71; // edx
  int v72; // r8d
  int v73; // r11d
  _QWORD *v74; // rax
  int v75; // ecx
  __int64 v76; // r14
  int v77; // esi
  __int64 v78; // xmm0_8
  int v79; // edx
  int v80; // eax
  __int128 v81; // xmm6
  int v82; // edx
  const wchar_t *v83; // rax
  LPCGUID v84; // r9
  const wchar_t *v86; // rax
  LPCGUID v87; // r9
  UINT32 v88; // r10d
  const wchar_t *v89; // rax
  LPCGUID v90; // r9
  UINT32 v91; // r10d
  const wchar_t *v92; // rax
  LPCGUID v93; // r9
  UINT32 v94; // r10d
  int v95; // eax
  __int64 v96; // r8
  __m128i *v97; // rdx
  unsigned int v98; // r9d
  __int64 v99; // rcx
  __int64 v100; // xmm0_8
  const wchar_t *v101; // rax
  LPCGUID v102; // r9
  UINT32 v103; // r10d
  __int64 v104; // xmm0_8
  const wchar_t *v105; // rax
  LPCGUID v106; // r9
  UINT32 v107; // r10d
  const wchar_t *v108; // rax
  LPCGUID v109; // r9
  UINT32 v110; // r10d
  const wchar_t *v111; // rax
  LPCGUID v112; // r9
  UINT32 v113; // r10d
  int cData; // [rsp+28h] [rbp-E0h]
  unsigned int v115; // [rsp+88h] [rbp-80h]
  _WORD v116[2]; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v117; // [rsp+90h] [rbp-78h]
  unsigned __int16 v118[2]; // [rsp+98h] [rbp-70h] BYREF
  int v119; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v120; // [rsp+A0h] [rbp-68h]
  int v121; // [rsp+A4h] [rbp-64h] BYREF
  struct _UNICODE_STRING v122; // [rsp+A8h] [rbp-60h] BYREF
  int v123; // [rsp+B8h] [rbp-50h]
  unsigned int v124; // [rsp+BCh] [rbp-4Ch]
  unsigned int v125; // [rsp+C0h] [rbp-48h]
  unsigned int v126; // [rsp+C4h] [rbp-44h]
  unsigned int v127; // [rsp+C8h] [rbp-40h]
  unsigned int v128; // [rsp+CCh] [rbp-3Ch]
  unsigned int v129; // [rsp+D0h] [rbp-38h]
  __int64 v130; // [rsp+D8h] [rbp-30h]
  unsigned int v131; // [rsp+E0h] [rbp-28h]
  unsigned int v132; // [rsp+E4h] [rbp-24h]
  unsigned int v133; // [rsp+E8h] [rbp-20h]
  int v134; // [rsp+ECh] [rbp-1Ch]
  int v135; // [rsp+F0h] [rbp-18h]
  int v136; // [rsp+F4h] [rbp-14h]
  __int128 v137; // [rsp+F8h] [rbp-10h] BYREF
  struct _FILE_OBJECT *v138; // [rsp+108h] [rbp+0h]
  struct _DEVICE_OBJECT *v139; // [rsp+110h] [rbp+8h]
  unsigned int v140; // [rsp+118h] [rbp+10h]
  _QWORD *v141; // [rsp+120h] [rbp+18h]
  _OWORD v142[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v143; // [rsp+168h] [rbp+60h]
  _OWORD v144[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v145; // [rsp+1B8h] [rbp+B0h]
  char v146[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v147[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v148; // [rsp+200h] [rbp+F8h]
  int v149; // [rsp+204h] [rbp+FCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  __m128i v151; // [rsp+238h] [rbp+130h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+248h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v153; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v154; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v155[144]; // [rsp+278h] [rbp+170h] BYREF

  v7 = 0LL;
  v136 = -1;
  v121 = -1;
  v139 = a5;
  v138 = a6;
  *(_QWORD *)&v137 = a7;
  v116[0] = 0;
  v118[0] = 0;
  v141 = 0LL;
  v130 = a3;
  v117 = a1;
  if ( RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled && a4[1] == 13 && *a4 == 2 )
    return 3221225488LL;
  v11 = Win32AllocPoolZInit(0x4A0uLL);
  v12 = v11;
  if ( !v11 )
    return 3221225628LL;
  *(_DWORD *)(v11 + 680) = 1;
  *(_QWORD *)(v11 + 832) = v11 + 824;
  *(_QWORD *)(v11 + 824) = v11 + 824;
  v13 = RIMGetProductString(v11, a5, a6);
  v14 = &WPP_0f3e873ef26134f564643c470ca4b782_Traceguids;
  if ( v13 < 0 )
  {
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v14,
      18,
      14,
      (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
    if ( dword_1C018D230 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
      {
        v83 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v83);
        TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v154, L"Failed to retrieve productString");
        TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v84, 5u, &pData);
      }
    }
  }
  *(_DWORD *)(a2 + 768) = 2;
  RIMGetContainerId(a5, (void *)(a2 + 1528), (_DWORD *)(a2 + 768));
  v15 = *a4;
  v122 = *(struct _UNICODE_STRING *)(v12 + 280);
  v16 = RIMIsDeviceExcluded(v15, &v122);
  v18 = 4LL;
  if ( v16 )
    goto LABEL_44;
  v19 = 1;
  v20 = *(_DWORD *)(v117 + 76);
  if ( (v20 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v12 + 24) = 5;
      if ( (unsigned int)RIMAbIsDeviceArbitrationSupported() )
      {
        rimSetupPalmTelemetry(v117);
        if ( (int)RIMInitializeDeadzone() < 0 )
        {
          LOBYTE(v82) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v82,
            18,
            15,
            (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
          gDeviceArbitrationType = 1;
        }
      }
      goto LABEL_44;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v12 + 24) = 6;
      if ( (unsigned int)RIMIsRunningOnDesktop() )
        goto LABEL_44;
      if ( (unsigned int)RIMIsRunningOnSurfaceHub() )
        goto LABEL_44;
      goto LABEL_9;
    }
    v18 = 4LL;
  }
  if ( (v20 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v20 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      goto LABEL_9;
    v19 = 0;
    goto LABEL_123;
  }
  *(_DWORD *)(v12 + 24) = 1;
  v21 = RIMAssignTouchType(v12, a3);
  if ( v21 == -1073741668 )
    goto LABEL_10;
  if ( *a4 == 5 )
  {
    v140 = *(_DWORD *)(v12 + 24);
    *(_DWORD *)(v12 + 24) = 7;
  }
  v17 = 1LL;
  v28 = *(_DWORD *)(v117 + 76);
  if ( (v28 & 4) != 0 )
  {
    v18 = 0LL;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
      v19 = 0;
  }
  else
  {
    v18 = 0LL;
  }
  if ( (v28 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
    v19 = 0;
  if ( (v28 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    v19 = 0;
  if ( v19 )
  {
LABEL_123:
    if ( v19 != 1 )
      goto LABEL_44;
LABEL_9:
    v21 = -1073741808;
    goto LABEL_10;
  }
  v21 = RIMGetMaxCountFeatureDetails(v117, v12, v130, (_DWORD)a4, (__int64)v139, (__int64)v138);
  if ( v21 == -1073741668 )
  {
    if ( dword_1C018D230 <= 5u )
    {
      v22 = v117;
      goto LABEL_11;
    }
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
    {
      v86 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pDesc, v86);
      TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&v154, L"Failed to get max count feature details");
      TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v87, v88, &pData);
    }
    goto LABEL_10;
  }
LABEL_44:
  v29 = v130;
  v116[0] = 1;
  if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v147, (__int64)v116, v130) >= 0 )
  {
    if ( v148 >= v149 || v148 < 0 || v149 < 0xFFFF )
    {
      if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
      {
        v89 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v89);
        TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v154, L"Bad ScanTime minimum");
        TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v90, v91, &pData);
      }
LABEL_132:
      v21 = -1073741668;
      goto LABEL_10;
    }
    *(_DWORD *)(v12 + 276) |= 0x200u;
    *(_DWORD *)(v12 + 800) = v149;
  }
  v116[0] = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 688), 0, 0LL, (__int64)v116, v29);
  v21 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
  {
    if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
    {
      v92 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pDesc, v92);
      TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&v154, L"Coordinate usage missing");
      TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v93, v94, &pData);
    }
    goto LABEL_10;
  }
  v31 = 6LL;
  v32 = (_DWORD *)(v12 + 32);
  do
  {
    *v32 = -1;
    v32 += 4;
    --v31;
  }
  while ( v31 );
  if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 276) & 8) == 0
      || !*(_WORD *)(*(_QWORD *)(v12 + 672) + 8LL)
      || (v118[0] = 2,
          v95 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 672) + 8LL),
                  0,
                  (__int64)v155,
                  (__int64)v118,
                  v130),
          v21 = v95,
          v95 >= 0) )
    {
      v33 = v116[0] + (unsigned int)v118[0];
      v115 = v116[0] + v118[0];
      *(_QWORD *)&v122.Length = Win32AllocPool(72 * v33, 2020635474LL);
      v34 = *(__m128i **)&v122.Length;
      if ( !*(_QWORD *)&v122.Length
        || (v21 = rimHidP_GetSpecificValueCaps(
                    0,
                    0,
                    *(unsigned __int16 *)(v12 + 688),
                    0,
                    *(__int64 *)&v122.Length,
                    (__int64)v116,
                    v130),
            v21 < 0) )
      {
        v7 = v34;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(v12 + 276) & 8) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 688), v116[0], v130) )
      {
        LOBYTE(v35) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          18,
          16,
          (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
      }
      if ( v118[0] )
      {
        v96 = v116[0];
        v97 = (__m128i *)v155;
        v98 = 0;
        do
        {
          if ( (unsigned int)v96 >= (unsigned int)v33 )
            break;
          v99 = 9 * v96;
          ++v98;
          v96 = (unsigned int)(v96 + 1);
          *(__m128i *)((char *)v34 + 8 * v99) = *v97;
          *(__m128i *)((char *)v34 + 8 * v99 + 16) = v97[1];
          *(__m128i *)((char *)v34 + 8 * v99 + 32) = v97[2];
          *(__m128i *)((char *)v34 + 8 * v99 + 48) = v97[3];
          v100 = v97[4].m128i_i64[0];
          v97 = (__m128i *)((char *)v97 + 72);
          v34[4].m128i_i64[v99] = v100;
        }
        while ( v98 < 2 );
      }
      v36 = v115;
      v37 = 0;
      v38 = 0;
      v39 = (_DWORD)v33 == 0;
      v40 = v115;
      v133 = 0;
      v123 = 0;
      v120 = 0;
      v41 = v115;
      v119 = 0;
      if ( v39 )
      {
        v73 = v115;
        v135 = v115;
        v134 = v115;
        v132 = v115;
        v71 = v115;
        v131 = v115;
        v72 = v115;
      }
      else
      {
        v42 = v34 + 1;
        v135 = v115;
        v134 = v115;
        v132 = v115;
        v129 = v115;
        v131 = v115;
        v126 = v115;
        v127 = v115;
        v128 = v115;
        v124 = v115;
        v125 = v115;
        while ( v38 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v42->m128i_i8[0] )
          {
            v21 = -1073741668;
            break;
          }
          v43 = *a4;
          if ( *a4 == 2 )
            v43 = 1;
          v44 = v42[2].m128i_i16[4] | ((v42[-1].m128i_i16[0] | (unsigned __int16)(16 * v43)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v44) )
          {
            v45 = v120;
            v46 = 60LL * v120;
            v47 = 16LL * v120;
            *(_WORD *)(v46 + v12 + 312) = v42[-1].m128i_i16[0];
            *(_WORD *)(v46 + v12 + 324) = v42[2].m128i_i16[4];
            *(_DWORD *)(v46 + v12 + 316) = v42[-1].m128i_u8[2];
            *(_WORD *)(v46 + v12 + 322) = v42[-1].m128i_i16[5];
            *(_DWORD *)(v46 + v12 + 328) = v42->m128i_u8[0];
            *(_DWORD *)(v46 + v12 + 344) = v42[1].m128i_i32[2];
            *(_DWORD *)(v46 + v12 + 348) = v42[1].m128i_i32[3];
            *(_DWORD *)(v46 + v12 + 352) = v42[2].m128i_i32[0];
            *(_DWORD *)(v46 + v12 + 356) = v42[2].m128i_i32[1];
            *(_WORD *)(v46 + v12 + 368) = v42->m128i_i16[1];
            *(_DWORD *)(v12 + 16 * (v45 + 2)) = v45;
            *(_WORD *)(v47 + v12 + 28) = v42[-1].m128i_i16[0];
            *(_WORD *)(v47 + v12 + 30) = v42[2].m128i_i16[4];
            v48 = *v42;
            v142[0] = v42[-1];
            v49 = v42[1];
            v142[1] = v48;
            v50 = v42[2];
            v142[2] = v49;
            v143 = v42[3].m128i_i64[0];
            v142[3] = v50;
            RIMRetrieveNormalizationRange(v46, v142, v12 + v47 + 36);
            ++v120;
            if ( v42[2].m128i_i16[4] == 48 && v42[-1].m128i_i16[0] == 1 )
            {
              v51 = v42[2];
              v52 = v42[3].m128i_i64[0];
              v53 = v42[-1];
              v136 = v123;
              v54 = *v42;
              v55 = v42[1];
              v145 = v52;
              v144[0] = v53;
              v144[1] = v54;
              v144[2] = v55;
              v144[3] = v51;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v51, 4))
                                                      - _mm_cvtsi128_si32(v51)),
                                         v144);
              v56 = v42[1].m128i_i32[2];
              *(_DWORD *)(v12 + 124) = v56;
              v135 = v56;
              v57 = v42[1].m128i_i32[3];
              *(_DWORD *)(v12 + 132) = v57;
              v58 = v42[1].m128i_u32[1];
              v59 = v42[2].m128i_u32[1];
              v134 = v57;
              v132 = v42[1].m128i_u32[0];
              v126 = v58;
              v127 = v59;
              if ( (v132 & 0xF) == 0xE )
              {
                v60 = v133;
                if ( (_BYTE)v58 == 51 )
                  v60 = v59;
                v133 = v60;
              }
            }
            if ( v42[2].m128i_i16[4] == 49 && v42[-1].m128i_i16[0] == 1 )
            {
              v61 = (struct _EVENT_DATA_DESCRIPTOR)v42[2];
              v62 = v42[3].m128i_u64[0];
              v63 = (EVENT_DATA_DESCRIPTOR)v42[-1];
              v121 = v123;
              v64 = *v42;
              v65 = (struct _EVENT_DATA_DESCRIPTOR)v42[1];
              v154.Ptr = v62;
              pData = v63;
              v151 = v64;
              pDesc = v65;
              v153 = v61;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v61, 4))
                                                      - _mm_cvtsi128_si32((__m128i)v61)),
                                         &pData);
              v66 = v42[1].m128i_u32[2];
              *(_DWORD *)(v12 + 128) = v66;
              v128 = v66;
              v67 = v42[1].m128i_u32[3];
              *(_DWORD *)(v12 + 136) = v67;
              v68 = v42[1].m128i_u32[1];
              v69 = v42[2].m128i_u32[1];
              v129 = v67;
              v131 = v42[1].m128i_u32[0];
              v124 = v68;
              v125 = v69;
              if ( (v131 & 0xF) == 0xE )
              {
                v70 = v119;
                if ( (_BYTE)v68 == 51 )
                  v70 = v69;
                v119 = v70;
              }
            }
            RIMCheckPressureUsageStatus(v117, v12, v44);
          }
          v42 = (__m128i *)((char *)v42 + 72);
          if ( ++v123 >= v115 )
            break;
          v38 = v120;
        }
        v34 = *(__m128i **)&v122.Length;
        v37 = v119;
        v71 = v124;
        v72 = v125;
        v36 = v126;
        v41 = v127;
        v40 = v128;
        v73 = v129;
      }
      RIMUpdateMonitorQuirk(v133, a2, v12, v135, v134, v40, v73, v41, v72, v133, v37, v36, v132, v71, v131);
      v17 = v120;
      *(_DWORD *)(v12 + 684) = v120;
      if ( v21 < 0 )
        goto LABEL_154;
      if ( v136 == -1 || (v17 = v121, v121 == -1) )
      {
        if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
        {
          v108 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v108);
          TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v154, L"coordinate usage missing");
          TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v109, v110, &pData);
        }
      }
      else
      {
        v18 = 9LL * v136;
        if ( v34[2].m128i_i32[18 * v136 + 3] == v34[2].m128i_i32[18 * v136 + 2]
          || (v18 = 9LL * v121, v34[2].m128i_i32[18 * v121 + 3] == v34[2].m128i_i32[18 * v121 + 2]) )
        {
          if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
          {
            v111 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v111);
            TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v154, L"coordinate range invalid");
            TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v112, v113, &pData);
          }
        }
        else
        {
          v74 = (_QWORD *)RIMGetQDCActivePathsData(v146);
          v75 = *(_DWORD *)(v12 + 24);
          v76 = (__int64)v74;
          v141 = v74;
          if ( v75 == 6 )
          {
            v77 = v130;
          }
          else if ( v75 == 7 )
          {
            RIMComputePTPCurtainRegions(v12);
            v77 = v130;
            v104 = *(_QWORD *)v137;
            DWORD2(v137) = *(_DWORD *)(v137 + 8);
            *(_QWORD *)&v137 = v104;
            if ( (int)ApiSetValidateDeviceSignature(
                        (_DWORD)v139,
                        (_DWORD)v138,
                        v130,
                        (_DWORD)a4,
                        v12,
                        (__int64)&v137,
                        0) < 0 )
            {
              v21 = -1073741668;
              if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
              {
                v105 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v105);
                TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v154, L"Failed to validate device signature");
                TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v106, v107, &pData);
              }
              goto LABEL_154;
            }
          }
          else
          {
            v121 = 0;
            *(_DWORD *)(a2 + 776) = 1;
            RIMReadDigitizerToMonitorMappings(a2);
            rimFindMonitorForDigitizerWithQDCData(a2, v76, &v121);
            v77 = v130;
            if ( *a4 == 4 )
            {
              v78 = *(_QWORD *)v137;
              DWORD2(v137) = *(_DWORD *)(v137 + 8);
              *(_QWORD *)&v137 = v78;
              if ( (int)ApiSetValidateDeviceSignature(
                          (_DWORD)v139,
                          (_DWORD)v138,
                          v130,
                          (_DWORD)a4,
                          v12,
                          (__int64)&v137,
                          v121) < 0 )
              {
                v21 = -1073741668;
                LOBYTE(v79) = 3;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v79,
                  18,
                  17,
                  (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
                if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
                {
                  v101 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                  TlgCreateWsz(&pDesc, v101);
                  TlgCreateWsz(&v153, *(LPCWSTR *)(a2 + 216));
                  TlgCreateWsz(&v154, L"Failed to validate device signature");
                  TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A5B5, 0LL, v102, v103, &pData);
                }
                v7 = *(__m128i **)&v122.Length;
                goto LABEL_10;
              }
              v80 = *(_DWORD *)(v12 + 276);
              if ( (v80 & 0x400) == 0 )
                *(_DWORD *)(v12 + 276) = v80 & 0xFFFFFDFF;
            }
          }
          if ( *(_DWORD *)(v12 + 148) <= *(_DWORD *)(v12 + 140) || *(_DWORD *)(v12 + 152) <= *(_DWORD *)(v12 + 144) )
            *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v137, *(_QWORD *)(a2 + 784));
          RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12, 0, v76);
          if ( *(_DWORD *)(v12 + 24) != 7
            || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
          {
            v22 = v117;
            v21 = RIMGetDeviceButtons(v117, v12, v77, (_DWORD)a4, cData);
            if ( v21 < 0 )
            {
              LOBYTE(v18) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                18,
                18,
                (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
              v7 = *(__m128i **)&v122.Length;
            }
            else
            {
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v81 = *(_OWORD *)(a2 + 208);
                if ( (int)IsRetrieveCalibrationDataSupported() >= 0 )
                {
                  v137 = v81;
                  RetrieveCalibrationData(v12, &v137);
                }
              }
              v7 = *(__m128i **)&v122.Length;
            }
            goto LABEL_11;
          }
        }
      }
      v21 = -1073741668;
LABEL_154:
      v7 = *(__m128i **)&v122.Length;
      goto LABEL_10;
    }
    goto LABEL_132;
  }
LABEL_10:
  v22 = v117;
LABEL_11:
  RIMFreeQDCActivePathsData(v141, v18, v17);
  if ( v7 )
    Win32FreePool(v7, v23, v24);
  if ( v21 < 0 )
    goto LABEL_14;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v21 = RIMValidatePTPProperties(v140, v12);
  if ( v21 < 0 )
  {
LABEL_14:
    RIMFreePointerDevice(v22, v12);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v22 + 660) += *(_DWORD *)(v12 + 680);
      *(_DWORD *)(v12 + 276) |= 0x1000u;
    }
    if ( *(_DWORD *)(v12 + 24) != 7 )
      ApiSetUpdatePointerDeviceSystemMetrics(v12);
    *(_DWORD *)(v12 + 704) = 100;
    *(_QWORD *)(v12 + 712) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 472) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v26 = *(_QWORD **)(v22 + 568);
    if ( *v26 != v22 + 560 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 824) = v22 + 560;
    *(_QWORD *)(v12 + 832) = v26;
    *v26 = v12 + 824;
    *(_QWORD *)(v22 + 568) = v12 + 824;
    *(_QWORD *)(v12 + 696) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent((__int64)v26, a2, v24) )
    {
      LOBYTE(v27) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        18,
        19,
        (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
    }
  }
  return (unsigned int)v21;
}
