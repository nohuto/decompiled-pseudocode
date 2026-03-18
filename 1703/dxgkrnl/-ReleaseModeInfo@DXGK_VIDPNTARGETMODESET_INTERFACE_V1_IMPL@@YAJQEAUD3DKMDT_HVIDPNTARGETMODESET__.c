/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C009B8C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v11; // rsi
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10 = 0;
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_26:
    WdLogEvent5_WdError(v16);
    v10 = -1071774959;
    goto LABEL_14;
  }
  if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173005) )
    v11 = 0LL;
  if ( !v11 )
  {
    v17 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v10 = -1071774967;
    goto LABEL_14;
  }
  v12 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    v16 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v16 + 24) = v12;
    goto LABEL_26;
  }
  v13 = *((_QWORD *)v12 + 1);
  if ( !v13 )
    goto LABEL_12;
  v9 = (__int64)v11 + 48;
  v8 = *((_QWORD *)v11 + 6);
  if ( (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v8 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)v11 + 48) )
    goto LABEL_27;
  v8 -= 8LL;
  if ( !v8 )
    goto LABEL_27;
  do
  {
    if ( v8 == v13 )
      break;
    v15 = *(_QWORD *)(v8 + 8);
    v8 = v15 - 8;
    if ( v15 == v9 )
      v8 = 0LL;
  }
  while ( v8 );
  if ( !v8 )
  {
LABEL_27:
    v18 = WdLogNewEntry5_WdError(v8, v13);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v11;
    WdLogEvent5_WdError(v18);
    v10 = -1071774928;
  }
  else
  {
LABEL_12:
    if ( a2 != (struct D3DKMDT_HVIDPNTARGETMODESET__ *const)16 )
      ExFreePoolWithTag(a2 - 4, 0);
  }
LABEL_14:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 7012);
  return v10;
}
