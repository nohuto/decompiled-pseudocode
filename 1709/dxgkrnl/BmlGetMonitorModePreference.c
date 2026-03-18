/*
 * XREFs of BmlGetMonitorModePreference @ 0x1C00D7A1C
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00D7574 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00D777C (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A214 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C00F7E28 (BmlIsLowResAnalogTvOutput.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1C01F80FC (BmlGetMonitorModeVSyncPreference.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // edx
  int v13; // edx
  __int64 v14; // r9
  unsigned int v15; // r10d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // r9
  __int64 v20; // r9

  v4 = a1[21] - 1;
  if ( !v4 )
  {
    if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
      return BmlGetMonitorModeVSyncPreference(v19);
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v19 + 28), *(unsigned int *)(v19 + 32)) != 60 )
      return 0LL;
    if ( *(_DWORD *)(v20 + 20) != 800 || *(_DWORD *)(v20 + 24) != 600 )
      return 3LL;
    return 4LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = a2 - 1;
    if ( !v6 )
      return 6LL;
    v12 = v6 - 1;
    if ( !v12 )
      return 6LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 6LL;
    if ( v13 == 1 )
      return 8LL;
    return -1LL;
  }
  v8 = v5 - 1;
  if ( !v8 )
  {
    v16 = a2 - 1;
    if ( !v16 )
      return 9LL;
    v17 = v16 - 1;
    if ( !v17 )
      return 9LL;
    v18 = v17 - 1;
    if ( !v18 )
      return 9LL;
    if ( v18 == 1 )
      return 10LL;
    return -1LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
    return 5LL;
  if ( v9 != 1 )
    return -1LL;
  v10 = *(_DWORD *)(a3 + 80);
  v11 = -1;
  if ( (v10 == -1
     || v10 == 0x80000000
     || v10 > 0 && (v10 <= 3 || v10 == 6 || v10 > 7 && (v10 <= 9 || v10 > 10 && v10 <= 14)))
    && a1[22] == 1 )
  {
    return 11LL;
  }
  if ( v10 == -1 || v10 > 0 && (v10 <= 3 || v10 == 14) )
  {
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)a1[7], (unsigned int)a1[8]) != 60 )
      return 7LL;
    if ( *(_DWORD *)(v14 + 20) != 800 || *(_DWORD *)(v14 + 24) != 600 )
      return v15;
    return 4LL;
  }
  if ( a1[8] )
  {
    v11 = a1[7] / a1[8] + 1;
    if ( (unsigned int)a1[7] % (unsigned __int64)(unsigned int)a1[8] < (unsigned int)a1[8]
                                                                     - (unsigned int)a1[7]
                                                                     % (unsigned __int64)(unsigned int)a1[8] )
      v11 = a1[7] / a1[8];
  }
  if ( v11 - 24 > 0x33 )
  {
    return 0;
  }
  else if ( v11 <= 0x46 && v11 >= 0x32 )
  {
    if ( v11 == 60 )
    {
      if ( a1[5] == 1024 && a1[6] == 768 )
        return 4;
      else
        return 3;
    }
    else
    {
      return 2;
    }
  }
  return v9;
}
