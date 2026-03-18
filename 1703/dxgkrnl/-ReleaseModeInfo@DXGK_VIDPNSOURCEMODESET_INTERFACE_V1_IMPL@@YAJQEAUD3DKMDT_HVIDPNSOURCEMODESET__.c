/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0095970
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7004);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdError(v8, v7);
    v9 = 0LL;
LABEL_21:
    *(_QWORD *)(v18 + 24) = v9;
    WdLogEvent5_WdError(v18);
    v16 = -1071774960;
    goto LABEL_15;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v16 = -1071774968;
    goto LABEL_15;
  }
  v9 = a2 - 4;
  if ( *(_DWORD *)v9 != 305419896 )
  {
    v18 = WdLogNewEntry5_WdError(v8, v7);
    goto LABEL_21;
  }
  v10 = *((_QWORD *)v9 + 1);
  if ( !v10 )
    goto LABEL_14;
  v11 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_22;
  v12 = *v11 - 8LL;
  if ( *v11 == 8LL )
    goto LABEL_22;
  while ( v12 != v10 )
  {
    v13 = *(_QWORD **)(v12 + 8);
    if ( v13 != v11 )
    {
      v12 = (__int64)(v13 - 1);
      if ( v12 )
        continue;
    }
    goto LABEL_22;
  }
  if ( !v12 )
  {
LABEL_22:
    v19 = WdLogNewEntry5_WdError(v10, v11);
    *(_QWORD *)(v19 + 24) = v9;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    v16 = -1071774928;
  }
  else
  {
LABEL_14:
    ExFreePoolWithTag(v9, 0);
    v16 = 0;
  }
LABEL_15:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7004);
  return v16;
}
