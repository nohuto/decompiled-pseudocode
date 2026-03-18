/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0026EAC
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C0026750 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C01A11E0 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C0027144 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x1C002D730 (DpiGetDbgInfoAdapters.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(_DWORD *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // r15
  unsigned __int16 v7; // dx
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // r14
  int v11; // esi
  __int64 v12; // rsi
  unsigned __int16 i; // r8
  int v14; // r11d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 v18; // r14
  __int64 v19; // rcx
  unsigned __int16 v20; // bx
  __int64 v21; // rdx
  unsigned __int64 RecentEvents; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+28h] [rbp-81h]
  __int64 v27; // [rsp+30h] [rbp-79h]
  __int64 v28; // [rsp+38h] [rbp-71h]
  _BYTE v29[12]; // [rsp+40h] [rbp-69h]
  _DWORD v30[28]; // [rsp+50h] [rbp-59h] BYREF

  v3 = a2;
  if ( a2 <= 0xA8 )
    return 0LL;
  if ( a1 )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = (unsigned int)(2 * v8);
      a1[v9] = 0;
      a1[(unsigned int)(v9 + 1)] = 0;
    }
    while ( v7 < 0x15u );
    *a1 = 21;
  }
  v10 = 0;
  v11 = 8;
  if ( (unsigned int)v3 >= 0xB0 )
  {
    if ( a1 )
    {
      a1[42] = 2;
      v10 = 1;
      *((_BYTE *)a1 + 172) = word_1C006085C;
      *((_BYTE *)a1 + 173) = 0;
      a1[2] = 168;
      a1[3] = 9;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = (unsigned int)(v11 + 168);
  memset(v30, 0, sizeof(v30));
  if ( (int)DpiGetDbgInfoAdapters(v30) >= 0 )
  {
    for ( i = 0; i < 7u; ++i )
    {
      if ( (unsigned int)v12 >= (unsigned int)v3 )
        break;
      v14 = v30[4 * i];
      if ( !v14 )
        break;
      v15 = 16;
      if ( v12 + 16 > v3 )
        v15 = 0;
      if ( v15 )
      {
        ++v10;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v12 + 4) = v30[4 * i + 1];
          *(_DWORD *)((char *)a1 + v12 + 8) = v30[4 * i + 2];
          v16 = (*(_DWORD *)((char *)a1 + v12 + 12) ^ v30[4 * i + 3]) & 3;
          *(_DWORD *)((char *)a1 + v12) = v14;
          *(_DWORD *)((char *)a1 + v12 + 12) ^= v16;
          v17 = 2 * (unsigned int)v10;
          a1[v17] = v12;
          a1[(unsigned int)(v17 + 1)] = i + 32;
        }
        v12 = (unsigned int)(v15 + v12);
      }
    }
  }
  v18 = v10 + 1;
  if ( a1 )
  {
    *((_BYTE *)a1 + v12) ^= (TdrGatherPowerTriage() ^ *((_BYTE *)a1 + v12)) & 3;
    v19 = 2 * (unsigned int)v18;
    a1[v19] = v12;
    a1[(unsigned int)(v19 + 1)] = 48;
    v12 = (unsigned int)(v12 + 8);
  }
  v25 = 0x2000000001LL;
  v20 = 0;
  v26 = 0x4000000020LL;
  v28 = 0x4000000020LL;
  *(_DWORD *)v29 = 32;
  v27 = 0x4000000040LL;
  *(_QWORD *)&v29[4] = 64LL;
  do
  {
    if ( (unsigned int)v12 >= (unsigned int)v3 )
      break;
    if ( a3 )
      v21 = 0xFFFFFFFFLL;
    else
      v21 = *((unsigned int *)&v25 + v20);
    RecentEvents = (unsigned int)WdLogGetRecentEvents(
                                   v20,
                                   v21,
                                   0LL,
                                   0LL,
                                   v25,
                                   v26,
                                   v27,
                                   v28,
                                   *(_QWORD *)v29,
                                   *(_DWORD *)&v29[8]);
    if ( v12 + RecentEvents < RecentEvents || v12 + RecentEvents > v3 )
      RecentEvents = (unsigned int)(v3 - v12);
    if ( (_DWORD)RecentEvents )
    {
      ++v18;
      if ( a1 )
      {
        if ( a3 )
          v23 = 0xFFFFFFFFLL;
        else
          v23 = *((unsigned int *)&v25 + v20);
        LODWORD(RecentEvents) = WdLogGetRecentEvents(
                                  v20,
                                  v23,
                                  (char *)a1 + (unsigned int)v12,
                                  RecentEvents,
                                  v25,
                                  v26,
                                  v27,
                                  v28,
                                  *(_QWORD *)v29,
                                  *(_DWORD *)&v29[8]);
        v24 = 2 * (unsigned int)v18;
        a1[v24] = v12;
        a1[(unsigned int)(v24 + 1)] = v20 + 16;
      }
      v12 = (unsigned int)(RecentEvents + v12);
    }
    ++v20;
  }
  while ( v20 < 0xBu );
  return (unsigned int)v12;
}
