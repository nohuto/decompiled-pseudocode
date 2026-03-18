/*
 * XREFs of ?ReleaseTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01F6850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0012CF8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E55C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v9 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v9, a2);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      return 3223192342LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = this;
    WdLogEvent5_WdError(v7);
    return 3223192325LL;
  }
}
