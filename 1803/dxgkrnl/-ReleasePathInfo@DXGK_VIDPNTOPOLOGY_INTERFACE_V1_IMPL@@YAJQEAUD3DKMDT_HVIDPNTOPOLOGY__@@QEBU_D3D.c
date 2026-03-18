/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BB5A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BBC14 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  v19 = 0LL;
  v18 = 7039;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 7039);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
      v11 = this;
    else
      v11 = 0LL;
    if ( v11 )
    {
      v12 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v11, a2);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v17 + 24) = this;
      WdLogEvent5_WdError(v17);
      v12 = -1071774976;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    v12 = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v18);
  return v12;
}
