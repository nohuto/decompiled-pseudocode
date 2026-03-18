/*
 * XREFs of ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0219EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DMMVIDPNTOPOLOGY *v11; // rdi
  __int64 v12; // rax
  __int64 Container; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+40h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-10h]

  v24 = 0LL;
  v6 = (unsigned int)a3;
  v7 = (__int64)this;
  v8 = (unsigned int)a2;
  v23 = 6023;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6023);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6023);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
  v11 = (struct DMMVIDPNTOPOLOGY *)v9;
  if ( v9 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 160);
    v14 = VIDPN_MGR::AddPathToVidPnTopology(
            *(VIDPN_MGR **)(Container + 48),
            v11,
            v8,
            v6,
            a4,
            a5,
            1u,
            D3DKMDT_MCC_ENFORCE);
    v7 = v14;
    if ( v14 >= 0 )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v19[3] = v8;
      v19[4] = v6;
      v19[5] = v11;
      v19[6] = v7;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v7;
    WdLogEvent5_WdError(v12);
    LODWORD(v7) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return (unsigned int)v7;
}
