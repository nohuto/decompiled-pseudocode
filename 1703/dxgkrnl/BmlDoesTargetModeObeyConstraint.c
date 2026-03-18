/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C00F4360
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00F4168 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000D24C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00F4C00 (BmlAreRawModesEnabled.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00F50F8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F911C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

char __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  unsigned __int8 v6; // r10
  int IsSupportedByMonitor; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r10
  unsigned int v15; // ecx
  struct _D3DDDI_RATIONAL v16; // rax
  unsigned int v17; // ecx
  struct _D3DDDI_RATIONAL v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _D3DDDI_RATIONAL v25; // [rsp+20h] [rbp-10h] BYREF
  struct _D3DDDI_RATIONAL v26; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int8 v27; // [rsp+58h] [rbp+28h] BYREF

  v4 = *(__int64 **)(104LL * a2 + a1 + 16);
  if ( (unsigned __int8)BmlAreRawModesEnabled() && (*(_BYTE *)v4 & 0x87) != 0 || (*(_DWORD *)(v5 + 8) & 4) != 0 )
    goto LABEL_5;
  v26.Numerator = 0;
  v27 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a3,
                           v6,
                           &v27,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v26);
  v12 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v20[3] = v12;
    v23 = *(unsigned int *)(a3 + 24);
    v20[4] = v23;
    if ( !*(_QWORD *)(a3 + 40) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v19, v21, v22);
      WdLogEvent5_WdAssertion(v24);
    }
    v20[5] = *(_QWORD *)(a3 + 40);
    return 0;
  }
  if ( v27 )
  {
LABEL_5:
    v13 = *v4;
    if ( (*v4 & 0x87) == 0 )
      return 1;
    if ( ((v13 & 4) == 0 || (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v4 + 80)) & 7) == 0)
      && ((v13 & 1) == 0 || (v4[1] & 1) == 0 || !(unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v4 + 44)) )
    {
      if ( (v13 & 2) == 0 || (v4[1] & 2) == 0 )
        return 1;
      v15 = *((_DWORD *)v4 + 20);
      v16 = *(struct _D3DDDI_RATIONAL *)((char *)v4 + 52);
      if ( (v15 & 0x1F8) != 0 )
      {
        v26.Numerator = *(__int64 *)((char *)v4 + 52);
        v26.Denominator = v16.Denominator * ((v15 >> 3) & 0x3F);
        v16 = v26;
      }
      v17 = *(_DWORD *)(a3 + 120);
      v25 = v16;
      v18 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
      if ( (v17 & 0x1F8) != 0 )
      {
        v26.Numerator = *(_QWORD *)(a3 + 92);
        v26.Denominator = v18.Denominator * ((v17 >> 3) & 0x3F);
        v18 = v26;
      }
      v26 = v18;
      if ( DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v26, &v25, 0) )
        return 1;
    }
  }
  return 0;
}
