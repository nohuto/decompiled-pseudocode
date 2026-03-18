/*
 * XREFs of DxgkDestroyAllocation @ 0x1C009C1E0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r10
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rax
  int v12; // [rsp+40h] [rbp-98h] BYREF
  __int64 v13; // [rsp+48h] [rbp-90h]
  unsigned int *v14[2]; // [rsp+50h] [rbp-88h]
  unsigned int v15[4]; // [rsp+60h] [rbp-78h]
  _QWORD v16[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 51;
  LOBYTE(v16[6]) = -1;
  v13 = 0LL;
  v12 = 2006;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2006);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2006);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v14 = *(_OWORD *)a1;
    *(_QWORD *)v15 = *(_QWORD *)(a1 + 16);
    v6 = DxgkDestroyAllocationHelper(
           Current,
           (unsigned int)v14[0],
           HIDWORD(v14[0]),
           v14[1],
           v15[0],
           0,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16,
           1);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    v8 = qword_1C0079010;
    v9 = (qword_1C0079010 & 2) == 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v4);
    v6 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    v9 = (qword_1C0079010 & 2) == 0;
  }
  if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v7, v12);
  return v6;
}
