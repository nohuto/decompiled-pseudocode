/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F00C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v8; // rsi
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v9; // rdi
  __int64 v10; // r8
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v7 = 0;
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_26:
    WdLogEvent5_WdError(v13);
    v7 = -1071774959;
    goto LABEL_14;
  }
  if ( !this || (v8 = this, *((_DWORD *)this + 32) != 1833173005) )
    v8 = 0LL;
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    v7 = -1071774967;
    goto LABEL_14;
  }
  v9 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = v9;
    goto LABEL_26;
  }
  v10 = *((_QWORD *)v9 + 1);
  if ( !v10 )
    goto LABEL_12;
  v6 = *((_QWORD *)v8 + 6);
  if ( (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v6 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)v8 + 48) )
    goto LABEL_27;
  v6 -= 8LL;
  if ( !v6 )
    goto LABEL_27;
  do
  {
    if ( v6 == v10 )
      break;
    v12 = *(DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)(v6 + 8);
    v6 = (__int64)v12 - 8;
    if ( v12 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)v8 + 48) )
      v6 = 0LL;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_27:
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = v9;
    *(_QWORD *)(v15 + 32) = v8;
    WdLogEvent5_WdError(v15);
    v7 = -1071774928;
  }
  else
  {
LABEL_12:
    if ( a2 != (struct D3DKMDT_HVIDPNTARGETMODESET__ *const)16 )
      ExFreePoolWithTag(a2 - 4, 0);
  }
LABEL_14:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v10, 7012);
  return v7;
}
