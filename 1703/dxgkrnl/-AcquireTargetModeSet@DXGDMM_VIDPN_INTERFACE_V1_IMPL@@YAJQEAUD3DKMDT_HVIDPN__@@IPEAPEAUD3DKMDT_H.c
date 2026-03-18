/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00F3E70
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00E4A14 (-QueryDxgDmmVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERF.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  VIDPN_MGR *v17; // r11
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v26; // rax
  __int64 v27; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v35; // [rsp+50h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6036);
  v8 = 0;
  if ( !a3 || !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v29[3] = 0LL;
    v29[4] = v6;
    v29[5] = this;
    WdLogEvent5_WdError(v29);
    v8 = -1073741811;
    goto LABEL_11;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v12 = v9;
  if ( !v9 )
  {
    v30 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v8 = -1071774973;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 48) + 88LL) == v9 )
  {
    v31 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v31 + 24) = v6;
    *(_QWORD *)(v31 + 32) = v12;
    WdLogEvent5_WdError(v31);
    v8 = -1071774909;
    goto LABEL_11;
  }
  if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
  {
    v32 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v32 + 24) = v6;
    *(_QWORD *)(v32 + 32) = v12;
    WdLogEvent5_WdError(v32);
    v8 = -1071774912;
    goto LABEL_11;
  }
  v35 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnTargetModeSetInterface(v17, &v35, v15, v16);
  v18 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), v6);
  v23 = v18;
  if ( !v18 )
  {
    v33 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v33 + 24) = v6;
    WdLogEvent5_WdError(v33);
    v8 = -1071774971;
    goto LABEL_11;
  }
  v24 = *(_QWORD *)(v18 + 104);
  if ( !v24 )
  {
    v25 = 0LL;
    goto LABEL_21;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
  v25 = *(_QWORD *)(v23 + 104);
  if ( !v25 )
  {
LABEL_21:
    v34 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    WdLogEvent5_WdAssertion(v34);
  }
  v26 = v35;
  v27 = v25 & -(__int64)(v25 != -137);
  *a3 = v27;
  *a4 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)v26;
LABEL_11:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v21, 6036);
  return v8;
}
