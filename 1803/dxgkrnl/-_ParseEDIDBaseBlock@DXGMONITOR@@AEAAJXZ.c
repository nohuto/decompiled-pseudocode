/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C0018938 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0047E4C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 *     ConvertFrequencyRange @ 0x1C0238808 (ConvertFrequencyRange.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02388DC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ConvertMonitorModeTimingType @ 0x1C02389B8 (ConvertMonitorModeTimingType.c)
 *     ConvertVideoSignalInfo @ 0x1C0238A34 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this)
{
  unsigned __int16 *v2; // rsi
  _DWORD *v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  DXGMONITOR *v7; // r14
  __int64 v8; // rax
  DXGMONITOR **v9; // rax
  int MonitorModes; // eax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  DXGMONITOR **v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r12d
  unsigned __int16 v24; // cx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r13
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // r13d
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  DXGMONITOR **v41; // rbx
  DXGMONITOR **v42; // rax
  DXGMONITOR **v43; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int16 v49; // bx
  unsigned int v50; // r12d
  char *v51; // rax
  int v52; // eax
  int v53; // ebx
  _QWORD *v54; // rax
  _QWORD *v55; // r14
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r13
  __int64 v61; // rax
  DXGMONITOR **v62; // rdx
  DXGMONITOR *v63; // rax
  __int128 v65; // [rsp+30h] [rbp-20h]
  int v66; // [rsp+90h] [rbp+40h] BYREF
  int v67; // [rsp+98h] [rbp+48h]
  int v68; // [rsp+A0h] [rbp+50h] BYREF

  LOBYTE(v67) = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( !this[18] )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = this[18];
  WdLogEvent5_WdDmmEvent(v5);
  v7 = (DXGMONITOR *)(this + 27);
  if ( *(DXGMONITOR **)v7 != v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = this[18];
  v66 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v9 + 2),
                   *((_DWORD *)v9 + 4),
                   (unsigned __int8 *)v9 + 24,
                   (unsigned __int16 *)&v66,
                   0LL,
                   0LL);
  v12 = MonitorModes;
  v13 = MonitorModes + 0x80000000;
  if ( (int)v13 >= 0 && MonitorModes != -1073741789 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = v12;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v12;
  }
  if ( !v66 )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, 1LL, v11);
    WdLogEvent5_WdWarning(v15);
    goto LABEL_32;
  }
  v16 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v66 - 1) + 60, 0x4D677844u, PagedPool);
  v2 = v16;
  if ( !v16 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    WdLogEvent5_WdError(v18);
    LODWORD(v12) = -1073741801;
    return (unsigned int)v12;
  }
  v19 = this[18];
  v68 = 0;
  v20 = EDID_V1_GetMonitorModes(
          *((unsigned int *)v19 + 2),
          *((_DWORD *)v19 + 4),
          (unsigned __int8 *)v19 + 24,
          (unsigned __int16 *)&v66,
          (struct _VideoModeDescriptor *)(v16 + 2),
          &v68);
  v12 = v20;
  if ( v20 < 0 )
    goto LABEL_13;
  v23 = 0;
  v24 = v66;
  v2[1] = v68;
  *(_QWORD *)&v65 = 0x800000008LL;
  *((_QWORD *)&v65 + 1) = 8LL;
  *v2 = v24;
  if ( v24 )
  {
    do
    {
      v25 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v27 = v25;
      if ( !v25 )
        goto LABEL_35;
      *v25 = (*((_DWORD *)this + 53))++;
      v28 = 28LL * v23;
      v66 = ConvertVideoSignalInfo((unsigned int *)&v2[v28 + 2], (unsigned __int64)(v25 + 2));
      if ( v66 < 0
        || (v27[16] = 2,
            *(_OWORD *)(v27 + 17) = v65,
            v66 = ConvertMonitorCapablitiesOrigin(
                    HIBYTE(v2[v28 + 28]),
                    (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v27 + 21)),
            v66 < 0) )
      {
        v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v32 + 24) = this[18] + 3;
        v33 = v66;
      }
      else
      {
        v34 = ConvertMonitorModeTimingType(LOBYTE(v2[v28 + 29]), v27 + 28);
        v33 = v34;
        if ( v34 >= 0 )
        {
          v37 = (unsigned __int8)v67;
          v38 = v2[1];
          if ( (unsigned int)(v27[28] - 1) <= 2 )
            v37 = 1;
          v67 = v37;
          if ( v38 == v23 )
          {
            if ( this[29] )
            {
              v39 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v39);
            }
            this[29] = (DXGMONITOR **)v27;
            v40 = 1;
          }
          else
          {
            v40 = 2;
          }
          v27[22] = v40;
          v41 = (DXGMONITOR **)(v27 + 24);
          ++*((_DWORD *)this + 52);
          v42 = this[28];
          if ( *v42 != v7 )
            __fastfail(3u);
          *v41 = v7;
          v41[1] = (DXGMONITOR *)v42;
          *v42 = (DXGMONITOR *)v41;
          this[28] = v41;
          goto LABEL_31;
        }
        v32 = WdLogNewEntry5_WdWarning(0LL, v35, v36);
        *(_QWORD *)(v32 + 24) = this[18] + 3;
      }
      *(_QWORD *)(v32 + 32) = v33;
      WdLogEvent5_WdWarning(v32);
      MonitorLogBadEDID((__int64)(this[18] + 3), v33);
      operator delete(v27);
LABEL_31:
      ++v23;
    }
    while ( v23 < *v2 );
  }
LABEL_32:
  v43 = this[18];
  LOWORD(v66) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v43 + 2),
                                      *((_DWORD *)v43 + 4),
                                      (unsigned __int8 *)v43 + 24,
                                      (__int64)&v66,
                                      0LL);
  v12 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v21, v45, v46, v47);
    goto LABEL_48;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v49 = v66;
    if ( !(_WORD)v66 )
      goto LABEL_48;
    v50 = (unsigned __int16)v66;
    v51 = (char *)operator new[](52LL * (unsigned __int16)v66 + 4, 0x4D677844u, PagedPool);
    v3 = v51;
    if ( !v51 )
    {
LABEL_35:
      v48 = WdLogNewEntry5_WdError(v26);
      WdLogEvent5_WdError(v48);
      LODWORD(v12) = -1073741801;
      goto LABEL_52;
    }
    *(_WORD *)v51 = v49;
    v52 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[18] + 2),
            *((_DWORD *)this[18] + 4),
            (unsigned __int8 *)this[18] + 24,
            (__int64)v51,
            (struct _FrequencyRangeDescriptor *)(v51 + 4));
    v12 = v52;
    if ( v52 >= 0 )
    {
      v53 = 0;
      if ( v50 )
      {
        do
        {
          v54 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
          v55 = v54;
          if ( !v54 )
            goto LABEL_35;
          v56 = ConvertFrequencyRange(&v3[13 * v53 + 1], (__int64)v54);
          v60 = v56;
          if ( v56 >= 0 )
          {
            v62 = this[34];
            v63 = (DXGMONITOR *)(v55 + 6);
            if ( *v62 != (DXGMONITOR *)(this + 33) )
              __fastfail(3u);
            *(_QWORD *)v63 = this + 33;
            v55[7] = v62;
            *v62 = v63;
            this[34] = (DXGMONITOR **)v63;
            ++*((_DWORD *)this + 64);
          }
          else
          {
            v61 = WdLogNewEntry5_WdWarning(v58, v57, v59);
            *(_QWORD *)(v61 + 24) = this[18] + 3;
            *(_QWORD *)(v61 + 32) = v60;
            WdLogEvent5_WdWarning(v61);
            MonitorLogBadEDID((__int64)(this[18] + 3), v60);
            operator delete(v55);
          }
        }
        while ( ++v53 < v50 );
      }
LABEL_48:
      if ( !(_BYTE)v67 && !*((_DWORD *)this + 64) )
        *((_DWORD *)this + 30) = 2;
      LODWORD(v12) = 0;
      goto LABEL_52;
    }
  }
LABEL_13:
  v22 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v22 + 24) = v12;
  WdLogEvent5_WdError(v22);
LABEL_52:
  if ( v2 )
    operator delete[](v2);
  if ( v3 )
    operator delete[](v3);
  return (unsigned int)v12;
}
