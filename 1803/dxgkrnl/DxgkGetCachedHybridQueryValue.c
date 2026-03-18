/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C01B81A0
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

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v3 = (_DWORD *)a1;
  v17 = 0LL;
  v16 = 2090;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2090);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2090);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v8 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)Current + 14));
    v13 = *((_DWORD *)v8 + 104);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v8 + 14));
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v13;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v16);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v16);
    return 3221225485LL;
  }
}
