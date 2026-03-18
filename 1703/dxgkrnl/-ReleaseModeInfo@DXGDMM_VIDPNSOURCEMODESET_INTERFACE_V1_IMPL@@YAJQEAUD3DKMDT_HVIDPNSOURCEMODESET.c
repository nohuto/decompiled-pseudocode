/*
 * XREFs of ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00F45C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000C3B4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DFDC0 (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6006);
  if ( a2 )
  {
    v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v5 )
    {
      v9 = DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(v5, a2);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      v9 = -1071774968;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    v9 = -1071774960;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v10, 6006);
  return v9;
}
