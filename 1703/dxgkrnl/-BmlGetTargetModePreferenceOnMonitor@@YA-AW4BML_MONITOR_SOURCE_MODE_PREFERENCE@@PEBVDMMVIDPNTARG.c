/*
 * XREFs of ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00F950C
 * Callers:
 *     BmlCompareTargetModesWithMonitor @ 0x1C00F30CC (BmlCompareTargetModesWithMonitor.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000D190 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C00A352C (BmlIsEDIDCapableOutputTechonology.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00F50F8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C00F96A0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00F97AC (BmlGetMonitorModePreference.c)
 */

__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // r12d
  char v9; // r13
  __int64 v10; // rcx
  int NextMonitorSourceMode; // eax
  int v12; // edi
  int MonitorModePreference; // r14d
  _QWORD *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+28h] [rbp-40h] BYREF
  char v18; // [rsp+78h] [rbp+10h]
  char v19; // [rsp+80h] [rbp+18h]
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = a2;
  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 104) )
    return 0xFFFFFFFFLL;
  v6 = 0LL;
  v16 = 0LL;
  v20 = 0;
  v7 = -1;
  v8 = 0;
  v17[0] = 0LL;
  v19 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a3 + 104);
    if ( !v10 )
    {
      v12 = -1071774920;
      goto LABEL_32;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v10, v6, &v16, &v20);
    v12 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v16;
LABEL_32:
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v10, a2);
      v15[3] = v3;
      v15[4] = *(_QWORD *)(a3 + 104);
      v15[5] = v12;
      WdLogEvent5_WdError(v15);
      return 0xFFFFFFFFLL;
    }
    v6 = v16;
    if ( *(_DWORD *)(v16 + 88) == 1 && *(_DWORD *)(v16 + 84) == 5 )
      ++v8;
    MonitorModePreference = BmlGetMonitorModePreference(v16, v20, a3);
    if ( MonitorModePreference == 8 )
      v9 = 1;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(a1 + 84)
      && *(_DWORD *)(v6 + 24) == *(_DWORD *)(a1 + 88)
      && (v18
       || DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 8),
            0)) )
    {
      if ( *(_DWORD *)(v6 + 88) == 1 && *(_DWORD *)(v6 + 84) == 5 )
        v17[0] = *(_QWORD *)(v6 + 20);
      if ( MonitorModePreference == 11 )
      {
        v19 = 1;
        MonitorModePreference = 0;
      }
      if ( MonitorModePreference > v7 )
        v7 = MonitorModePreference;
    }
  }
  if ( v8 == 1
    && (v19 || BmlIsEDIDCapableOutputTechonology(a3)
            && v9
            && !(unsigned int)BmlCompareModeExtents((int *)(a1 + 84), v17)) )
  {
    return 11;
  }
  return (unsigned int)v7;
}
