/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C021A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C021ECFC (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  int FirstAvailableTarget; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h]
  int v27; // [rsp+88h] [rbp+20h] BYREF

  v26 = 0LL;
  v5 = (int)a3;
  v6 = a1;
  v7 = a2;
  v25 = 6031;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 6031);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 6031);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v5 )
    {
      v11 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
      v14 = v11;
      if ( v11 )
      {
        v27 = v12;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v11,
                                 (unsigned int)v7,
                                 (unsigned int)v5,
                                 &v27,
                                 0LL,
                                 0LL,
                                 0LL);
        v6 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v6) = 0;
          *a4 = v27;
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
          v21[3] = v14;
          v21[4] = v7;
          v21[5] = v5;
          v21[6] = v6;
        }
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v15 + 24) = v6;
        WdLogEvent5_WdError(v15);
        LODWORD(v6) = -1071774976;
      }
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v10[3] = 0LL;
      v10[4] = a4;
      v10[5] = v6;
      v10[6] = v7;
      WdLogEvent5_WdError(v10);
      LODWORD(v6) = -1071774929;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = v6;
    v9[5] = v7;
    WdLogEvent5_WdError(v9);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v6;
}
