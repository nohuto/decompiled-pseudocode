/*
 * XREFs of ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00F4630
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000825C (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00E4B18 (-QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INT.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  DMMVIDPNTARGET *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DMMVIDPNTARGET *v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+50h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v38; // [rsp+60h] [rbp+18h] BYREF
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v39; // [rsp+68h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7050);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = v7;
  v8[4] = a3;
  v8[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v7);
    v16 = v11;
    if ( v11 )
    {
      VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        *(VIDPN_MGR **)(v11 + 48),
        (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&v39,
        v14,
        v15);
      v17 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v16 + 312), v6);
      v22 = v17;
      if ( v17 )
      {
        v37 = 0LL;
        v38 = 0LL;
        v23 = DMMVIDPNTARGET::CreateNewCofuncModeSet(v17, &v38, v20, v21);
        v7 = v23;
        if ( v23 < 0 )
        {
          v36 = WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v27);
          *(_QWORD *)(v36 + 24) = *((unsigned int *)v22 + 6);
          *(_QWORD *)(v36 + 32) = v7;
          WdLogEvent5_WdDmmEvent(v36);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, (__int64)v38);
          v28 = v37;
          v29 = -(__int64)(v37 != -137);
          v37 = 0LL;
          *a3 = v28 & v29;
          LODWORD(v7) = 0;
          *a4 = v39;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v35 + 24) = v6;
        WdLogEvent5_WdError(v35);
        LODWORD(v7) = -1071774971;
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v34 + 24) = v7;
      WdLogEvent5_WdError(v34);
      LODWORD(v7) = -1071774973;
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v33 + 24) = 0LL;
    *(_QWORD *)(v33 + 32) = v7;
    WdLogEvent5_WdError(v33);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 7050);
  return (unsigned int)v7;
}
