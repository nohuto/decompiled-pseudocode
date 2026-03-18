/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C00F9348
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     MonitorGetNextFrequencyRange @ 0x1C009F940 (MonitorGetNextFrequencyRange.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C00A352C (BmlIsEDIDCapableOutputTechonology.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C00A5114 (BmlIsLowResAnalogTvOutput.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00F50F8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C00F96A0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00F97AC (BmlGetMonitorModePreference.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 v8; // rdx
  int v9; // r13d
  struct HDXGMONITOR__ *v10; // rcx
  int NextFrequencyRange; // eax
  int v12; // esi
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  __int64 v19; // rdx
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _DWORD *v24; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-20h] BYREF
  __int64 v26; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-10h]
  char v30; // [rsp+A0h] [rbp+58h]
  __int64 v31; // [rsp+A0h] [rbp+58h]
  int v32; // [rsp+A8h] [rbp+60h]

  v4 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v7 = 0;
  v27 = 0LL;
  if ( !*(_QWORD *)(a3 + 104) )
    return 3223192376LL;
  v8 = 0LL;
  v32 = 0;
  v24 = 0LL;
  v9 = -1;
  v30 = 0;
  while ( 1 )
  {
    v10 = *(struct HDXGMONITOR__ **)(a3 + 104);
    if ( !v10 )
      break;
    NextFrequencyRange = MonitorGetNextFrequencyRange(v10, v8, &v24, a4);
    v12 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
    {
      v13 = v27;
      v14 = 0LL;
      v26 = 0LL;
      LODWORD(v24) = 0;
      while ( 1 )
      {
        v10 = *(struct HDXGMONITOR__ **)(a3 + 104);
        if ( !v10 )
          goto LABEL_53;
        NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v10, v14, &v26, &v24);
        v12 = NextMonitorSourceMode;
        if ( NextMonitorSourceMode == 1075708748 )
        {
          if ( v32 == 1 && (v30 || BmlIsEDIDCapableOutputTechonology(a3) && v9 >= 8) )
          {
            v9 = 11;
            v25 = v13;
          }
          if ( BmlIsLowResAnalogTvOutput(a3) )
          {
            if ( v6 < 0x400 )
              v6 = 1024;
            if ( v7 < 0x300 )
              v7 = 768;
            v21 = BmlCompareModeExtents((int *)&qword_1C004C0E8, &v25);
            v22 = v25;
            if ( v21 == 1 )
              v22 = 0x30000000400LL;
            v25 = v22;
          }
          if ( v9 < 8 )
          {
            if ( BmlIsLowResAnalogTvOutput(a3) )
            {
              v18 = 800;
              v17 = 600;
            }
            v25 = __PAIR64__(v17, v18);
          }
          else
          {
            v17 = HIDWORD(v25);
            v18 = v25;
          }
          if ( v6 < v18 )
            v6 = v18;
          LODWORD(v31) = v6;
          if ( v7 < v17 )
            v7 = v17;
          v19 = 104LL * a2;
          HIDWORD(v31) = v7;
          *(_QWORD *)(v19 + a1 + 52) = v25;
          *(_QWORD *)(v19 + a1 + 44) = v31;
          return 1075708748LL;
        }
        if ( NextMonitorSourceMode < 0 )
        {
          v4 = (_DWORD *)v26;
          goto LABEL_54;
        }
        v14 = v26;
        if ( *(_DWORD *)(v26 + 88) == 1 && *(_DWORD *)(v26 + 84) == 5 )
        {
          ++v32;
          v13 = *(_QWORD *)(v26 + 20);
        }
        MonitorModePreference = BmlGetMonitorModePreference(v26, (unsigned int)v24, a3);
        if ( MonitorModePreference == 11 )
        {
          v30 = 1;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v9 )
        {
          v9 = MonitorModePreference;
          v25 = *(_QWORD *)(v14 + 20);
        }
        if ( v6 < *(_DWORD *)(v14 + 20) )
          v6 = *(_DWORD *)(v14 + 20);
        if ( v7 < *(_DWORD *)(v14 + 24) )
          v7 = *(_DWORD *)(v14 + 24);
      }
    }
    if ( NextFrequencyRange < 0 )
    {
      v4 = v24;
      goto LABEL_54;
    }
    v8 = (__int64)v24;
    if ( v24[9] == 1 )
    {
      if ( v6 < v24[10] )
        v6 = v24[10];
      if ( v7 < v24[11] )
        v7 = v24[11];
    }
  }
LABEL_53:
  v12 = -1071774920;
LABEL_54:
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v10, v8);
  v23[3] = v4;
  v23[4] = *(_QWORD *)(a3 + 104);
  v23[5] = v12;
  WdLogEvent5_WdError(v23);
  return (unsigned int)v12;
}
