/*
 * XREFs of BmlCompareSourceModes @ 0x1C00F4C20
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00F48C0 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     BmlCompareModeRegions @ 0x1C00F4894 (BmlCompareModeRegions.c)
 *     BmlGetPixelFormatPreference @ 0x1C00F4D58 (BmlGetPixelFormatPreference.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00F4D98 (BmlCompareSourceModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00F4F08 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C01DF078 (BmlCompareSourceModesWithContentRes.c)
 *     ?RegionGreaterThanContentResAllDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01DF950 (-RegionGreaterThanContentResAllDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z.c)
 *     ?RegionGreaterThanContentResAnyDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01DF980 (-RegionGreaterThanContentResAnyDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v6; // di
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 result; // rax
  unsigned int v13; // ebx
  int PixelFormatPreference; // edi
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  const struct _POINTL *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _D3DKMDT_2DREGION v26; // rbx
  struct _D3DKMDT_2DREGION v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  const struct _POINTL *v33; // rdx
  const struct _POINTL *v34; // rdx
  int v35; // r10d
  const struct _POINTL *v36; // rdx
  const struct _POINTL *v37; // rdx
  int v38; // r10d
  struct _D3DKMDT_2DREGION v39; // [rsp+70h] [rbp+40h] BYREF
  const struct _POINTL *v40; // [rsp+78h] [rbp+48h]
  unsigned __int16 v41; // [rsp+80h] [rbp+50h]

  v41 = a3;
  v6 = a3;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = a5;
  if ( a4 == a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !v9 )
    return 1LL;
  v10 = 1;
  if ( g_IsMobileCore )
  {
    v21 = *(const struct _POINTL **)(104LL * v6 + a1 + 16);
    v40 = v21;
    if ( (*(_QWORD *)v21 & 0x800000000000LL) != 0
      && !IsInternalVideoOutput(v21[11].x)
      && (*(_DWORD *)(v22 + a1 + 116) & 2) != 0 )
    {
      v26 = *(struct _D3DKMDT_2DREGION *)(a4 + 76);
      v27 = *(struct _D3DKMDT_2DREGION *)(v9 + 76);
      v39 = v26;
      a5 = (__int64)v27;
      if ( (v24 & 0x20000) != 0 )
      {
        v28 = *(_QWORD *)(a2 + 48);
        if ( !v28 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
          WdLogEvent5_WdAssertion(v29);
        }
        if ( !*(_QWORD *)(v28 + 8) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
          WdLogEvent5_WdAssertion(v30);
        }
        v31 = *(_QWORD *)(v28 + 8);
        if ( *(_DWORD *)(*(_QWORD *)(v31 + 16) + 276LL) == 1297040209 )
        {
          if ( !v31 )
          {
            v32 = WdLogNewEntry5_WdAssertion(0LL, v22, v24, v25);
            WdLogEvent5_WdAssertion(v32);
          }
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v28 + 8) + 16LL)) <= 1300 )
          {
            if ( (unsigned int)RegionGreaterThanContentResAnyDimension(&v39, v40 + 19) )
            {
              if ( (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v33) )
                return v26.cx * (unsigned __int64)v39.cy < v27.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
              return v10;
            }
            return 0xFFFFFFFFLL;
          }
        }
        v35 = RegionGreaterThanContentResAllDimension(&v39, v40 + 19);
        if ( v35 && (unsigned int)RegionGreaterThanContentResAllDimension((const struct _D3DKMDT_2DREGION *)&a5, v34) )
          return v26.cx * (unsigned __int64)v39.cy < v27.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
        if ( !v35 )
        {
          if ( (unsigned int)RegionGreaterThanContentResAllDimension((const struct _D3DKMDT_2DREGION *)&a5, v34) )
            return 0xFFFFFFFFLL;
          v38 = RegionGreaterThanContentResAnyDimension(&v39, v36);
          if ( v38 && (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v37) )
            return v26.cx * (unsigned __int64)v39.cy < v27.cx * (unsigned __int64)HIDWORD(a5) ? 1 : -1;
          if ( v38 )
            return v10;
          if ( (unsigned int)RegionGreaterThanContentResAnyDimension((const struct _D3DKMDT_2DREGION *)&a5, v37) )
            return 0xFFFFFFFFLL;
          if ( v27.cx > v26.cx || v39.cy < HIDWORD(a5) && v27.cx >= v26.cx )
          {
            if ( HIDWORD(a5) >= v39.cy )
              return 0xFFFFFFFFLL;
            if ( v26.cx <= v27.cx )
              return (unsigned int)-1;
          }
        }
        return v10;
      }
      v6 = v41;
    }
  }
  v11 = 104LL * v6;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + a1 + 16) + 129LL) && (*(_DWORD *)(a1 + 8) & 1) != 0
    || (result = BmlCompareSourceModesWithConstraint(a1, v6, a4, v9), !(_DWORD)result) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v11 + a1 + 16) + 129LL)
      || (*(_DWORD *)(v11 + a1 + 116) & 1) == 0
      || (result = BmlCompareSourceModesWithContentRes(a1, v6, a4, v9), !(_DWORD)result) )
    {
      v13 = *(_DWORD *)(a4 + 96);
      PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(v9 + 96));
      v15 = BmlGetPixelFormatPreference(v13);
      if ( v15 <= PixelFormatPreference )
      {
        if ( v15 >= PixelFormatPreference )
        {
          v10 = BmlCompareModeRegions((unsigned int *)(a4 + 76), (unsigned int *)(v9 + 76));
          if ( v10 )
          {
            v17 = BmlCompareSourceModesWithMonitors(a1, v41, v16, a4, v9);
            if ( v17 )
              return v17;
          }
          return v10;
        }
        return (unsigned int)-1;
      }
      return v10;
    }
  }
  return result;
}
