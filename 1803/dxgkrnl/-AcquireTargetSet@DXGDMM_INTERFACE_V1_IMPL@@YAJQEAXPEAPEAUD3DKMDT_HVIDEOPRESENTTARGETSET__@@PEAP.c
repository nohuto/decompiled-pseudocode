/*
 * XREFs of ?AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C0219D70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v20; // [rsp+48h] [rbp+10h]

  v4 = 0;
  v18 = 6050;
  v19 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6050);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 6050);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v12);
      }
      v13 = *((_QWORD *)this + 307);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 88);
        v20 = *(struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **)(v14 + 416);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
        *a2 = *(_QWORD *)(v14 + 80) & -(__int64)(*(_QWORD *)(v14 + 80) != -112LL);
        *a3 = v20;
        goto LABEL_15;
      }
      v10 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v10 + 24) = this;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v10);
    v4 = -1071775742;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    v4 = -1073741811;
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v18);
  return v4;
}
