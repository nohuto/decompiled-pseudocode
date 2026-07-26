/*
 * XREFs of ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K1KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C0076C74
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C00702EC (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0077E30 (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingNicAutoPowerSaver(
        _NDIS_MINIPORT_AOAC *Routine,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        struct _NDIS_NAPS_TELEMETRY_REASON_DATA *a8,
        unsigned int a9,
        TraceLoggingHProvider hProvider)
{
  _NDIS_MINIPORT_AOAC *v11; // rbx
  union _LARGE_INTEGER v12; // rax
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  _NDIS_SS_RESUME_REASON v17; // [rsp+40h] [rbp-C8h] BYREF
  int WakeCount; // [rsp+44h] [rbp-C4h] BYREF
  int BusyCount; // [rsp+48h] [rbp-C0h] BYREF
  _NDIS_SS_RESUME_REASON v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  _NDIS_SS_RESUME_REASON v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  _NDIS_SS_RESUME_REASON v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  _NDIS_SS_RESUME_REASON v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  int v31; // [rsp+78h] [rbp-90h] BYREF
  int ProviderMetadataPtr; // [rsp+7Ch] [rbp-8Ch] BYREF
  int LevelPlus1_low; // [rsp+80h] [rbp-88h] BYREF
  int KeywordAny_high; // [rsp+84h] [rbp-84h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  int RegHandle; // [rsp+8Ch] [rbp-7Ch] BYREF
  int KeywordAll_low; // [rsp+90h] [rbp-78h] BYREF
  int EnableCallback_high; // [rsp+94h] [rbp-74h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int AnnotationFunc; // [rsp+9Ch] [rbp-6Ch] BYREF
  int CallbackContext_low; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+A4h] [rbp-64h] BYREF
  int v43; // [rsp+A8h] [rbp-60h] BYREF
  int KeywordAny; // [rsp+ACh] [rbp-5Ch] BYREF
  int ProviderMetadataPtr_low; // [rsp+B0h] [rbp-58h] BYREF
  int KeywordAll_high; // [rsp+B4h] [rbp-54h] BYREF
  int v47; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v48; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v50; // [rsp+D0h] [rbp-38h] BYREF
  __int64 LevelPlus1_high; // [rsp+D8h] [rbp-30h] BYREF
  __int64 ProviderMetadataPtr_high; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-20h] BYREF
  __int64 RegHandle_high; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-10h] BYREF
  __int64 AnnotationFunc_high; // [rsp+100h] [rbp-8h] BYREF
  __int64 v57; // [rsp+108h] [rbp+0h] BYREF
  __int64 v58; // [rsp+110h] [rbp+8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  int *p_CsPowerTransitions; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  int *v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  union _LARGE_INTEGER *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  unsigned int *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  __int64 *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  char *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  _NDIS_SS_RESUME_REASON *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  int *p_WakeCount; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  int *p_BusyCount; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *p_TotalTimeMs; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  _NDIS_SS_RESUME_REASON *v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  int *v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  int *v88; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  unsigned __int64 *v90; // [rsp+228h] [rbp+120h]
  __int64 v91; // [rsp+230h] [rbp+128h]
  _NDIS_SS_RESUME_REASON *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h]
  int *v94; // [rsp+248h] [rbp+140h]
  __int64 v95; // [rsp+250h] [rbp+148h]
  int *v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  unsigned __int64 *v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  _NDIS_SS_RESUME_REASON *v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  int *v102; // [rsp+288h] [rbp+180h]
  __int64 v103; // [rsp+290h] [rbp+188h]
  int *v104; // [rsp+298h] [rbp+190h]
  __int64 v105; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 *v106; // [rsp+2A8h] [rbp+1A0h]
  __int64 v107; // [rsp+2B0h] [rbp+1A8h]
  _NDIS_SS_RESUME_REASON *v108; // [rsp+2B8h] [rbp+1B0h]
  __int64 v109; // [rsp+2C0h] [rbp+1B8h]
  int *v110; // [rsp+2C8h] [rbp+1C0h]
  __int64 v111; // [rsp+2D0h] [rbp+1C8h]
  int *v112; // [rsp+2D8h] [rbp+1D0h]
  __int64 v113; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int64 *v114; // [rsp+2E8h] [rbp+1E0h]
  __int64 v115; // [rsp+2F0h] [rbp+1E8h]
  int *p_ProviderMetadataPtr; // [rsp+2F8h] [rbp+1F0h]
  __int64 v117; // [rsp+300h] [rbp+1F8h]
  int *p_LevelPlus1_low; // [rsp+308h] [rbp+200h]
  __int64 v119; // [rsp+310h] [rbp+208h]
  __int64 *p_LevelPlus1_high; // [rsp+318h] [rbp+210h]
  __int64 v121; // [rsp+320h] [rbp+218h]
  int *p_KeywordAny_high; // [rsp+328h] [rbp+220h]
  __int64 v123; // [rsp+330h] [rbp+228h]
  int *v124; // [rsp+338h] [rbp+230h]
  __int64 v125; // [rsp+340h] [rbp+238h]
  __int64 *p_ProviderMetadataPtr_high; // [rsp+348h] [rbp+240h]
  __int64 v127; // [rsp+350h] [rbp+248h]
  int *p_RegHandle; // [rsp+358h] [rbp+250h]
  __int64 v129; // [rsp+360h] [rbp+258h]
  int *p_KeywordAll_low; // [rsp+368h] [rbp+260h]
  __int64 v131; // [rsp+370h] [rbp+268h]
  __int64 *v132; // [rsp+378h] [rbp+270h]
  __int64 v133; // [rsp+380h] [rbp+278h]
  int *p_EnableCallback_high; // [rsp+388h] [rbp+280h]
  __int64 v135; // [rsp+390h] [rbp+288h]
  int *v136; // [rsp+398h] [rbp+290h]
  __int64 v137; // [rsp+3A0h] [rbp+298h]
  __int64 *p_RegHandle_high; // [rsp+3A8h] [rbp+2A0h]
  __int64 v139; // [rsp+3B0h] [rbp+2A8h]
  int *p_AnnotationFunc; // [rsp+3B8h] [rbp+2B0h]
  __int64 v141; // [rsp+3C0h] [rbp+2B8h]
  int *p_CallbackContext_low; // [rsp+3C8h] [rbp+2C0h]
  __int64 v143; // [rsp+3D0h] [rbp+2C8h]
  __int64 *v144; // [rsp+3D8h] [rbp+2D0h]
  __int64 v145; // [rsp+3E0h] [rbp+2D8h]
  int *v146; // [rsp+3E8h] [rbp+2E0h]
  __int64 v147; // [rsp+3F0h] [rbp+2E8h]
  int *v148; // [rsp+3F8h] [rbp+2F0h]
  __int64 v149; // [rsp+400h] [rbp+2F8h]
  __int64 *p_AnnotationFunc_high; // [rsp+408h] [rbp+300h]
  __int64 v151; // [rsp+410h] [rbp+308h]
  int *p_KeywordAny; // [rsp+418h] [rbp+310h]
  __int64 v153; // [rsp+420h] [rbp+318h]
  int *p_ProviderMetadataPtr_low; // [rsp+428h] [rbp+320h]
  __int64 v155; // [rsp+430h] [rbp+328h]
  __int64 *v156; // [rsp+438h] [rbp+330h]
  __int64 v157; // [rsp+440h] [rbp+338h]
  int *p_KeywordAll_high; // [rsp+448h] [rbp+340h]
  __int64 v159; // [rsp+450h] [rbp+348h]
  int *v160; // [rsp+458h] [rbp+350h]
  __int64 v161; // [rsp+460h] [rbp+358h]
  __int64 *v162; // [rsp+468h] [rbp+360h]
  __int64 v163; // [rsp+470h] [rbp+368h]
  unsigned __int64 v164; // [rsp+4C8h] [rbp+3C0h] BYREF
  __int64 v165; // [rsp+4D0h] [rbp+3C8h] BYREF

  v165 = a4;
  v164 = a3;
  v11 = Routine;
  if ( (Routine->CsTrafficStats[2].IfOutBroadcastPackets & 0x400000000LL) != 0
    && Routine[4].TempRefWorkItem.Context
    && a3 >= 0x927C0 )
  {
    if ( a2 )
    {
      v49 = 0LL;
    }
    else
    {
      Routine = (_NDIS_MINIPORT_AOAC *)Routine[4].TempRefWorkItem.Routine;
      v49 = Routine->TotalCsActiveTime / 0x2710;
    }
    v12.QuadPart = 0LL;
    v48.QuadPart = 0LL;
    if ( !a2 )
    {
      ndisConvertInterruptTimeToLocalTime((unsigned __int64)Routine, &v48);
      v12 = v48;
    }
    v50 = v12;
    if ( (unsigned int)dword_1C0091010 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)Routine, 0x400000000000uLL) )
      {
        p_CsPowerTransitions = &v11[3].CsPowerTransitions;
        v61 = 16LL;
        v62 = &v15;
        LOBYTE(v15) = a2 == 0;
        v63 = 1LL;
        v64 = &v50;
        v66 = &v164;
        v16 = a5;
        v68 = &v16;
        v70 = &v165;
        v72 = &a6;
        v74 = &v49;
        v17.StopReason = (_NDIS_SS_STOP_REASON)a8->Reason;
        v76 = &v17;
        WakeCount = a8->WakeCount;
        p_WakeCount = &WakeCount;
        BusyCount = a8->BusyCount;
        p_BusyCount = &BusyCount;
        p_TotalTimeMs = &a8->TotalTimeMs;
        v20.StopReason = (_NDIS_SS_STOP_REASON)a8[1].Reason;
        v84 = &v20;
        v21 = a8[1].WakeCount;
        v86 = &v21;
        v22 = a8[1].BusyCount;
        v88 = &v22;
        v90 = &a8[1].TotalTimeMs;
        v23.StopReason = (_NDIS_SS_STOP_REASON)a8[2].Reason;
        v92 = &v23;
        v24 = a8[2].WakeCount;
        v94 = &v24;
        v25 = a8[2].BusyCount;
        v96 = &v25;
        v65 = 8LL;
        v67 = 8LL;
        v69 = 4LL;
        v71 = 8LL;
        v73 = 8LL;
        v75 = 8LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 8LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 8LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        v98 = &a8[2].TotalTimeMs;
        v26.StopReason = (_NDIS_SS_STOP_REASON)a8[3].Reason;
        v100 = &v26;
        v27 = a8[3].WakeCount;
        v102 = &v27;
        v28 = a8[3].BusyCount;
        v104 = &v28;
        v106 = &a8[3].TotalTimeMs;
        v29.StopReason = (_NDIS_SS_STOP_REASON)a8[4].Reason;
        v108 = &v29;
        v30 = a8[4].WakeCount;
        v110 = &v30;
        v31 = a8[4].BusyCount;
        v112 = &v31;
        v114 = &a8[4].TotalTimeMs;
        v99 = 8LL;
        v101 = 4LL;
        ProviderMetadataPtr = (int)hProvider->ProviderMetadataPtr;
        p_ProviderMetadataPtr = &ProviderMetadataPtr;
        LevelPlus1_low = LOWORD(hProvider->LevelPlus1);
        p_LevelPlus1_low = &LevelPlus1_low;
        LevelPlus1_high = HIWORD(hProvider->LevelPlus1);
        p_LevelPlus1_high = &LevelPlus1_high;
        KeywordAny_high = HIDWORD(hProvider->KeywordAny);
        p_KeywordAny_high = &KeywordAny_high;
        v35 = WORD2(hProvider->ProviderMetadataPtr);
        v124 = &v35;
        ProviderMetadataPtr_high = HIWORD(hProvider->ProviderMetadataPtr);
        p_ProviderMetadataPtr_high = &ProviderMetadataPtr_high;
        RegHandle = hProvider->RegHandle;
        p_RegHandle = &RegHandle;
        KeywordAll_low = LOWORD(hProvider->KeywordAll);
        p_KeywordAll_low = &KeywordAll_low;
        v53 = WORD1(hProvider->KeywordAll);
        v103 = 4LL;
        v105 = 4LL;
        v107 = 8LL;
        v109 = 4LL;
        v111 = 4LL;
        v113 = 4LL;
        v115 = 8LL;
        v117 = 4LL;
        v119 = 4LL;
        v121 = 8LL;
        v123 = 4LL;
        v125 = 4LL;
        v127 = 8LL;
        v129 = 4LL;
        v131 = 4LL;
        v133 = 8LL;
        v132 = &v53;
        EnableCallback_high = HIDWORD(hProvider->EnableCallback);
        p_EnableCallback_high = &EnableCallback_high;
        v39 = WORD2(hProvider->RegHandle);
        v136 = &v39;
        RegHandle_high = HIWORD(hProvider->RegHandle);
        p_RegHandle_high = &RegHandle_high;
        AnnotationFunc = (int)hProvider->AnnotationFunc;
        p_AnnotationFunc = &AnnotationFunc;
        CallbackContext_low = LOWORD(hProvider->CallbackContext);
        p_CallbackContext_low = &CallbackContext_low;
        v55 = WORD1(hProvider->CallbackContext);
        v144 = &v55;
        v42 = *(&hProvider[1].LevelPlus1 + 1);
        v146 = &v42;
        v43 = WORD2(hProvider->AnnotationFunc);
        v148 = &v43;
        AnnotationFunc_high = HIWORD(hProvider->AnnotationFunc);
        p_AnnotationFunc_high = &AnnotationFunc_high;
        KeywordAny = hProvider[1].KeywordAny;
        p_KeywordAny = &KeywordAny;
        ProviderMetadataPtr_low = LOWORD(hProvider[1].ProviderMetadataPtr);
        p_ProviderMetadataPtr_low = &ProviderMetadataPtr_low;
        v57 = WORD1(hProvider[1].ProviderMetadataPtr);
        v156 = &v57;
        KeywordAll_high = HIDWORD(hProvider[1].KeywordAll);
        p_KeywordAll_high = &KeywordAll_high;
        v47 = WORD2(hProvider[1].KeywordAny);
        v160 = &v47;
        v58 = HIWORD(hProvider[1].KeywordAny);
        v162 = &v58;
        v135 = 4LL;
        v137 = 4LL;
        v139 = 8LL;
        v141 = 4LL;
        v143 = 4LL;
        v145 = 8LL;
        v147 = 4LL;
        v149 = 4LL;
        v151 = 8LL;
        v153 = 4LL;
        v155 = 4LL;
        v157 = 8LL;
        v159 = 4LL;
        v161 = 4LL;
        v163 = 8LL;
        TlgWrite(hProvider, &unk_1C007FF62, v13, v14, 0x36u, &pData);
      }
    }
  }
}
