/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0108E44
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C000FB08 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0011F5C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C01084C4 (ConvertVideoSignalInfo.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0108624 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertMonitorModeTimingType @ 0x1C0108668 (ConvertMonitorModeTimingType.c)
 *     ConvertFrequencyRange @ 0x1C0121F6C (ConvertFrequencyRange.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this)
{
  unsigned __int16 *v2; // rsi
  char *v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  DXGMONITOR *v6; // r14
  DXGMONITOR **v7; // rax
  int MonitorModes; // eax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  DXGMONITOR **v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r12d
  unsigned __int16 v18; // cx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r13
  int v30; // r13d
  int v31; // eax
  DXGMONITOR **v32; // rbx
  DXGMONITOR **v33; // rax
  DXGMONITOR **v34; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v36; // rdx
  __int16 v37; // bx
  unsigned int v38; // r12d
  char *v39; // rax
  int v40; // eax
  int v41; // ebx
  _QWORD *v42; // rax
  _QWORD *v43; // r14
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r13
  DXGMONITOR **v49; // rdx
  DXGMONITOR *v50; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int128 v62; // [rsp+30h] [rbp-20h]
  int v63; // [rsp+90h] [rbp+40h] BYREF
  int v64; // [rsp+98h] [rbp+48h]
  int v65; // [rsp+A0h] [rbp+50h] BYREF

  LOBYTE(v64) = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( !this[16] )
  {
    v52 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v52);
  }
  v4 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v4 + 24) = this;
  *(_QWORD *)(v4 + 32) = this[16];
  WdLogEvent5_WdDmmEvent(v4);
  v6 = (DXGMONITOR *)(this + 25);
  if ( *(DXGMONITOR **)v6 != v6 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v53);
  }
  v7 = this[16];
  v63 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v7 + 2),
                   *((_DWORD *)v7 + 4),
                   (unsigned __int8 *)v7 + 24,
                   (unsigned __int16 *)&v63,
                   0LL,
                   0LL);
  v10 = MonitorModes;
  v11 = MonitorModes + 0x80000000;
  if ( (int)v11 >= 0 && MonitorModes != -1073741789 )
  {
    v54 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v54 + 24) = v10;
    WdLogEvent5_WdError(v54);
    return (unsigned int)v10;
  }
  if ( v63 )
  {
    v12 = (unsigned __int16 *)operator new(56LL * (unsigned int)(v63 - 1) + 60, 0x4D677844u, PagedPool);
    v2 = v12;
    if ( !v12 )
    {
      v56 = WdLogNewEntry5_WdError(v13);
      WdLogEvent5_WdError(v56);
      LODWORD(v10) = -1073741801;
      return (unsigned int)v10;
    }
    v14 = this[16];
    v65 = 0;
    v15 = EDID_V1_GetMonitorModes(
            *((unsigned int *)v14 + 2),
            *((_DWORD *)v14 + 4),
            (unsigned __int8 *)v14 + 24,
            (unsigned __int16 *)&v63,
            (struct _VideoModeDescriptor *)(v12 + 2),
            &v65);
    v10 = v15;
    if ( v15 < 0 )
      goto LABEL_48;
    v17 = 0;
    v18 = v63;
    v2[1] = v65;
    *(_QWORD *)&v62 = 0x800000008LL;
    *((_QWORD *)&v62 + 1) = 8LL;
    *v2 = v18;
    if ( v18 )
    {
      do
      {
        v19 = operator new(0x78uLL, 0x4D677844u, PagedPool);
        v21 = v19;
        if ( !v19 )
          goto LABEL_53;
        *v19 = (*((_DWORD *)this + 49))++;
        v22 = 28LL * v17;
        v63 = ConvertVideoSignalInfo((unsigned int *)&v2[v22 + 2], (unsigned __int64)(v19 + 2));
        if ( v63 < 0
          || (v21[16] = 2,
              *(_OWORD *)(v21 + 17) = v62,
              v63 = ConvertMonitorCapablitiesOrigin(HIBYTE(v2[v22 + 28]), v21 + 21),
              v63 < 0) )
        {
          v58 = WdLogNewEntry5_WdWarning(v24, v23, v25);
          v29 = v63;
        }
        else
        {
          v26 = ConvertMonitorModeTimingType(LOBYTE(v2[v22 + 29]), v21 + 28);
          v29 = v26;
          if ( v26 >= 0 )
          {
            v30 = (unsigned __int8)v64;
            v31 = v2[1];
            if ( (unsigned int)(v21[28] - 1) <= 2 )
              v30 = 1;
            v64 = v30;
            if ( v31 == v17 )
            {
              if ( this[27] )
              {
                v59 = WdLogNewEntry5_WdAssertion(0LL);
                WdLogEvent5_WdAssertion(v59);
              }
              this[27] = (DXGMONITOR **)v21;
              v21[22] = 1;
            }
            else
            {
              v21[22] = 2;
            }
            ++*((_DWORD *)this + 48);
            v32 = (DXGMONITOR **)(v21 + 24);
            v33 = this[26];
            if ( *v33 != v6 )
              __fastfail(3u);
            *v32 = v6;
            v32[1] = (DXGMONITOR *)v33;
            *v33 = (DXGMONITOR *)v32;
            this[26] = v32;
            goto LABEL_20;
          }
          v58 = WdLogNewEntry5_WdWarning(0LL, v27, v28);
        }
        *(_QWORD *)(v58 + 24) = this[16] + 3;
        *(_QWORD *)(v58 + 32) = v29;
        WdLogEvent5_WdWarning(v58);
        MonitorLogBadEDID(this[16] + 3, (unsigned int)v29);
        ExFreePoolWithTag(v21, 0);
LABEL_20:
        ++v17;
      }
      while ( v17 < *v2 );
    }
  }
  else
  {
    v55 = WdLogNewEntry5_WdWarning(v11, 1LL, v9);
    WdLogEvent5_WdWarning(v55);
  }
  v34 = this[16];
  LOWORD(v63) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v34 + 2),
                                      *((_DWORD *)v34 + 4),
                                      (unsigned __int8 *)v34 + 24,
                                      (__int64)&v63,
                                      0LL);
  v10 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v16, v36);
    goto LABEL_37;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v37 = v63;
    if ( !(_WORD)v63 )
      goto LABEL_37;
    v38 = (unsigned __int16)v63;
    v39 = (char *)operator new(52LL * (unsigned __int16)v63 + 4, 0x4D677844u, PagedPool);
    v3 = v39;
    if ( !v39 )
    {
LABEL_53:
      v60 = WdLogNewEntry5_WdError(v20);
      WdLogEvent5_WdError(v60);
      LODWORD(v10) = -1073741801;
      goto LABEL_39;
    }
    *(_WORD *)v39 = v37;
    v40 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[16] + 2),
            *((_DWORD *)this[16] + 4),
            (unsigned __int8 *)this[16] + 24,
            (__int64)v39,
            (struct _FrequencyRangeDescriptor *)(v39 + 4));
    v10 = v40;
    if ( v40 >= 0 )
    {
      v41 = 0;
      if ( v38 )
      {
        do
        {
          v42 = operator new(0x40uLL, 0x4D677844u, PagedPool);
          v43 = v42;
          if ( !v42 )
            goto LABEL_53;
          v44 = ConvertFrequencyRange(&v3[52 * v41 + 4], v42);
          v48 = v44;
          if ( v44 < 0 )
          {
            v61 = WdLogNewEntry5_WdWarning(v46, v45, v47);
            *(_QWORD *)(v61 + 24) = this[16] + 3;
            *(_QWORD *)(v61 + 32) = v48;
            WdLogEvent5_WdWarning(v61);
            MonitorLogBadEDID(this[16] + 3, (unsigned int)v48);
            ExFreePoolWithTag(v43, 0);
          }
          else
          {
            v49 = this[32];
            v50 = (DXGMONITOR *)(v43 + 6);
            if ( *v49 != (DXGMONITOR *)(this + 31) )
              __fastfail(3u);
            *(_QWORD *)v50 = this + 31;
            v43[7] = v49;
            *v49 = v50;
            this[32] = (DXGMONITOR **)v50;
            ++*((_DWORD *)this + 60);
          }
        }
        while ( ++v41 < v38 );
      }
LABEL_37:
      if ( !(_BYTE)v64 && !*((_DWORD *)this + 60) )
        *((_DWORD *)this + 26) = 2;
      LODWORD(v10) = 0;
      goto LABEL_39;
    }
  }
LABEL_48:
  v57 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v57 + 24) = v10;
  WdLogEvent5_WdError(v57);
LABEL_39:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v10;
}
