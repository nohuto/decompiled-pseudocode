/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00ED900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7004);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    v7 = 0LL;
LABEL_21:
    *(_QWORD *)(v16 + 24) = v7;
    WdLogEvent5_WdError(v16);
    v14 = -1071774960;
    goto LABEL_15;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v14 = -1071774968;
    goto LABEL_15;
  }
  v7 = a2 - 4;
  if ( *(_DWORD *)v7 != 305419896 )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    goto LABEL_21;
  }
  v8 = *((_QWORD *)v7 + 1);
  if ( !v8 )
    goto LABEL_14;
  v9 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v9 == v9 )
    goto LABEL_22;
  v10 = *v9 - 8LL;
  if ( *v9 == 8LL )
    goto LABEL_22;
  while ( v10 != v8 )
  {
    v11 = *(_QWORD **)(v10 + 8);
    if ( v11 != v9 )
    {
      v10 = (__int64)(v11 - 1);
      if ( v10 )
        continue;
    }
    goto LABEL_22;
  }
  if ( !v10 )
  {
LABEL_22:
    v17 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v17 + 24) = v7;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    v14 = -1071774928;
  }
  else
  {
LABEL_14:
    ExFreePoolWithTag(v7, 0);
    v14 = 0;
  }
LABEL_15:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 7004);
  return v14;
}
