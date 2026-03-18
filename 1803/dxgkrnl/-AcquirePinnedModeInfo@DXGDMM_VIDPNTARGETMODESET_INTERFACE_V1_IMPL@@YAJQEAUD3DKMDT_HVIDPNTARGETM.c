/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00C6B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BDA54 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  struct DMMVIDPNTARGETMODE *(__fastcall *v28)(DMMVIDPNTARGETMODESET *); // [rsp+30h] [rbp-10h] BYREF
  int v29; // [rsp+38h] [rbp-8h]
  __int64 v30; // [rsp+58h] [rbp+18h] BYREF

  v27 = 0LL;
  v26 = 6005;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6005);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v29 = 0;
      v30 = 0LL;
      v28 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v8 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
             v7,
             (__int64)&v28,
             &v30);
      v13 = v8;
      if ( v8 == -1071774902 )
      {
        v20 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        v22 = v30 == 0;
        *(_QWORD *)(v20 + 24) = v7;
        if ( !v22 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v23);
        }
        v13 = 1075708679;
      }
      else if ( v8 < 0 )
      {
        v24 = WdLogNewEntry5_WdDmmEvent(v10);
        *(_QWORD *)(v24 + 24) = v7;
        WdLogEvent5_WdDmmEvent(v24);
      }
      else
      {
        v14 = v30;
        if ( !v30 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v25);
        }
        *(_QWORD *)a2 = v14;
        v13 = 0;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdError(v19);
      v13 = -1071774967;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = this;
    WdLogEvent5_WdError(v18);
    v13 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v26);
  return v13;
}
