/*
 * XREFs of ?AcquireSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE@@@Z @ 0x1C01D7720
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v19; // [rsp+38h] [rbp+10h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6048);
  v7 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13, v12, v10, v14);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)this + 285);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 88);
        v19 = *(struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **)(v17 + 400);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 72) + 72LL));
        v9 = *(_QWORD *)(v17 + 72) & -(__int64)(*(_QWORD *)(v17 + 72) != -112LL);
        *a2 = v9;
        *a3 = v19;
        goto LABEL_15;
      }
      v11 = WdLogNewEntry5_WdError(v13, 0LL);
      *(_QWORD *)(v11 + 24) = this;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v11);
    v7 = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
LABEL_15:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6048);
  return v7;
}
