/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C000A11C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     rimSetupPalmTelemetry @ 0x1C0007488 (rimSetupPalmTelemetry.c)
 *     RIMInitializeDeadzone @ 0x1C00074E8 (RIMInitializeDeadzone.c)
 *     RIMAllocateMonitor @ 0x1C000774C (RIMAllocateMonitor.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C0007B64 (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMIsRunningOnDesktop @ 0x1C0008234 (RIMIsRunningOnDesktop.c)
 *     ApiSetValidateDeviceSignature @ 0x1C0008254 (ApiSetValidateDeviceSignature.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00085B0 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0008644 (RIMFindMonitorForDigitizer.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00089D4 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0008ADC (RIMUpdateMonitorQuirk.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009128 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMGetDeviceButtons @ 0x1C000917C (RIMGetDeviceButtons.c)
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     RIMAssignTouchType @ 0x1C000972C (RIMAssignTouchType.c)
 *     RIMGetDeviceParent @ 0x1C00098C8 (RIMGetDeviceParent.c)
 *     RIMGetPropertyCount @ 0x1C0009F18 (RIMGetPropertyCount.c)
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     RIMIsEssentialUsage @ 0x1C000AC04 (RIMIsEssentialUsage.c)
 *     RIMCheckPressureUsageStatus @ 0x1C000ACB0 (RIMCheckPressureUsageStatus.c)
 *     RIMRetrieveNormalizationRange @ 0x1C000ACE0 (RIMRetrieveNormalizationRange.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     RIMIsDeviceExcluded @ 0x1C000B210 (RIMIsDeviceExcluded.c)
 *     RIMGetContainerId @ 0x1C000B2FC (RIMGetContainerId.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     RIMGetProductString @ 0x1C00585D0 (RIMGetProductString.c)
 *     RIMInitFakeMonitor @ 0x1C0070278 (RIMInitFakeMonitor.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C008A0DC (RIMComputeSpecificHighMetricValue.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C0107F30 (RIMGetPhysicalSizeFromMonitor.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C010C8C0 (RIMIsRunningOnSurfaceHub.c)
 *     RIMValidatePTPProperties @ 0x1C0117F74 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AE24 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int16 *v7; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // r14d
  int v18; // esi
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rsi
  int SpecificValueCaps; // eax
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  int v28; // edx
  int v29; // r9d
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // r11d
  int v33; // r10d
  __m128i *v34; // r13
  __int16 v35; // r12
  unsigned __int16 v36; // r12
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm5
  __int64 v45; // xmm0_8
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // eax
  struct _EVENT_DATA_DESCRIPTOR v54; // xmm5
  ULONGLONG v55; // xmm0_8
  EVENT_DATA_DESCRIPTOR v56; // xmm2
  __m128i v57; // xmm3
  struct _EVENT_DATA_DESCRIPTOR v58; // xmm4
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // edx
  int v63; // eax
  int v64; // edx
  int v65; // r8d
  int v66; // r11d
  int v67; // r13d
  __int128 v68; // xmm0
  __int16 *v69; // r12
  __int128 v70; // xmm1
  bool v71; // zf
  __int64 v72; // r8
  int v73; // edx
  __int64 v74; // rsi
  __int64 v75; // xmm0_8
  int v76; // eax
  int v77; // edx
  __int128 v78; // xmm6
  _QWORD *v79; // rcx
  int v80; // edx
  int v81; // edx
  const wchar_t *v82; // rax
  LPCGUID v83; // r9
  const wchar_t *v85; // rax
  LPCGUID v86; // r9
  UINT32 v87; // r10d
  const wchar_t *v88; // rax
  LPCGUID v89; // r9
  UINT32 v90; // r10d
  const wchar_t *v91; // rax
  LPCGUID v92; // r9
  UINT32 v93; // r10d
  int v94; // eax
  __int64 v95; // r8
  _BYTE *v96; // rdx
  unsigned int v97; // r9d
  __int64 v98; // rcx
  __int64 v99; // xmm0_8
  int v100; // edx
  int v101; // eax
  const wchar_t *v102; // rax
  LPCGUID v103; // r9
  UINT32 v104; // r10d
  const wchar_t *v105; // rax
  LPCGUID v106; // r9
  UINT32 v107; // r10d
  __int64 v108; // xmm0_8
  const wchar_t *v109; // rax
  LPCGUID v110; // r9
  UINT32 v111; // r10d
  const wchar_t *v112; // rax
  LPCGUID v113; // r9
  UINT32 v114; // r10d
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  unsigned int v116; // [rsp+88h] [rbp-80h]
  unsigned __int16 v117[2]; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int16 v118; // [rsp+90h] [rbp-78h] BYREF
  __int64 v119; // [rsp+98h] [rbp-70h]
  int v120; // [rsp+A0h] [rbp-68h] BYREF
  int v121; // [rsp+A4h] [rbp-64h]
  unsigned int v122; // [rsp+A8h] [rbp-60h]
  unsigned int v123; // [rsp+ACh] [rbp-5Ch]
  int v124; // [rsp+B0h] [rbp-58h]
  unsigned int v125; // [rsp+B4h] [rbp-54h]
  unsigned int v126; // [rsp+B8h] [rbp-50h]
  unsigned int v127; // [rsp+BCh] [rbp-4Ch]
  unsigned int v128; // [rsp+C0h] [rbp-48h]
  unsigned int v129; // [rsp+C4h] [rbp-44h]
  unsigned int v130; // [rsp+C8h] [rbp-40h]
  __int64 v131; // [rsp+D0h] [rbp-38h]
  unsigned int v132; // [rsp+D8h] [rbp-30h]
  unsigned int v133; // [rsp+DCh] [rbp-2Ch]
  int v134; // [rsp+E0h] [rbp-28h]
  int v135; // [rsp+E4h] [rbp-24h]
  int v136; // [rsp+E8h] [rbp-20h]
  __int64 v137; // [rsp+F8h] [rbp-10h] BYREF
  int v138; // [rsp+100h] [rbp-8h]
  unsigned int v139; // [rsp+108h] [rbp+0h]
  __int64 v140; // [rsp+110h] [rbp+8h]
  __int64 v141; // [rsp+118h] [rbp+10h]
  __int16 *v142; // [rsp+120h] [rbp+18h]
  __int128 v143; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v144[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v145; // [rsp+178h] [rbp+70h]
  _OWORD v146[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v147; // [rsp+1C8h] [rbp+C0h]
  char v148[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v149; // [rsp+200h] [rbp+F8h]
  int v150; // [rsp+204h] [rbp+FCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  __m128i v152; // [rsp+238h] [rbp+130h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+248h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v154; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v156[144]; // [rsp+278h] [rbp+170h] BYREF

  v7 = a4;
  v135 = -1;
  v136 = -1;
  v10 = a1;
  v141 = a5;
  v140 = a6;
  v137 = a7;
  v117[0] = 0;
  v118 = 0;
  v142 = a4;
  v131 = a3;
  v119 = a1;
  if ( RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled && v7[1] == 13 && *v7 == 2 )
    return 3221225488LL;
  v11 = Win32AllocPoolZInit(0x738uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 696) = 1;
    *(_DWORD *)(v11 + 700) = 1;
    *(_QWORD *)(v11 + 1496) = v11 + 1488;
    *(_QWORD *)(v11 + 1488) = v11 + 1488;
    v13 = RIMGetProductString(v11, a5, a6);
    v14 = &WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids;
    if ( v13 < 0 )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        18,
        14,
        (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
      if ( (unsigned int)dword_1C0188840 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
        {
          v82 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v82);
          TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v155, L"Failed to retrieve productString");
          TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v83, 5u, &pData);
        }
      }
    }
    *(_DWORD *)(v12 + 264) = 2;
    RIMGetContainerId(a5, v12 + 268);
    v15 = (unsigned __int16)*v7;
    v143 = *(_OWORD *)(v12 + 296);
    if ( (unsigned int)RIMIsDeviceExcluded(v15, &v143) )
      goto LABEL_33;
    v16 = *(_DWORD *)(v10 + 76);
    v17 = 1;
    if ( (v16 & 4) != 0 && *v7 == 2 )
    {
      *(_DWORD *)(v12 + 24) = 5;
      if ( (unsigned int)RIMAbIsDeviceArbitrationSupported() )
      {
        rimSetupPalmTelemetry(v10);
        if ( (int)RIMInitializeDeadzone() < 0 )
        {
          LOBYTE(v81) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v81,
            18,
            15,
            (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
          gDeviceArbitrationType = 1;
        }
      }
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(v10 + 76) & 4) != 0 && *v7 == 1 )
    {
      *(_DWORD *)(v12 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_33;
      if ( (unsigned int)RIMIsRunningOnSurfaceHub() )
        goto LABEL_33;
    }
    else
    {
      if ( (v16 & 0x18) != 0 && (unsigned __int16)(*v7 - 4) <= 1u )
      {
        *(_DWORD *)(v12 + 24) = 1;
        v18 = RIMAssignTouchType(v12, a3);
        if ( v18 == -1073741668 )
          goto LABEL_93;
        if ( *v7 == 5 )
        {
          v139 = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 24) = 7;
        }
        v21 = *(_DWORD *)(v10 + 76);
        if ( (v21 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
          v17 = 0;
        if ( (v21 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
          v17 = 0;
        if ( (v21 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
          v17 = 0;
        if ( !v17 )
        {
          v18 = RIMGetMaxCountFeatureDetails(v10, v12, v131, v7, v141, v140);
          if ( v18 == -1073741668 )
          {
            if ( (unsigned int)dword_1C0188840 > 5
              && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
            {
              v85 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v85);
              TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
              TlgCreateWsz(&v155, L"Failed to get max count feature details");
              TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v86, v87, &pData);
            }
            goto LABEL_11;
          }
          goto LABEL_33;
        }
      }
      else
      {
        if ( (v16 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
          goto LABEL_10;
        v17 = 0;
      }
      if ( v17 != 1 )
      {
LABEL_33:
        v22 = v131;
        v117[0] = 1;
        if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v148, (__int64)v117, v131) >= 0 )
        {
          if ( v149 >= v150 || v149 < 0 || v150 < 0xFFFF )
          {
            if ( (unsigned int)dword_1C0188840 > 5
              && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
            {
              v88 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v88);
              TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
              TlgCreateWsz(&v155, L"Bad ScanTime minimum");
              TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v89, v90, &pData);
            }
            goto LABEL_136;
          }
          *(_DWORD *)(v12 + 260) |= 0x200u;
          *(_DWORD *)(v12 + 1464) = v150;
        }
        v117[0] = 0;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                              0,
                              0,
                              *(unsigned __int16 *)(v12 + 708),
                              0,
                              0LL,
                              (__int64)v117,
                              v22);
        v18 = SpecificValueCaps;
        if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
        {
          v24 = 6LL;
          v25 = (_DWORD *)(v12 + 32);
          do
          {
            *v25 = -1;
            v25 += 4;
            --v24;
          }
          while ( v24 );
          if ( (int)RIMCmAllocPointerDeviceContacts(v12) < 0 )
            goto LABEL_93;
          if ( (*(_DWORD *)(v12 + 260) & 8) == 0
            || !*(_WORD *)(*(_QWORD *)(v12 + 688) + 8LL)
            || (v118 = 2,
                v94 = rimHidP_GetSpecificValueCaps(
                        0,
                        0,
                        *(unsigned __int16 *)(*(_QWORD *)(v12 + 688) + 8LL),
                        0,
                        (__int64)v156,
                        (__int64)&v118,
                        v131),
                v18 = v94,
                v94 >= 0) )
          {
            v26 = v117[0] + (unsigned int)v118;
            v116 = v117[0] + v118;
            v27 = Win32AllocPool(72 * v26, 2020635474LL);
            if ( !v27 )
            {
              v10 = v119;
              goto LABEL_93;
            }
            v18 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 708), 0, v27, (__int64)v117, v131);
            if ( v18 < 0 )
              goto LABEL_180;
            if ( (*(_DWORD *)(v12 + 260) & 8) == 0 && !RIMGetPropertyCount(v12, *(_WORD *)(v12 + 708), v117[0], v131) )
            {
              LOBYTE(v28) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                18,
                16,
                (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
            }
            if ( v118 )
            {
              v95 = v117[0];
              v96 = v156;
              v97 = 0;
              do
              {
                if ( (unsigned int)v95 >= (unsigned int)v26 )
                  break;
                v98 = 9 * v95;
                ++v97;
                v95 = (unsigned int)(v95 + 1);
                *(_OWORD *)(v27 + 8 * v98) = *(_OWORD *)v96;
                *(_OWORD *)(v27 + 8 * v98 + 16) = *((_OWORD *)v96 + 1);
                *(_OWORD *)(v27 + 8 * v98 + 32) = *((_OWORD *)v96 + 2);
                *(_OWORD *)(v27 + 8 * v98 + 48) = *((_OWORD *)v96 + 3);
                v99 = *((_QWORD *)v96 + 8);
                v96 += 72;
                *(_QWORD *)(v27 + 8 * v98 + 64) = v99;
              }
              while ( v97 < 2 );
            }
            v29 = v116;
            v30 = 0LL;
            v31 = 0;
            v32 = 0;
            v124 = 0;
            v123 = 0;
            v33 = v116;
            v122 = 0;
            v121 = 0;
            if ( (_DWORD)v26 )
            {
              v34 = (__m128i *)(v27 + 16);
              v120 = v116;
              v134 = v116;
              v133 = v116;
              v129 = v116;
              v130 = v116;
              v132 = v116;
              v127 = v116;
              v128 = v116;
              v125 = v116;
              v126 = v116;
              while ( v32 < 6 )
              {
                if ( *(_DWORD *)(v12 + 24) == 4 && !v34->m128i_i8[0] )
                {
                  v18 = -1073741668;
                  break;
                }
                v35 = *v7;
                if ( v35 == 2 )
                  v35 = 1;
                v36 = v34[2].m128i_i16[4] | ((v34[-1].m128i_i16[0] | (unsigned __int16)(16 * v35)) << 8);
                if ( (unsigned int)RIMIsEssentialUsage(v36) )
                {
                  v37 = v123;
                  v38 = 60LL * v123;
                  v39 = 16LL * v123;
                  *(_WORD *)(v38 + v12 + 328) = v34[-1].m128i_i16[0];
                  *(_WORD *)(v38 + v12 + 340) = v34[2].m128i_i16[4];
                  *(_DWORD *)(v38 + v12 + 332) = v34[-1].m128i_u8[2];
                  *(_WORD *)(v38 + v12 + 338) = v34[-1].m128i_i16[5];
                  *(_DWORD *)(v38 + v12 + 344) = v34->m128i_u8[0];
                  v40 = 60 * (v37 + 6);
                  *(_DWORD *)(v40 + v12) = v34[1].m128i_i32[2];
                  *(_DWORD *)(v38 + v12 + 364) = v34[1].m128i_i32[3];
                  *(_DWORD *)(v38 + v12 + 368) = v34[2].m128i_i32[0];
                  *(_DWORD *)(v38 + v12 + 372) = v34[2].m128i_i32[1];
                  *(_WORD *)(v38 + v12 + 384) = v34->m128i_i16[1];
                  *(_DWORD *)(v12 + 16 * (v37 + 2)) = v37;
                  *(_WORD *)(v39 + v12 + 28) = v34[-1].m128i_i16[0];
                  *(_WORD *)(v39 + v12 + 30) = v34[2].m128i_i16[4];
                  v41 = *v34;
                  v144[0] = v34[-1];
                  v42 = v34[1];
                  v144[1] = v41;
                  v43 = v34[2];
                  v144[2] = v42;
                  v145 = v34[3].m128i_i64[0];
                  v144[3] = v43;
                  RIMRetrieveNormalizationRange(v40, v144, v12 + v39 + 36);
                  ++v123;
                  if ( v34[2].m128i_i16[4] == 48 && v34[-1].m128i_i16[0] == 1 )
                  {
                    v44 = v34[2];
                    v45 = v34[3].m128i_i64[0];
                    v46 = v34[-1];
                    v135 = v124;
                    v47 = *v34;
                    v48 = v34[1];
                    v147 = v45;
                    v146[0] = v46;
                    v146[1] = v47;
                    v146[2] = v48;
                    v146[3] = v44;
                    *(_DWORD *)(v12 + 164) = RIMComputeSpecificHighMetricValue(
                                               (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v44, 4))
                                                            - _mm_cvtsi128_si32(v44)),
                                               v146);
                    v49 = v34[1].m128i_i32[2];
                    *(_DWORD *)(v12 + 172) = v49;
                    v120 = v49;
                    v50 = v34[1].m128i_i32[3];
                    *(_DWORD *)(v12 + 180) = v50;
                    v51 = v34[1].m128i_u32[1];
                    v52 = v34[2].m128i_u32[1];
                    v134 = v50;
                    v133 = v34[1].m128i_u32[0];
                    v127 = v51;
                    v128 = v52;
                    if ( (v133 & 0xF) == 0xE )
                    {
                      v53 = v122;
                      if ( (_BYTE)v51 == 51 )
                        v53 = v52;
                      v122 = v53;
                    }
                  }
                  if ( v34[2].m128i_i16[4] == 49 && v34[-1].m128i_i16[0] == 1 )
                  {
                    v54 = (struct _EVENT_DATA_DESCRIPTOR)v34[2];
                    v55 = v34[3].m128i_u64[0];
                    v56 = (EVENT_DATA_DESCRIPTOR)v34[-1];
                    v136 = v124;
                    v57 = *v34;
                    v58 = (struct _EVENT_DATA_DESCRIPTOR)v34[1];
                    v155.Ptr = v55;
                    pData = v56;
                    v152 = v57;
                    pDesc = v58;
                    v154 = v54;
                    *(_DWORD *)(v12 + 168) = RIMComputeSpecificHighMetricValue(
                                               (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v54, 4))
                                                            - _mm_cvtsi128_si32((__m128i)v54)),
                                               &pData);
                    v59 = v34[1].m128i_u32[2];
                    *(_DWORD *)(v12 + 176) = v59;
                    v129 = v59;
                    v60 = v34[1].m128i_u32[3];
                    *(_DWORD *)(v12 + 184) = v60;
                    v61 = v34[1].m128i_u32[1];
                    v62 = v34[2].m128i_u32[1];
                    v130 = v60;
                    v132 = v34[1].m128i_u32[0];
                    v125 = v61;
                    v126 = v62;
                    if ( (v132 & 0xF) == 0xE )
                    {
                      v63 = v121;
                      if ( (_BYTE)v61 == 51 )
                        v63 = v62;
                      v121 = v63;
                    }
                  }
                  RIMCheckPressureUsageStatus(v119, v12, v36);
                }
                v34 = (__m128i *)((char *)v34 + 72);
                if ( ++v124 >= v116 )
                  break;
                v7 = v142;
                v32 = v123;
              }
              v31 = v121;
              v30 = v122;
              v64 = v125;
              v65 = v126;
              v29 = v127;
              v33 = v128;
              v66 = v129;
              v67 = v130;
            }
            else
            {
              v66 = v116;
              v67 = v116;
              v120 = v116;
              v134 = v116;
              v133 = v116;
              v64 = v116;
              v132 = v116;
              v65 = v116;
            }
            RIMUpdateMonitorQuirk(
              v30,
              a2,
              *(_DWORD *)(v12 + 24),
              v120,
              v134,
              v66,
              v67,
              v33,
              v65,
              v30,
              v31,
              v29,
              v133,
              v64,
              v132);
            v68 = *(_OWORD *)(v12 + 156);
            v69 = v142;
            *(_DWORD *)(v12 + 704) = v123;
            v70 = *(_OWORD *)(v12 + 172);
            *(_OWORD *)(v12 + 140) = v68;
            *(_OWORD *)(v12 + 188) = v70;
            if ( v18 < 0 )
              goto LABEL_180;
            if ( v135 == -1 || v136 == -1 )
            {
              if ( (unsigned int)dword_1C0188840 > 5
                && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
              {
                v112 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v112);
                TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v155, L"coordinate usage missing");
                TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v113, v114, &pData);
              }
            }
            else if ( *(_DWORD *)(v27 + 72LL * v135 + 44) == *(_DWORD *)(v27 + 72LL * v135 + 40)
                   || *(_DWORD *)(v27 + 72LL * v136 + 44) == *(_DWORD *)(v27 + 72LL * v136 + 40) )
            {
              if ( (unsigned int)dword_1C0188840 > 5
                && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
              {
                v109 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v109);
                TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v155, L"coordinate range invalid");
                TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v110, v111, &pData);
              }
            }
            else
            {
              if ( *(_DWORD *)(v27 + 72LL * v135 + 52) <= *(_DWORD *)(v27 + 72LL * v135 + 48)
                || *(_DWORD *)(v27 + 72LL * v136 + 52) <= *(_DWORD *)(v27 + 72LL * v136 + 48)
                || *(_DWORD *)(v12 + 164) <= *(_DWORD *)(v12 + 156)
                || *(_DWORD *)(v12 + 168) <= *(_DWORD *)(v12 + 160) )
              {
                if ( (*(_DWORD *)(a2 + 184) & 0x1000000) != 0 )
                  v101 = (int)IsGetPhysicalSizeFromMonitorSupported() < 0 ? 0 : GetPhysicalSizeFromMonitor(v12);
                else
                  v101 = RIMGetPhysicalSizeFromMonitor(v12);
                if ( !v101 )
                {
                  LOBYTE(v100) = 3;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v100,
                    18,
                    17,
                    (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
                }
              }
              if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 6) > 1 )
              {
                v71 = (*(_DWORD *)(a2 + 184) & 0x1000000) == 0;
                v120 = 0;
                if ( v71 )
                {
                  RIMReadDigitizerToMonitorMappings(a2);
                  RIMFindMonitorForDigitizer(v119, v12, v72, (__int64)&v120);
                }
                else
                {
                  if ( (int)IsReadDigitizerToMonitorMappingsSupported() >= 0 )
                    ReadDigitizerToMonitorMappings(a2, v12);
                  if ( (int)IsFindMonitorForDigitizerSupported() >= 0 )
                    FindMonitorForDigitizer(v12, 0LL, &v120);
                }
                v74 = v131;
                if ( *v69 != 4 )
                  goto LABEL_86;
                v75 = *(_QWORD *)v137;
                v138 = *(_DWORD *)(v137 + 8);
                v137 = v75;
                if ( (int)ApiSetValidateDeviceSignature(v141, v140, v131, (__int64)v69, v12, &v137, v120) >= 0 )
                {
                  v76 = *(_DWORD *)(v12 + 260);
                  if ( (v76 & 0x400) == 0 )
                    *(_DWORD *)(v12 + 260) = v76 & 0xFFFFFDFF;
                  goto LABEL_86;
                }
                v18 = -1073741668;
                LOBYTE(v73) = 3;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v73,
                  18,
                  18,
                  (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
                if ( (unsigned int)dword_1C0188840 <= 5
                  || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
                {
LABEL_180:
                  v10 = v119;
LABEL_92:
                  Win32FreePool(v27);
                  goto LABEL_93;
                }
LABEL_162:
                v102 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v102);
                TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v155, L"Failed to validate device signature");
                TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v103, v104, &pData);
                goto LABEL_180;
              }
              RIMAllocateMonitor(v12);
              if ( !*(_QWORD *)(v12 + 288) )
              {
                v18 = -1073741668;
                if ( (unsigned int)dword_1C0188840 > 5
                  && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
                {
                  v105 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                  TlgCreateWsz(&pDesc, v105);
                  TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
                  TlgCreateWsz(&v155, L"Failed to retrieve monitor");
                  TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v106, v107, &pData);
                }
                goto LABEL_180;
              }
              RIMInitFakeMonitor(v12);
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v74 = v131;
                goto LABEL_86;
              }
              RIMComputeVirtualHimetricSize(v12, 1LL);
              v74 = v131;
              v108 = *(_QWORD *)v137;
              v138 = *(_DWORD *)(v137 + 8);
              v137 = v108;
              if ( (int)ApiSetValidateDeviceSignature(v141, v140, v131, (__int64)v69, v12, &v137, 0) < 0 )
              {
                v18 = -1073741668;
                if ( (unsigned int)dword_1C0188840 <= 5
                  || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
                {
                  goto LABEL_180;
                }
                goto LABEL_162;
              }
              if ( (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
              {
LABEL_86:
                if ( !*(_QWORD *)(v12 + 288) )
                {
                  LOBYTE(v73) = 3;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v73,
                    18,
                    19,
                    (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
                }
                v10 = v119;
                v18 = RIMGetDeviceButtons(v119, v12, v74, v69, cData);
                if ( v18 < 0 )
                {
                  LOBYTE(v77) = 3;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v77,
                    18,
                    20,
                    (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
                }
                else if ( *(_DWORD *)(v12 + 24) != 7 )
                {
                  v78 = *(_OWORD *)(a2 + 208);
                  if ( (int)IsRetrieveCalibrationDataSupported() >= 0 )
                  {
                    v143 = v78;
                    RetrieveCalibrationData(v12, &v143);
                  }
                }
                goto LABEL_92;
              }
            }
            v18 = -1073741668;
            goto LABEL_180;
          }
LABEL_136:
          v18 = -1073741668;
          goto LABEL_11;
        }
        if ( (unsigned int)dword_1C0188840 > 5
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
        {
          v91 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v91);
          TlgCreateWsz(&v154, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v155, L"Coordinate usage missing");
          TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A2E1, 0LL, v92, v93, &pData);
        }
LABEL_93:
        if ( v18 >= 0 )
        {
          if ( *(_DWORD *)(v12 + 24) == 7 )
            v18 = RIMValidatePTPProperties(v139, v12);
          if ( v18 >= 0 )
          {
            *(_DWORD *)(a2 + 200) |= 0x80u;
            if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
            {
              *(_DWORD *)(v10 + 660) += *(_DWORD *)(v12 + 696);
              *(_DWORD *)(v12 + 260) |= 0x1000u;
            }
            if ( *(_DWORD *)(v12 + 24) != 7 )
              ApiSetUpdatePointerDeviceSystemMetrics(v12);
            *(_DWORD *)(v12 + 856) = 100;
            *(_QWORD *)(v12 + 864) = 100 * gliQpcFreq.QuadPart / 1000;
            *(_QWORD *)(a2 + 472) = v12;
            *(_QWORD *)(v12 + 16) = a2;
            v79 = *(_QWORD **)(v10 + 568);
            if ( *v79 != v10 + 560 )
              __fastfail(3u);
            *(_QWORD *)(v12 + 1488) = v10 + 560;
            *(_QWORD *)(v12 + 1496) = v79;
            *v79 = v12 + 1488;
            *(_QWORD *)(v10 + 568) = v12 + 1488;
            *(_QWORD *)(v12 + 712) = -1LL;
            if ( !(unsigned int)RIMGetDeviceParent((__int64)v79, a2, v20) )
            {
              LOBYTE(v80) = 3;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v80,
                18,
                21,
                (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
            }
            return (unsigned int)v18;
          }
        }
LABEL_11:
        RIMFreePointerDevice(v10, v12);
        return (unsigned int)v18;
      }
    }
LABEL_10:
    v18 = -1073741808;
    goto LABEL_11;
  }
  return 3221225628LL;
}
