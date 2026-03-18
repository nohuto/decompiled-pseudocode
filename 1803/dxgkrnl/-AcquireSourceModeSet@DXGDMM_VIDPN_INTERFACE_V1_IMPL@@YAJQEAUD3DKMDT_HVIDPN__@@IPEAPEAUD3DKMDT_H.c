/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00C70F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+28h] [rbp-20h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v32; // [rsp+60h] [rbp+18h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v31 = 0LL;
  v30 = 6034;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6034);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 6034);
  if ( !a3 || !a4 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v24[3] = 0LL;
    v24[4] = v5;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    v4 = -1073741811;
    goto LABEL_11;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v12 = v10;
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    v4 = -1071774973;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 48) + 88LL) == v10 )
  {
    v26 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v26 + 24) = v5;
    *(_QWORD *)(v26 + 32) = v12;
    WdLogEvent5_WdError(v26);
    v4 = -1071774909;
    goto LABEL_11;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v10 + 96), v5) )
  {
    v27 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v27 + 24) = v5;
    *(_QWORD *)(v27 + 32) = v12;
    WdLogEvent5_WdError(v27);
    v4 = -1071774919;
    goto LABEL_11;
  }
  v32 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v15 + 440);
  v16 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v12 + 304), v13);
  v18 = v16;
  if ( !v16 )
  {
    v28 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v28 + 24) = v5;
    *(_QWORD *)(v28 + 32) = v12;
    WdLogEvent5_WdError(v28);
    v4 = -1071774972;
    goto LABEL_11;
  }
  v19 = *(_QWORD *)(v16 + 104);
  if ( !v19 )
  {
    v20 = 0LL;
    goto LABEL_21;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
  v20 = *(_QWORD *)(v18 + 104);
  if ( !v20 )
  {
LABEL_21:
    v29 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v29);
  }
  *a3 = v20 & -(__int64)(v20 != -137);
  *a4 = v32;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v30);
  return v4;
}
