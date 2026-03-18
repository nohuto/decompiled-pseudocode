/*
 * XREFs of ?ReleaseTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@QEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C021BFD0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0221F30 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *const a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  DMMVIDEOPRESENTTARGETSET *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = 0LL;
  v13 = 6047;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6047);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 6047);
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 26) == 1833172994 )
      v8 = this;
    else
      v8 = 0LL;
    if ( v8 )
    {
      v7 = DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v8, a2);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v9 + 24) = this;
      WdLogEvent5_WdError(v9);
      v7 = -1071774954;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    v7 = -1071774971;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v13);
  return v7;
}
