/*
 * XREFs of ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00D2460
 * Callers:
 *     DxgkCloseAdapterInternal @ 0x1C00D243C (DxgkCloseAdapterInternal.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCloseAdapter(const struct _D3DKMT_CLOSEADAPTER *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_CLOSEADAPTER *v4; // rbx
  unsigned int hAdapter; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v4 = a1;
  v14 = 0LL;
  v13 = 2002;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2002);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2002);
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_CLOSEADAPTER *)MmUserProbeAddress;
    hAdapter = v4->hAdapter;
  }
  else
  {
    hAdapter = v4->hAdapter;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = DXGADAPTER::DestroyHandle(Current, hAdapter);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    v10 = qword_1C0079010;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7);
    v8 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v9, v13);
  return v8;
}
