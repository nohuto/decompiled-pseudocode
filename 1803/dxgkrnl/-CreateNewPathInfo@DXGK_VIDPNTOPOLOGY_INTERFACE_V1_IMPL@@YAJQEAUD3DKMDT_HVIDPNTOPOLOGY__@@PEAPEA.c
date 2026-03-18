/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0220250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021E96C (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  DMMVIDPNTOPOLOGY *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v23; // [rsp+40h] [rbp+8h] BYREF

  v22 = 0LL;
  v4 = (__int64)this;
  v21 = 7040;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 7040);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4) )
    {
      v14 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v12, &v23);
      v4 = v14;
      if ( v14 >= 0 )
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v23;
      }
      else
      {
        if ( v14 != -1073741801 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v16);
        }
        v17 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v17 + 24) = v4;
        WdLogEvent5_WdError(v17);
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = v4;
      WdLogEvent5_WdError(v13);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = v4;
    WdLogEvent5_WdError(v11);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v4;
}
