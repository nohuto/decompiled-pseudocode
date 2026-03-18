/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00BB160
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h]
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v34; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v33 = 0LL;
  v32 = 7048;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7048);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = this;
  v13[4] = v5;
  v13[5] = a3;
  v13[6] = a4;
  if ( !a3 || !a4 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v27[3] = 0LL;
    v27[4] = v5;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v4 = -1073741811;
    goto LABEL_11;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v17 = v15;
  if ( !v15 )
  {
    v28 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v4 = -1071774973;
    goto LABEL_11;
  }
  if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v15 + 96), v5) )
  {
    v29 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v29 + 24) = v5;
    *(_QWORD *)(v29 + 32) = v17;
    WdLogEvent5_WdError(v29);
  }
  v34 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*(_QWORD *)(v17 + 48) + 392LL);
  v19 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v17 + 312), v5);
  v21 = v19;
  if ( !v19 )
  {
    v30 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v30 + 24) = v5;
    WdLogEvent5_WdError(v30);
    v4 = -1071774971;
    goto LABEL_11;
  }
  v22 = *(_QWORD *)(v19 + 104);
  if ( !v22 )
  {
    v23 = 0LL;
    goto LABEL_19;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
  v23 = *(_QWORD *)(v21 + 104);
  if ( !v23 )
  {
LABEL_19:
    v31 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v31);
  }
  *a3 = v23 & -(__int64)(v23 != -137);
  *a4 = v34;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v32);
  return v4;
}
