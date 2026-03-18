/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C021A020
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  char VideoStandard; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v16 = 6014;
  v17 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6014);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 6014);
  if ( a3 )
  {
    LOBYTE(a3->VideoStandard) = 0;
    if ( this && a2 )
    {
      if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
        && *((_DWORD *)this + 4) == a2->ActiveSize.cy
        && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
        && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
      {
        v11 = *((_DWORD *)this + 12);
        if ( (((unsigned __int8)v11 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          VideoStandard = a3->VideoStandard;
          if ( (((unsigned __int16)v11 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
            VideoStandard = 1;
          LOBYTE(a3->VideoStandard) = VideoStandard;
        }
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = 0LL;
      WdLogEvent5_WdError(v10);
      v4 = -1071774959;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v16);
  return v4;
}
