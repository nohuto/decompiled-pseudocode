/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00B9F68
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00BA3B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E0B90 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(ADAPTER_DISPLAY **this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  ADAPTER_DISPLAY *v9; // rax
  DXGADAPTER *v10; // r14
  __int64 v11; // rcx
  ADAPTER_DISPLAY *v12; // rcx
  int IsSupportedVidPn; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v24; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  *a3 = 0;
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v8 = v6;
  if ( !*(_BYTE *)(v6 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v6 + 96)) )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = a2;
    WdLogEvent5_WdError(v18);
    *a3 = 0;
    return 0LL;
  }
  LOBYTE(v7) = *(_BYTE *)(v8 + 172);
  if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v8 + 174)) != 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = this[1];
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v20);
    v9 = this[1];
  }
  v10 = (DXGADAPTER *)*((_QWORD *)v9 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v21);
  }
  v12 = this[1];
  *(_QWORD *)&v24.IsVidPnSupported = 0LL;
  v24.hDesiredVidPn = a2;
  if ( !v12 )
  {
    v22 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v22);
    v12 = this[1];
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v12, &v24);
  v15 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v24.IsVidPnSupported;
    return 0LL;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  v23[3] = a2;
  v23[4] = v10;
  v23[5] = v15;
  WdLogEvent5_WdError(v23);
  return (unsigned int)v15;
}
