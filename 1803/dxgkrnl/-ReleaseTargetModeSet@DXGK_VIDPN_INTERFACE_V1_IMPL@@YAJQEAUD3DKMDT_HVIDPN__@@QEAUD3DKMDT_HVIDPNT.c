/*
 * XREFs of ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00BE130
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00052E8 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODESET *v15; // rsi
  DMMVIDPNTARGET *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbp
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-18h] BYREF
  __int64 v31; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v31 = 0LL;
  v30 = 7049;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7049);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7049);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v12 )
  {
    v13 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
    v15 = (struct DMMVIDPNTARGETMODESET *)v13;
    if ( v13 )
    {
      v16 = *(DMMVIDPNTARGET **)(v13 + 112);
      if ( !v16 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v24);
      }
      v17 = *((_QWORD *)v16 + 5);
      if ( !v17 )
      {
        v25 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v25);
        v17 = *((_QWORD *)v16 + 5);
      }
      if ( ContainedBy<DMMVIDPN>::GetContainer(v17 + 64) == v12 )
      {
        DMMVIDPNTARGET::ReleaseModeSet(v16, v15);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v18);
        v27 = *((_QWORD *)v16 + 5);
        v28 = (_QWORD *)v26;
        if ( !v27 )
        {
          v29 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v29);
          v27 = *((_QWORD *)v16 + 5);
        }
        v28[3] = ContainedBy<DMMVIDPN>::GetContainer(v27 + 64);
        v28[4] = v15;
        v28[5] = v12;
        WdLogEvent5_WdError(v28);
        v3 = -1071774928;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v23 + 24) = a2;
      WdLogEvent5_WdError(v23);
      v3 = -1071774967;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    v3 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v30);
  return v3;
}
