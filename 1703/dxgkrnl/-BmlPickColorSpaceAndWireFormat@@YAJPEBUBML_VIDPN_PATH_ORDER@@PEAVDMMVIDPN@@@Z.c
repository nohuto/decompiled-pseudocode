/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F1E3C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000BAD8 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00F2068 (MonitorIsMonitorAndLinkHDRCapable.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(const struct BML_VIDPN_PATH_ORDER *a1, struct DMMVIDPN *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  DMMVIDPNTOPOLOGY *v6; // rcx
  __int64 v7; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDPNPRESENTPATH *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  char v21; // r14
  struct HDXGMONITOR__ *v22; // rcx
  int MonitorFromHandle; // ebx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGMONITOR *v26; // rdi
  struct _ERESOURCE *v27; // rbx
  unsigned int v28; // edi
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  unsigned int v34; // ebx
  int v35; // edi
  __int64 v36; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // r8
  int v52; // [rsp+50h] [rbp-20h] BYREF
  __int64 v53; // [rsp+58h] [rbp-18h]
  struct DXGMONITOR *v54; // [rsp+60h] [rbp-10h] BYREF
  __int64 v55; // [rsp+68h] [rbp-8h] BYREF
  char v56; // [rsp+B0h] [rbp+40h] BYREF
  int v57; // [rsp+C0h] [rbp+50h]
  unsigned int v58; // [rsp+C8h] [rbp+58h]

  v3 = 0;
  if ( !*(_BYTE *)a1 )
    return 0LL;
  LOBYTE(v2) = v56;
  v6 = (struct DMMVIDPN *)((char *)a2 + 96);
  v58 = v2;
  while ( 1 )
  {
    v7 = 104LL * v3;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             v6,
             *(_DWORD *)(*(_QWORD *)((char *)a1 + v7 + 16) + 24LL),
             *(_DWORD *)(*(_QWORD *)((char *)a1 + v7 + 16) + 28LL));
    v11 = Path;
    if ( !Path )
      break;
    v12 = *((_QWORD *)Path + 12);
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
      v13 = *(_QWORD *)(v12 + 104);
    }
    v14 = *(_QWORD *)(v13 + 144);
    v55 = v13;
    v53 = v14;
    if ( !v14 )
    {
      v49 = WdLogNewEntry5_WdError(v13, v9);
      *(_QWORD *)(v49 + 24) = *(unsigned int *)(*((_QWORD *)a1 + 13 * v3 + 2) + 28LL);
      *(_QWORD *)(v49 + 32) = a2;
      WdLogEvent5_WdError(v49);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
      return 3223192329LL;
    }
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 104LL),
                                   &v56);
    v20 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v38[3] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v7 + 16) + 28LL);
      v38[4] = a2;
      v38[5] = v20;
      WdLogEvent5_WdError(v38);
      v21 = 0;
      v56 = 0;
    }
    else
    {
      v21 = v56;
    }
    v22 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 104LL);
    if ( !v22 )
    {
      MonitorFromHandle = -1073741811;
LABEL_33:
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v22, v16);
      v40 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v7 + 16) + 28LL);
      v39[5] = MonitorFromHandle;
      v39[3] = v40;
      v39[4] = a2;
      WdLogEvent5_WdError(v39);
      LOBYTE(v58) = 0;
      goto LABEL_15;
    }
    v54 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v22, &v54, v18, v19);
    if ( MonitorFromHandle >= 0 )
    {
      v26 = v54;
      if ( !v54 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v22, v16, v24, v25);
        WdLogEvent5_WdAssertion(v41);
        v46 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
        WdLogEvent5_WdAssertion(v46);
      }
      KeEnterCriticalRegion();
      v27 = (struct _ERESOURCE *)((char *)v26 + 240);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 240), 1u);
      v28 = *((_DWORD *)v26 + 6);
      ExReleaseResourceLite(v27);
      KeLeaveCriticalRegion();
      v28 >>= 11;
      MonitorFromHandle = 0;
      LOBYTE(v28) = v28 & 1;
      v58 = v28;
    }
    if ( MonitorFromHandle < 0 )
      goto LABEL_33;
LABEL_15:
    v52 = 3;
    v29 = *(_DWORD *)(v53 + 128);
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect((__int64)v22, v16, 2u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x9A5847u,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C004C0F0,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v52,
        0LL,
        0,
        1uLL);
    }
    if ( (_BYTE)v58
      && (((unsigned __int8)*(_DWORD *)(v53 + 128) | (unsigned __int8)((*(_DWORD *)(v53 + 128) | ((unsigned int)(*(_DWORD *)(v53 + 128) | (*(_DWORD *)(v53 + 128) >> 6)) >> 6)) >> 6)) & 0x30) != 0
      && v21
      && (*(_DWORD *)((_BYTE *)a1 + v7 + 116) & 2) == 0 )
    {
      v33 = 12;
      if ( ((v29 >> 2) & 4) != 0 )
      {
        v35 = 16;
      }
      else if ( ((v29 >> 2) & 8) != 0 )
      {
        v35 = 32;
      }
      else if ( (v29 & 0x400) != 0 )
      {
        v35 = 1024;
      }
      else if ( (v29 & 0x800) != 0 )
      {
        v35 = 2048;
      }
      else if ( ((v29 >> 14) & 4) != 0 )
      {
        v35 = 0x10000;
      }
      else if ( ((v29 >> 14) & 8) != 0 )
      {
        v35 = 0x20000;
      }
      else
      {
        v47 = v29 >> 20;
        if ( (v47 & 4) != 0 )
        {
          v35 = 0x400000;
        }
        else if ( (v47 & 8) != 0 )
        {
          v35 = 0x800000;
        }
        else
        {
          v48 = WdLogNewEntry5_WdAssertion(12LL, v30, v31, v32);
          WdLogEvent5_WdAssertion(v48);
          v35 = 8;
          v33 = 0;
        }
      }
      goto LABEL_27;
    }
    v33 = 0;
    if ( ((v29 >> 2) & 2) == 0 )
    {
      if ( (v29 & 4) != 0 )
      {
        v35 = 4;
        goto LABEL_27;
      }
      if ( (v29 & 0x200) != 0 )
      {
        v35 = 512;
        goto LABEL_27;
      }
      if ( (v29 & 0x100) != 0 )
      {
        v35 = 256;
        goto LABEL_27;
      }
      if ( ((v29 >> 14) & 2) != 0 )
      {
        v35 = 0x8000;
        goto LABEL_27;
      }
      if ( (v29 & 0x4000) != 0 )
      {
        v35 = 0x4000;
        goto LABEL_27;
      }
      v34 = v29 >> 20;
      if ( (v34 & 2) != 0 )
      {
        v35 = 0x200000;
        goto LABEL_27;
      }
      if ( (v34 & 1) != 0 )
      {
        v35 = 0x100000;
        goto LABEL_27;
      }
    }
    v35 = 8;
LABEL_27:
    v36 = v53;
    v57 = v35;
    *(_DWORD *)(v53 + 136) = v33;
    *(_DWORD *)(v36 + 132) = v35;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
    v6 = (struct DMMVIDPN *)((char *)a2 + 96);
    if ( ++v3 >= *(unsigned __int8 *)a1 )
      return 0LL;
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v51 = 104LL * v3;
  v50[3] = v3;
  v50[4] = a1;
  v50[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v51 + 16) + 24LL);
  v50[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v51 + 16) + 28LL);
  v50[7] = a2;
  WdLogEvent5_WdError(v50);
  return 3223192345LL;
}
