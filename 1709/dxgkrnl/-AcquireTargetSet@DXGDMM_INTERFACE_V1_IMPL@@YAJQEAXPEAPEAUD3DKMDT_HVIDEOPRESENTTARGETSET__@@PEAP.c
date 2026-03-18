/*
 * XREFs of ?AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C01F0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v17; // [rsp+38h] [rbp+10h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6050);
  v7 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v13);
      }
      v14 = *((_QWORD *)this + 288);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 88);
        v17 = *(struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **)(v15 + 416);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
        v9 = *(_QWORD *)(v15 + 80) & -(__int64)(*(_QWORD *)(v15 + 80) != -112LL);
        *a2 = v9;
        *a3 = v17;
        goto LABEL_15;
      }
      v11 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v11 + 24) = this;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v11);
    v7 = -1071775742;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    v7 = -1073741811;
  }
LABEL_15:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6050);
  return v7;
}
