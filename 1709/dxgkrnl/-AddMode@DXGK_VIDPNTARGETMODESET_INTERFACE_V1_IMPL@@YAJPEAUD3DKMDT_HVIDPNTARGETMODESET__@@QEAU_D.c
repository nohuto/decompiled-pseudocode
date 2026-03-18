/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D7120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B644 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000B848 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00A3164 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A33E4 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTARGETMODESET *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rsi
  int v15; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v16; // ebx
  DMMVIDPNTARGETMODE *PoolWithTag; // rax
  __int64 v18; // rcx
  DMMVIDPNTARGETMODE *v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  UINT Numerator; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  DMMVIDPNTARGETMODE *v41; // [rsp+50h] [rbp+8h] BYREF
  DMMVIDPNTARGETMODE *v42; // [rsp+58h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v31 + 24) = 0LL;
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdError(v31);
    LODWORD(v23) = -1071774959;
    goto LABEL_26;
  }
  v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = (DMMVIDPNTARGETMODESET *)v7;
  if ( !v7 )
  {
    v32 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    LODWORD(v23) = -1071774967;
    goto LABEL_26;
  }
  v10 = *(_QWORD *)(v7 + 112);
  if ( !*(_QWORD *)(v10 + 40) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v33);
  }
  v13 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v13 + 8) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v34);
  }
  v14 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v12 = *(_QWORD *)(v14 + 16);
    if ( (*(_DWORD *)(v12 + 300) & 0x100) == 0 && !*(_QWORD *)(v12 + 560) )
      goto LABEL_52;
    if ( a2->VideoSignalInfo.HSyncFreq.Numerator == -2 && a2->VideoSignalInfo.HSyncFreq.Denominator == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_46;
      a2->VideoSignalInfo.HSyncFreq.Numerator = 1000;
      a2->VideoSignalInfo.HSyncFreq.Denominator = 1;
    }
    if ( a2->VideoSignalInfo.PixelRate != 4294967294 )
      goto LABEL_15;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      a2->VideoSignalInfo.PixelRate = 1000000LL;
      goto LABEL_15;
    }
LABEL_46:
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v36[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v36[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v36[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v36[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v36);
    LODWORD(v23) = -1071774966;
    goto LABEL_26;
  }
  if ( a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    goto LABEL_52;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 560LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_52;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = *(_QWORD *)(v14 + 16);
  }
  else
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
    v30[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v30[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v30[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v30[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_15:
  v12 = *(_QWORD *)(*((_QWORD *)v9 + 14) + 96LL);
  v15 = *(_DWORD *)(v12 + 84);
  if ( v15 < 15 || v15 > 16 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_17;
LABEL_52:
    v38 = WdLogNewEntry5_WdError(v12);
    LODWORD(v23) = -1071774966;
    *(_QWORD *)(v38 + 24) = *(_QWORD *)(v14 + 16);
    *(_QWORD *)(v38 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_26;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_52;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v12 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    if ( 10 * Numerator / (unsigned int)v12 < 0xEF )
      goto LABEL_52;
  }
LABEL_17:
  v16.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)a2->WireFormatAndPreference;
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v14 + 16)) )
    v16.Value = *(_BYTE *)&v16.0 & 3;
  PoolWithTag = (DMMVIDPNTARGETMODE *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x4E506456u);
  if ( PoolWithTag )
    v19 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(PoolWithTag, a2->Id, v16);
  else
    v19 = 0LL;
  v41 = v19;
  if ( !v19 )
  {
    v39 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdLowResource(v39);
    LODWORD(v23) = -1073741801;
    goto LABEL_25;
  }
  v20 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v19 + 72), &a2->VideoSignalInfo);
  v23 = v20;
  if ( v20 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
    v40[3] = v19;
LABEL_57:
    v40[5] = v23;
    v40[4] = this;
    goto LABEL_25;
  }
  v41 = 0LL;
  v42 = v19;
  v24 = DMMVIDPNTARGETMODESET::AddMode((__int64)v9, (__int64 *)&v42);
  v23 = v24;
  if ( v24 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
    v40[3] = a2;
    goto LABEL_57;
  }
  LODWORD(v23) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v9, a2);
LABEL_25:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v41);
LABEL_26:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, 7014);
  return (unsigned int)v23;
}
