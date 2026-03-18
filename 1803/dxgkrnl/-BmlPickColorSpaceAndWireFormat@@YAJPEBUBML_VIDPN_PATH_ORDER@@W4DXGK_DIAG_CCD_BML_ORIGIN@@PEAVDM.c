/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00AE384 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C00AEC68 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00DE7A4 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C02267B0 (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0226858 (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  DMMVIDPNTOPOLOGY *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODE *v15; // rdx
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct HDXGMONITOR__ *v19; // rcx
  int MonitorFromHandle; // ebx
  struct DXGMONITOR *v21; // rsi
  unsigned int v22; // r12d
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  char v26; // r12
  struct HDXGMONITOR__ *v27; // rcx
  int v28; // ebx
  struct DXGMONITOR *v29; // rsi
  struct DMMVIDPNTARGETMODE *v30; // r9
  __int64 v31; // r14
  __int64 v32; // r8
  int v33; // esi
  _BOOL8 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rax
  struct DMMVIDPNTARGETMODE *v40; // rdx
  unsigned int v41; // eax
  unsigned int v43; // ebx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // ebx
  int v65; // eax
  bool v66; // al
  __int64 v67; // r14
  unsigned int v68; // ebx
  bool v69; // cf
  __int64 v70; // rax
  const struct DMMVIDPNSOURCEMODESET *v71; // r14
  __int64 v72; // r15
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  int v83; // [rsp+20h] [rbp-49h]
  unsigned int v84; // [rsp+30h] [rbp-39h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v85; // [rsp+34h] [rbp-35h] BYREF
  bool v86; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v87; // [rsp+3Ch] [rbp-2Dh]
  int v88; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v89; // [rsp+44h] [rbp-25h]
  struct DMMVIDPNTARGETMODE *v90; // [rsp+48h] [rbp-21h]
  struct DXGMONITOR *v91; // [rsp+50h] [rbp-19h] BYREF
  struct DXGMONITOR *v92; // [rsp+58h] [rbp-11h] BYREF
  __int64 v93; // [rsp+60h] [rbp-9h] BYREF
  const struct DMMVIDPNSOURCEMODESET *v94; // [rsp+68h] [rbp-1h] BYREF
  DMMVIDPNTOPOLOGY *v95; // [rsp+70h] [rbp+7h]
  char v96; // [rsp+D0h] [rbp+67h]
  char v99; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = a3;
  v89 = 0;
  if ( !*a1 )
    return 0LL;
  LOBYTE(v3) = v96;
  v7 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v95 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v87 = v3;
  while ( 1 )
  {
    v8 = v4;
    v9 = 104LL * v4;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             v7,
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 28LL));
    v12 = Path;
    if ( !Path )
      break;
    v13 = *((_QWORD *)Path + 12);
    v14 = *(_QWORD *)(v13 + 104);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
      v14 = *(_QWORD *)(v13 + 104);
    }
    v15 = *(struct DMMVIDPNTARGETMODE **)(v14 + 144);
    v93 = v14;
    v90 = v15;
    if ( !v15 )
    {
      v81 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v81 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 28LL);
      *(_QWORD *)(v81 + 32) = v5;
      WdLogEvent5_WdError(v81);
      v64 = -1071774967;
      goto LABEL_78;
    }
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                   *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)Path + 12) + 96LL) + 104LL),
                                   &v99,
                                   &v86);
    v18 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v45[3] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v45[4] = v5;
      v45[5] = v18;
      WdLogEvent5_WdError(v45);
      v99 = 0;
    }
    v19 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL) + 104LL);
    if ( !v19 )
    {
      MonitorFromHandle = -1073741811;
LABEL_36:
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v47 = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v46[5] = MonitorFromHandle;
      v46[3] = v47;
      v46[4] = v5;
      WdLogEvent5_WdError(v46);
      LOBYTE(v87) = 0;
      goto LABEL_15;
    }
    v91 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v19, &v91);
    if ( MonitorFromHandle >= 0 )
    {
      v21 = v91;
      if ( !v91 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v48);
        v50 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v50);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 296), 1u);
      v22 = *((_DWORD *)v21 + 10);
      ExReleaseResourceLite((PERESOURCE)((char *)v21 + 296));
      KeLeaveCriticalRegion();
      v5 = a3;
      MonitorFromHandle = 0;
      v22 >>= 11;
      LOBYTE(v22) = v22 & 1;
      v87 = v22;
    }
    if ( MonitorFromHandle < 0 )
      goto LABEL_36;
LABEL_15:
    IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(*(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL)
                                                                                                + 104LL));
    v25 = IsMonitorAndDriverWCGCapable;
    if ( IsMonitorAndDriverWCGCapable < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v51[3] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v51[4] = v5;
      v51[5] = v25;
      WdLogEvent5_WdError(v51);
      v26 = 0;
      v96 = 0;
    }
    else
    {
      v26 = v96;
    }
    v27 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL) + 104LL);
    if ( !v27 )
    {
      v28 = -1073741811;
LABEL_39:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v53 = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v52[4] = a3;
      v52[5] = v28;
      v52[3] = v53;
      WdLogEvent5_WdError(v52);
      v85.Value = 0;
      goto LABEL_23;
    }
    v92 = 0LL;
    v28 = MONITOR_MGR::_GetMonitorFromHandle(v27, &v92);
    if ( v28 >= 0 )
    {
      v29 = v92;
      if ( !v92 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v54);
        v56 = WdLogNewEntry5_WdAssertion(v55);
        WdLogEvent5_WdAssertion(v56);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v29 + 296), 1u);
      v85.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)((char *)v29 + 472);
      ExReleaseResourceLite((PERESOURCE)((char *)v29 + 296));
      KeLeaveCriticalRegion();
      v28 = 0;
    }
    if ( v28 < 0 )
      goto LABEL_39;
LABEL_23:
    v30 = v90;
    v31 = 104 * v8;
    v84 = 0;
    v88 = *((_DWORD *)v90 + 32);
    v32 = *(_QWORD *)&a1[104 * v8 + 16];
    if ( (*(_BYTE *)v32 & 8) != 0 )
    {
      v43 = *(_DWORD *)(v32 + 204);
      v33 = *(_DWORD *)(v32 + 208);
      if ( (unsigned __int8)BmlDoesTargetModeSupportWireFormat(v90, v43) )
      {
        v84 = v43;
        if ( (unsigned int)(v33 - 31) <= 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v44);
          if ( !*((_BYTE *)Global + 1696) )
          {
            v59 = *(_QWORD *)(a3 + 48);
            v60 = *(_QWORD *)(v59 + 8);
            if ( !v60 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v58);
              WdLogEvent5_WdAssertion(v61);
              v60 = *(_QWORD *)(v59 + 8);
            }
            v62 = *(unsigned int *)(*(_QWORD *)(v60 + 16) + 300LL);
            if ( (v62 & 8) == 0 )
            {
              v63 = WdLogNewEntry5_WdError(v62);
              *(_QWORD *)(v63 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v8 + 16] + 28LL);
              WdLogEvent5_WdError(v63);
              v64 = -1073741811;
LABEL_78:
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v93, 0LL);
              return v64;
            }
          }
        }
        goto LABEL_30;
      }
      v32 = *(_QWORD *)&a1[v31 + 16];
      if ( (*(_BYTE *)(v32 + 8) & 8) != 0 )
      {
        v80 = WdLogNewEntry5_WdError(v44);
        *(_QWORD *)(v80 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v8 + 16] + 28LL);
        WdLogEvent5_WdError(v80);
        v64 = -1071774902;
        goto LABEL_78;
      }
      v30 = v90;
    }
    if ( !(_BYTE)v87 )
      goto LABEL_25;
    if ( v99 && ModeSupportsHighDepthColorFormat(v30, &v85) && (*(_DWORD *)&a1[v31 + 116] & 2) == 0 )
    {
      v66 = 0;
      if ( a2 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
      {
        v65 = *(_DWORD *)(v32 + 116);
        if ( v65 != 36 && v65 != 113 )
          v66 = 1;
      }
      v67 = *((_QWORD *)v12 + 11);
      v68 = 4 * !v66;
      v69 = v66;
      v70 = *(_QWORD *)(v67 + 104);
      v33 = v69 ? 0 : 0xC;
      if ( v70 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v70 + 96));
        v71 = *(const struct DMMVIDPNSOURCEMODESET **)(v67 + 104);
      }
      else
      {
        v71 = 0LL;
      }
      v94 = v71;
      v72 = *(_QWORD *)(a3 + 48);
      v73 = *(_QWORD *)(v72 + 8);
      if ( !v73 )
      {
        v74 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v74);
        v73 = *(_QWORD *)(v72 + 8);
      }
      if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(v73 + 16), v71) )
      {
        v33 = 0;
        v68 = 0;
      }
      if ( (int)PickWireFormatWithPreference(v68, &v88, &v85, &v84) < 0 )
      {
        v84 = v84 & 0xFFFFFF03 | 8;
        v33 = 0;
        v78 = WdLogNewEntry5_WdWarning(v76, v75, v77);
        WdLogEvent5_WdWarning(v78);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v94, 0LL);
      goto LABEL_30;
    }
    if ( v26 && ModeSupportsHighDepthColorFormat(v30, &v85) && (*(_DWORD *)&a1[v31 + 116] & 2) == 0 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_WCGTestMode__private_propertyCache,
        12077848LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00560C4,
        0,
        v83);
      v33 = 30;
      if ( (int)PickWireFormatWithPreference(3LL, &v88, &v85, &v84) < 0 )
      {
        v38 = v84 & 0xFFFFFF03 | 8;
        v33 = 0;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_25:
      v33 = 0;
      v34 = 1;
      if ( a2 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
      {
        v79 = *(_DWORD *)(v32 + 116);
        if ( v79 == 31 || v79 == 35 )
          v34 = 0;
      }
      if ( (int)PickWireFormatWithPreference(v34, &v88, &v85, &v84) < 0 )
      {
        v38 = v84 & 0xFFFFFF03 | 8;
LABEL_29:
        v84 = v38;
        v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        WdLogEvent5_WdWarning(v39);
      }
    }
LABEL_30:
    v40 = v90;
    *((_DWORD *)v90 + 33) = v84;
    *((_DWORD *)v40 + 34) = v33;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v93, 0LL);
    v41 = *a1;
    v4 = v89 + 1;
    v89 = v4;
    if ( v4 >= v41 )
      return 0LL;
    v5 = a3;
    v7 = v95;
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v82[4] = a1;
  v82[3] = v4;
  v82[5] = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 24LL);
  v82[6] = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 28LL);
  v82[7] = v5;
  WdLogEvent5_WdError(v82);
  return 3223192345LL;
}
