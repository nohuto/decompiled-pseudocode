/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01068A8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C000F52C (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00100A8 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertFrequencyRange @ 0x1C0105274 (ConvertFrequencyRange.c)
 *     ConvertMonitorModeTimingType @ 0x1C0109D88 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0109DE8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C0109E2C (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int16 *v6; // rsi
  _DWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGMONITOR *v13; // r14
  DXGMONITOR **v14; // rax
  int MonitorModes; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGMONITOR **v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 v28; // cx
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  int v43; // r13d
  int v44; // eax
  DXGMONITOR **v45; // rbx
  DXGMONITOR **v46; // rax
  DXGMONITOR **v47; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int16 v51; // bx
  unsigned int v52; // r13d
  char *v53; // rax
  int v54; // eax
  int v55; // ebx
  _QWORD *v56; // rax
  _QWORD *v57; // r14
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r12
  DXGMONITOR **v64; // rdx
  DXGMONITOR *v65; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int128 v77; // [rsp+30h] [rbp-20h]
  int v78; // [rsp+90h] [rbp+40h] BYREF
  int v79; // [rsp+98h] [rbp+48h]
  int v80; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  LOBYTE(v79) = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( !this[16] )
  {
    v67 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v67);
  }
  v8 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = this[16];
  WdLogEvent5_WdDmmEvent(v8);
  v13 = (DXGMONITOR *)(this + 20);
  if ( *(DXGMONITOR **)v13 != v13 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v68);
  }
  v14 = this[16];
  v78 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v14 + 2),
                   *((_DWORD *)v14 + 4),
                   (unsigned __int8 *)v14 + 24,
                   (unsigned __int16 *)&v78,
                   0LL,
                   0LL);
  v19 = MonitorModes;
  v20 = MonitorModes + 0x80000000;
  if ( (int)v20 >= 0 && MonitorModes != -1073741789 )
  {
    v69 = WdLogNewEntry5_WdError(v20, v16);
    *(_QWORD *)(v69 + 24) = v19;
    WdLogEvent5_WdError(v69);
    return (unsigned int)v19;
  }
  if ( v78 )
  {
    v21 = (unsigned __int16 *)operator new(56LL * (unsigned int)(v78 - 1) + 60, 0x4D677844u, PagedPool);
    v6 = v21;
    if ( !v21 )
    {
      v71 = WdLogNewEntry5_WdError(v23, v22);
      WdLogEvent5_WdError(v71);
      LODWORD(v19) = -1073741801;
      return (unsigned int)v19;
    }
    v24 = this[16];
    v80 = 0;
    v25 = EDID_V1_GetMonitorModes(
            *((unsigned int *)v24 + 2),
            *((_DWORD *)v24 + 4),
            (unsigned __int8 *)v24 + 24,
            (unsigned __int16 *)&v78,
            (struct _VideoModeDescriptor *)(v21 + 2),
            &v80);
    v19 = v25;
    if ( v25 < 0 )
      goto LABEL_46;
    v28 = v78;
    v6[1] = v80;
    *(_QWORD *)&v77 = 0x800000008LL;
    *((_QWORD *)&v77 + 1) = 8LL;
    *v6 = v28;
    if ( v28 )
    {
      do
      {
        v29 = operator new(0x78uLL, 0x4D677844u, PagedPool);
        v32 = v29;
        if ( !v29 )
          goto LABEL_51;
        *v29 = (*((_DWORD *)this + 39))++;
        v33 = 28LL * v4;
        v78 = ConvertVideoSignalInfo(&v6[v33 + 2], v29 + 2);
        if ( v78 < 0
          || (v32[16] = 2,
              *(_OWORD *)(v32 + 17) = v77,
              v78 = ConvertMonitorCapablitiesOrigin(HIBYTE(v6[v33 + 28]), v32 + 21),
              v78 < 0) )
        {
          v73 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
          v42 = v78;
        }
        else
        {
          v38 = ConvertMonitorModeTimingType(LOBYTE(v6[v33 + 29]), v32 + 28);
          v42 = v38;
          if ( v38 >= 0 )
          {
            v43 = (unsigned __int8)v79;
            v44 = v6[1];
            if ( (unsigned int)(v32[28] - 1) <= 2 )
              v43 = 1;
            v79 = v43;
            if ( v44 == v4 )
            {
              if ( this[22] )
              {
                v74 = WdLogNewEntry5_WdAssertion(0LL, 1LL, v40, v41);
                WdLogEvent5_WdAssertion(v74);
              }
              this[22] = (DXGMONITOR **)v32;
              v32[22] = 1;
            }
            else
            {
              v32[22] = 2;
            }
            ++*((_DWORD *)this + 38);
            v45 = (DXGMONITOR **)(v32 + 24);
            v46 = this[21];
            if ( *v46 != v13 )
              __fastfail(3u);
            *v45 = v13;
            v45[1] = (DXGMONITOR *)v46;
            *v46 = (DXGMONITOR *)v45;
            this[21] = v45;
            goto LABEL_20;
          }
          v73 = WdLogNewEntry5_WdWarning(0LL, v39, v40, v41);
        }
        *(_QWORD *)(v73 + 24) = this[16] + 3;
        *(_QWORD *)(v73 + 32) = v42;
        WdLogEvent5_WdWarning(v73);
        MonitorLogBadEDID(this[16] + 3, (unsigned int)v42);
        ExFreePoolWithTag(v32, 0);
LABEL_20:
        ++v4;
      }
      while ( v4 < *v6 );
    }
  }
  else
  {
    v70 = WdLogNewEntry5_WdWarning(v20, 1LL, v17, v18);
    WdLogEvent5_WdWarning(v70);
  }
  v47 = this[16];
  LOWORD(v78) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v47 + 2),
                                      *((_DWORD *)v47 + 4),
                                      (unsigned __int8 *)v47 + 24,
                                      (__int64)&v78,
                                      0LL);
  v19 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v27, v26, v49, v50);
    goto LABEL_32;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v51 = v78;
    if ( !(_WORD)v78 )
      goto LABEL_32;
    v52 = (unsigned __int16)v78;
    v53 = (char *)operator new(52LL * ((unsigned __int16)v78 - 1) + 56, 0x4D677844u, PagedPool);
    v7 = v53;
    if ( !v53 )
    {
LABEL_51:
      v75 = WdLogNewEntry5_WdError(v31, v30);
      WdLogEvent5_WdError(v75);
      LODWORD(v19) = -1073741801;
      goto LABEL_34;
    }
    *(_WORD *)v53 = v51;
    v54 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[16] + 2),
            *((_DWORD *)this[16] + 4),
            (unsigned __int8 *)this[16] + 24,
            (__int64)v53,
            (struct _FrequencyRangeDescriptor *)(v53 + 4));
    v19 = v54;
    if ( v54 >= 0 )
    {
      v55 = 0;
      if ( v52 )
      {
        do
        {
          v56 = operator new(0x40uLL, 0x4D677844u, PagedPool);
          v57 = v56;
          if ( !v56 )
            goto LABEL_51;
          v58 = ConvertFrequencyRange(&v7[13 * v55 + 1], (__int64)v56);
          v63 = v58;
          if ( v58 < 0 )
          {
            v76 = WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
            *(_QWORD *)(v76 + 24) = this[16] + 3;
            *(_QWORD *)(v76 + 32) = v63;
            WdLogEvent5_WdWarning(v76);
            MonitorLogBadEDID(this[16] + 3, (unsigned int)v63);
            ExFreePoolWithTag(v57, 0);
          }
          else
          {
            v64 = this[27];
            v65 = (DXGMONITOR *)(v57 + 6);
            if ( *v64 != (DXGMONITOR *)(this + 26) )
              __fastfail(3u);
            *(_QWORD *)v65 = this + 26;
            v57[7] = v64;
            *v64 = v65;
            this[27] = (DXGMONITOR **)v65;
            ++*((_DWORD *)this + 50);
          }
        }
        while ( ++v55 < v52 );
      }
LABEL_32:
      if ( !(_BYTE)v79 && !*((_DWORD *)this + 50) )
        *((_DWORD *)this + 26) = 2;
      LODWORD(v19) = 0;
      goto LABEL_34;
    }
  }
LABEL_46:
  v72 = WdLogNewEntry5_WdError(v27, v26);
  *(_QWORD *)(v72 + 24) = v19;
  WdLogEvent5_WdError(v72);
LABEL_34:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v19;
}
