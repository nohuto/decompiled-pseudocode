/*
 * XREFs of ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F6630
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E0C04 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  DMMVIDPNTOPOLOGY *v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6022);
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
      v5 = this;
    else
      v5 = 0LL;
    if ( v5 )
    {
      v7 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v5, a2);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(0LL, a2);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      v7 = -1071774976;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    v7 = -1071774951;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v8, 6022);
  return v7;
}
