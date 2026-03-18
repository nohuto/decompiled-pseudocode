/*
 * XREFs of DxgkGetYieldPercentage @ 0x1C01B8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C01B650C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(ULONG64 a1, __int64 a2, __int64 a3)
{
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
  size_t v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const void *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rcx
  struct DXGGLOBAL *v28; // rax
  int v29; // esi
  int v30; // r14d
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h]
  unsigned int v37; // [rsp+30h] [rbp-48h]
  _BYTE v38[16]; // [rsp+38h] [rbp-40h] BYREF
  int v39; // [rsp+48h] [rbp-30h]
  __int64 v40; // [rsp+50h] [rbp-28h] BYREF
  __int64 v41; // [rsp+58h] [rbp-20h]

  v36 = 0LL;
  v35 = 2142;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2142);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2142);
  if ( CheckTokenForResourceManagerAccess(v4) )
  {
    v39 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v14 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v37 = *v14;
    v15 = v37;
    if ( v37 >= 0x10 )
    {
      if ( v37 > 0x10 )
        v15 = 16LL;
      v37 = v15;
      v19 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v19 = (const void *)MmUserProbeAddress;
      memmove(&v40, v19, v15);
      if ( HIDWORD(v40) )
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v23 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v23);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, v35);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v21);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGGLOBAL *)((char *)Global + 408), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
        v28 = DXGGLOBAL::GetGlobal(v27);
        v29 = ((unsigned __int8)v41 ^ (unsigned __int8)*((_DWORD *)v28 + 421)) & 1 ^ v41;
        LODWORD(v41) = v29;
        v30 = *((_DWORD *)v28 + 418);
        HIDWORD(v41) = v30;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
        v31 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v31 = (_DWORD *)MmUserProbeAddress;
        *v31 = v30;
        v32 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v32 = (_DWORD *)MmUserProbeAddress;
        *v32 = v29;
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v38);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, v35);
        return 0LL;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v37);
      *(_QWORD *)(v16 + 24) = 4140LL;
      WdLogEvent5_WdWarning(v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v35);
      return 3221225485LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v35);
    return 3221225506LL;
  }
}
