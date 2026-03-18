/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C021B640
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00BE59C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int8 *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DMMVIDPNTARGETMODE *v15; // rbp
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax
  int IsSupportedByMonitor; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _D3DKMDT_MODE_PRUNING_REASON v25; // [rsp+20h] [rbp-38h] BYREF
  int v26; // [rsp+28h] [rbp-30h] BYREF
  __int64 v27; // [rsp+30h] [rbp-28h]
  unsigned __int8 v28; // [rsp+70h] [rbp+18h] BYREF

  v27 = 0LL;
  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  v26 = 6017;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6017);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6017);
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_8:
    WdLogEvent5_WdError(v9);
    LODWORD(v7) = -1073741811;
    goto LABEL_16;
  }
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = a3;
    goto LABEL_8;
  }
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v7);
  if ( v10 )
  {
    v15 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDPNTARGET>::FindById(v10 + 24, v6);
    if ( v15 )
    {
      v18 = *(_QWORD *)(v16 + 112);
      v25 = D3DKMDT_MPR_UNINITIALIZED;
      v28 = 0;
      LOBYTE(v13) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v18 + 96) + 84LL) - 15) <= 1;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v15, v13, &v28, &v25);
      v7 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor >= 0 )
      {
        LODWORD(v7) = 0;
        *a3 = v28;
        *(_DWORD *)a4 = v25;
      }
      else
      {
        v21 = WdLogNewEntry5_WdDmmEvent(v20);
        *(_QWORD *)(v21 + 24) = v15;
        *(_QWORD *)(v21 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v21);
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v17 + 24) = v6;
      *(_QWORD *)(v17 + 32) = v7;
      WdLogEvent5_WdError(v17);
      LODWORD(v7) = -1071774959;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = v7;
    WdLogEvent5_WdError(v12);
    LODWORD(v7) = -1071774967;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v26);
  return (unsigned int)v7;
}
