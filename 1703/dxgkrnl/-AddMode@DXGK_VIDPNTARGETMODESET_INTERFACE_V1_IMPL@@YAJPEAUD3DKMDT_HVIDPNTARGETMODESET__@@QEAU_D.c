/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F8F70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CDC8 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000CFB0 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00DE21C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE49C (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DMMVIDPNTARGETMODESET *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 ScanLineOrdering; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  int v22; // eax
  DMMVIDPNTARGETMODE *PoolWithTag; // rax
  __int64 v24; // rcx
  DMMVIDPNTARGETMODE *v25; // rsi
  DMMVIDPNTARGETMODE *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  UINT Numerator; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  DMMVIDPNTARGETMODE *v52; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v41 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v41 + 24) = 0LL;
    *(_QWORD *)(v41 + 32) = this;
    WdLogEvent5_WdError(v41);
    LODWORD(v32) = -1071774959;
    goto LABEL_25;
  }
  v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v14 = (DMMVIDPNTARGETMODESET *)v9;
  if ( !v9 )
  {
    v42 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdError(v42);
    LODWORD(v32) = -1071774967;
    goto LABEL_25;
  }
  v15 = *(_QWORD *)(v9 + 112);
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v43);
  }
  v18 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v18 + 8) )
  {
    v44 = WdLogNewEntry5_WdAssertion(ScanLineOrdering, v16, v19, v20);
    WdLogEvent5_WdAssertion(v44);
  }
  v21 = *(_QWORD *)(v18 + 8);
  if ( !v21 )
  {
    v45 = WdLogNewEntry5_WdAssertion(ScanLineOrdering, v16, v19, v20);
    WdLogEvent5_WdAssertion(v45);
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 )
    goto LABEL_11;
  if ( a2->VideoSignalInfo.VSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    if ( a2->VideoSignalInfo.VSyncFreq.Denominator == -2 )
      goto LABEL_52;
LABEL_11:
    ScanLineOrdering = *(_QWORD *)(v21 + 16);
    if ( (*(_DWORD *)(ScanLineOrdering + 300) & 0x100) == 0 && !*(_QWORD *)(ScanLineOrdering + 560) )
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
    v47 = (_QWORD *)WdLogNewEntry5_WdError(ScanLineOrdering, v16);
    v47[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v47[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v47[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v47[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v47);
    LODWORD(v32) = -1071774966;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 560LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_52;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(ScanLineOrdering, v16, v19, v20) + 24) = *(_QWORD *)(v21 + 16);
  }
  else
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdTrace(ScanLineOrdering, v16, v19, v20);
    v46[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v46[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v46[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v46[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_15:
  ScanLineOrdering = *(_QWORD *)(*((_QWORD *)v14 + 14) + 96LL);
  v22 = *(_DWORD *)(ScanLineOrdering + 84);
  if ( v22 < 15 || v22 > 16 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_17;
LABEL_52:
    v49 = WdLogNewEntry5_WdError(ScanLineOrdering, v16);
    LODWORD(v32) = -1071774966;
    *(_QWORD *)(v49 + 24) = *(_QWORD *)(v21 + 16);
    *(_QWORD *)(v49 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v49);
    goto LABEL_25;
  }
  ScanLineOrdering = (unsigned int)a2->VideoSignalInfo.ScanLineOrdering;
  if ( (ScanLineOrdering & 0x1F8) == 0 )
    goto LABEL_52;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    ScanLineOrdering = a2->VideoSignalInfo.VSyncFreq.Denominator * (((unsigned int)ScanLineOrdering >> 3) & 0x3F);
    v16 = 10 * Numerator % (unsigned int)ScanLineOrdering;
    if ( 10 * Numerator / (unsigned int)ScanLineOrdering < 0xEF )
      goto LABEL_52;
  }
LABEL_17:
  PoolWithTag = (DMMVIDPNTARGETMODE *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x4E506456u);
  if ( PoolWithTag )
    v25 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(PoolWithTag, a2->Id, a2->WireFormatAndPreference);
  else
    v25 = 0LL;
  v26 = v25;
  if ( v25 )
  {
    v27 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v25 + 72), &a2->VideoSignalInfo);
    v32 = v27;
    if ( v27 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      v51[3] = v25;
    }
    else
    {
      v52 = v25;
      v26 = 0LL;
      v33 = DMMVIDPNTARGETMODESET::AddMode((__int64)v14, (__int64 *)&v52, v30, v31);
      v32 = v33;
      if ( v33 >= 0 )
      {
        LODWORD(v32) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v14, a2);
        goto LABEL_23;
      }
      v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      v51[3] = a2;
    }
    v51[5] = v32;
    v51[4] = this;
  }
  else
  {
    v50 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v50 + 24) = this;
    WdLogEvent5_WdLowResource(v50);
    LODWORD(v32) = -1073741801;
  }
LABEL_23:
  if ( v26 )
    (**(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v26)(v26, 1LL);
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v38, &EventProfilerExit, v39, 7014);
  return (unsigned int)v32;
}
