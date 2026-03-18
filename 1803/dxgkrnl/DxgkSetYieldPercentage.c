/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C01BA0E0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C01B6394 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C01B650C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+28h] [rbp-30h]
  unsigned int v30; // [rsp+30h] [rbp-28h]
  __int64 v31; // [rsp+38h] [rbp-20h] BYREF
  __int64 v32; // [rsp+40h] [rbp-18h]

  v3 = (unsigned int *)a1;
  v29 = 0LL;
  v28 = 2139;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2139);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2139);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v28);
    return 3221225506LL;
  }
  v31 = 0LL;
  v32 = 0LL;
  v14 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v30 = *v14;
  v15 = v30;
  if ( v30 < 0x10 )
  {
    v16 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v30, v7);
    *(_QWORD *)(v16 + 24) = 3723LL;
    WdLogEvent5_WdWarning(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v28);
    return 3221225485LL;
  }
  if ( v30 > 0x10 )
    v15 = 16;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v31, v3, v15);
  v22 = HIDWORD(v32);
  if ( (unsigned int)(HIDWORD(v32) - 1) > 0x62 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v22;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
  }
  else
  {
    if ( (v32 & 0xFFFFFFFE) == 0 && !HIDWORD(v31) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0LL, (__int64)&v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v28);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v28);
  return 3221225485LL;
}
