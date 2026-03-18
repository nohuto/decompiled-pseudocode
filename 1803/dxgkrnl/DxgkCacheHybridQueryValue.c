/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C01B7FA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int *v12; // rax
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h]

  v3 = (int *)a1;
  v18 = 0LL;
  v17 = 2091;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2091);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2091);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (int *)MmUserProbeAddress;
    v13 = *v12;
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)Current + 14));
    v14 = *((_DWORD *)Current + 104);
    if ( !v14 )
    {
      *((_DWORD *)Current + 104) = v13;
      v14 = v13;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)Current + 14));
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (int *)MmUserProbeAddress;
    *v3 = v14;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v17);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v17);
    return 3221225485LL;
  }
}
