/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AB880
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00E4A48 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDPN_MGR *v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rdi
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v24; // rax
  __int64 v25; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v33; // [rsp+50h] [rbp+18h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6034);
  v8 = 0;
  if ( !a3 || !a4 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v27[3] = 0LL;
    v27[4] = v6;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v8 = -1073741811;
    goto LABEL_11;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v12 = v9;
  if ( !v9 )
  {
    v28 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v8 = -1071774973;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 48) + 88LL) == v9 )
  {
    v29 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = v12;
    WdLogEvent5_WdError(v29);
    v8 = -1071774909;
    goto LABEL_11;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v6) )
  {
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = v6;
    *(_QWORD *)(v30 + 32) = v12;
    WdLogEvent5_WdError(v30);
    v8 = -1071774919;
    goto LABEL_11;
  }
  v33 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v15, &v33);
  v16 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v12 + 304), v6);
  v21 = v16;
  if ( !v16 )
  {
    v31 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v31 + 24) = v6;
    *(_QWORD *)(v31 + 32) = v12;
    WdLogEvent5_WdError(v31);
    v8 = -1071774972;
    goto LABEL_11;
  }
  v22 = *(_QWORD *)(v16 + 104);
  if ( !v22 )
  {
    v23 = 0LL;
    goto LABEL_21;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
  v23 = *(_QWORD *)(v21 + 104);
  if ( !v23 )
  {
LABEL_21:
    v32 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v32);
  }
  v24 = v33;
  v25 = v23 & -(__int64)(v23 != -137);
  *a3 = v25;
  *a4 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v24;
LABEL_11:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v19, 6034);
  return v8;
}
