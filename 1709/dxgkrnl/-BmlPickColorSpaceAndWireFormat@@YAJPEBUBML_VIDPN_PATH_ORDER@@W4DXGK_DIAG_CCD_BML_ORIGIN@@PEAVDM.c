/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00368E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@1@Z @ 0x1C00D11F4 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D22DC (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D237C (MonitorIsMonitorAndLinkHDRCapable.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00F8B20 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C01F8A48 (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  DMMVIDPNTOPOLOGY *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  char v19; // r13
  struct HDXGMONITOR__ *v20; // rcx
  int MonitorFromHandle; // ebx
  struct DXGMONITOR *v22; // rsi
  struct _ERESOURCE *v23; // rbx
  unsigned int v24; // esi
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  char v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // zf
  int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // rcx
  int v59; // eax
  bool v60; // al
  unsigned int v61; // ebx
  __int64 v62; // r14
  char v63; // si
  __int64 v64; // rax
  const struct DMMVIDPNSOURCEMODESET *v65; // r14
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v77; // [rsp+34h] [rbp-44h]
  int v78; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v79; // [rsp+3Ch] [rbp-3Ch]
  __int64 v80; // [rsp+40h] [rbp-38h]
  struct DXGMONITOR *v81; // [rsp+48h] [rbp-30h] BYREF
  __int64 v82; // [rsp+50h] [rbp-28h] BYREF
  struct DMMVIDPNPRESENTPATH *v83; // [rsp+58h] [rbp-20h]
  const struct DMMVIDPNSOURCEMODESET *v84; // [rsp+60h] [rbp-18h] BYREF
  DMMVIDPNTOPOLOGY *v85; // [rsp+68h] [rbp-10h]
  char v86; // [rsp+C0h] [rbp+48h] BYREF
  int v87; // [rsp+C8h] [rbp+50h]
  __int64 v88; // [rsp+D0h] [rbp+58h]
  char v89; // [rsp+D8h] [rbp+60h]

  v88 = a3;
  v87 = a2;
  v4 = 0;
  v5 = a3;
  v79 = 0;
  if ( !*a1 )
    return 0LL;
  LOBYTE(v3) = v86;
  v7 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v85 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v77 = v3;
  while ( 1 )
  {
    v8 = v4;
    v9 = 104LL * v4;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             v7,
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 28LL));
    v83 = Path;
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
    v15 = *(_QWORD *)(v14 + 144);
    v82 = v14;
    v80 = v15;
    if ( !v15 )
    {
      v74 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v74 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 28LL);
      *(_QWORD *)(v74 + 32) = v5;
      WdLogEvent5_WdError(v74);
      v57 = -1071774967;
      goto LABEL_70;
    }
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL) + 104LL),
                                   &v86);
    v18 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v44[3] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v44[4] = v5;
      v44[5] = v18;
      WdLogEvent5_WdError(v44);
      v19 = 0;
      v86 = 0;
    }
    else
    {
      v19 = v86;
    }
    v20 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL) + 104LL);
    if ( !v20 )
    {
      MonitorFromHandle = -1073741811;
LABEL_31:
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v46 = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v45[5] = MonitorFromHandle;
      v45[3] = v46;
      v45[4] = v5;
      WdLogEvent5_WdError(v45);
      LOBYTE(v77) = 0;
      goto LABEL_15;
    }
    v81 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v20, &v81);
    if ( MonitorFromHandle >= 0 )
    {
      v22 = v81;
      if ( !v81 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v47);
        v49 = WdLogNewEntry5_WdAssertion(v48);
        WdLogEvent5_WdAssertion(v49);
      }
      KeEnterCriticalRegion();
      v23 = (struct _ERESOURCE *)((char *)v22 + 280);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 280), 1u);
      v24 = *((_DWORD *)v22 + 6);
      ExReleaseResourceLite(v23);
      KeLeaveCriticalRegion();
      v24 >>= 11;
      MonitorFromHandle = 0;
      LOBYTE(v24) = v24 & 1;
      v77 = v24;
      v5 = v88;
    }
    if ( MonitorFromHandle < 0 )
      goto LABEL_31;
LABEL_15:
    IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(*(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v12 + 12) + 96LL)
                                                                                                + 104LL));
    v27 = IsMonitorAndDriverWCGCapable;
    if ( IsMonitorAndDriverWCGCapable < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v50[3] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      v50[4] = v5;
      v50[5] = v27;
      WdLogEvent5_WdError(v50);
      v28 = 0;
      v89 = 0;
    }
    else
    {
      v28 = v89;
    }
    v29 = v80;
    v30 = *(_QWORD *)&a1[v9 + 16];
    v76 = 0;
    v31 = (*(_BYTE *)v30 & 8) == 0;
    v78 = *(_DWORD *)(v80 + 128);
    if ( !v31 )
    {
      v42 = *(_DWORD *)(v30 + 204);
      v32 = *(_DWORD *)(v30 + 208);
      if ( (unsigned __int8)BmlDoesTargetModeSupportWireFormat(v80, v42) )
      {
        v76 = v42;
        if ( v32 == 31 )
        {
          Global = DXGGLOBAL::GetGlobal(v43);
          if ( !*((_BYTE *)Global + 1568) )
          {
            v53 = *(_QWORD *)(v88 + 48);
            if ( !*(_QWORD *)(v53 + 8) )
            {
              v54 = WdLogNewEntry5_WdAssertion(v52);
              WdLogEvent5_WdAssertion(v54);
            }
            v55 = *(_QWORD *)(*(_QWORD *)(v53 + 8) + 16LL);
            if ( (*(_DWORD *)(v55 + 300) & 8) == 0 )
            {
              v56 = WdLogNewEntry5_WdError(v55);
              *(_QWORD *)(v56 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v79 + 16] + 28LL);
              WdLogEvent5_WdError(v56);
              v57 = -1073741811;
LABEL_70:
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v82, 0LL);
              return v57;
            }
          }
        }
        goto LABEL_24;
      }
      v30 = *(_QWORD *)&a1[v9 + 16];
      if ( (*(_BYTE *)(v30 + 8) & 8) != 0 )
      {
        v73 = WdLogNewEntry5_WdError(v43);
        *(_QWORD *)(v73 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v8 + 16] + 28LL);
        WdLogEvent5_WdError(v73);
        v57 = -1071774902;
        goto LABEL_70;
      }
      v29 = v80;
    }
    if ( !(_BYTE)v77 )
      goto LABEL_19;
    v58 = *(_DWORD *)(v29 + 128) | ((*(_DWORD *)(v29 + 128) | ((unsigned int)(*(_DWORD *)(v29 + 128) | (*(_DWORD *)(v29 + 128) >> 6)) >> 6)) >> 6);
    if ( (v58 & 0x30) != 0 && v19 && (*(_DWORD *)&a1[v9 + 116] & 2) == 0 )
    {
      v60 = 0;
      if ( v87 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
      {
        v59 = *(_DWORD *)(v30 + 116);
        if ( v59 != 36 && v59 != 113 )
          v60 = 1;
      }
      v61 = 4 * !v60;
      v62 = *((_QWORD *)v83 + 11);
      v63 = -!v60;
      v64 = *(_QWORD *)(v62 + 104);
      v32 = v63 & 0xC;
      if ( v64 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v64 + 96));
        v65 = *(const struct DMMVIDPNSOURCEMODESET **)(v62 + 104);
      }
      else
      {
        v65 = 0LL;
      }
      v84 = v65;
      v66 = *(_QWORD *)(v88 + 48);
      if ( !*(_QWORD *)(v66 + 8) )
      {
        v67 = WdLogNewEntry5_WdAssertion(v58);
        WdLogEvent5_WdAssertion(v67);
      }
      if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(*(_QWORD *)(v66 + 8) + 16LL), v65) )
      {
        v32 = 0;
        v61 = 0;
      }
      if ( (int)PickWireFormatWithPreference(v61, &v78, &v76) < 0 )
      {
        v76 = v76 & 0xFFFFFF03 | 8;
        v32 = 0;
        v71 = WdLogNewEntry5_WdWarning(v69, v68, v70);
        WdLogEvent5_WdWarning(v71);
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v84, 0LL);
      goto LABEL_24;
    }
    if ( v28 && (*(_DWORD *)&a1[v9 + 116] & 2) == 0 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService();
      v32 = 30;
      if ( (int)PickWireFormatWithPreference(3LL, &v78, &v76) < 0 )
      {
        v37 = v76 & 0xFFFFFF03 | 8;
        v32 = 0;
        goto LABEL_23;
      }
    }
    else
    {
LABEL_19:
      v32 = 0;
      v33 = 1;
      if ( v87 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
      {
        v72 = *(_DWORD *)(v30 + 116);
        if ( v72 == 31 || v72 == 35 )
          v33 = 0;
      }
      if ( (int)PickWireFormatWithPreference(v33, &v78, &v76) < 0 )
      {
        v37 = v76 & 0xFFFFFF03 | 8;
LABEL_23:
        v76 = v37;
        v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        WdLogEvent5_WdWarning(v38);
      }
    }
LABEL_24:
    v39 = v80;
    *(_DWORD *)(v80 + 132) = v76;
    *(_DWORD *)(v39 + 136) = v32;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v82, 0LL);
    v40 = *a1;
    v4 = v79 + 1;
    v79 = v4;
    if ( v4 >= v40 )
      return 0LL;
    v5 = v88;
    v7 = v85;
  }
  v75 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v75[3] = v4;
  v75[4] = a1;
  v75[5] = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 24LL);
  v75[6] = *(unsigned int *)(*(_QWORD *)&a1[104 * v4 + 16] + 28LL);
  v75[7] = v5;
  WdLogEvent5_WdError(v75);
  return 3223192345LL;
}
