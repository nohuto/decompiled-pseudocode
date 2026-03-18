/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00D4430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v28; // [rsp+50h] [rbp+18h]

  v6 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6036);
  v8 = 0;
  if ( !a3 || !a4 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v22[3] = 0LL;
    v22[4] = v6;
    v22[5] = this;
    WdLogEvent5_WdError(v22);
    v8 = -1073741811;
    goto LABEL_11;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v23 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v8 = -1071774973;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 48) + 88LL) == v9 )
  {
    v24 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v24 + 24) = v6;
    *(_QWORD *)(v24 + 32) = v11;
    WdLogEvent5_WdError(v24);
    v8 = -1071774909;
    goto LABEL_11;
  }
  if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
  {
    v25 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v25 + 24) = v6;
    *(_QWORD *)(v25 + 32) = v11;
    WdLogEvent5_WdError(v25);
    v8 = -1071774912;
    goto LABEL_11;
  }
  v28 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v13 + 448);
  v14 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), v6);
  v17 = v14;
  if ( !v14 )
  {
    v26 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v26 + 24) = v6;
    WdLogEvent5_WdError(v26);
    v8 = -1071774971;
    goto LABEL_11;
  }
  v18 = *(_QWORD *)(v14 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
    goto LABEL_21;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v17 + 104);
  if ( !v19 )
  {
LABEL_21:
    v27 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v27);
  }
  v20 = v19 & -(__int64)(v19 != -137);
  *a3 = v20;
  *a4 = v28;
LABEL_11:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v16, 6036);
  return v8;
}
