/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C01A22B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int updated; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  BOOL v17; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v3 = a1;
  v14 = 2089;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2089);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2089);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v16 = 0;
    v10 = (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 13) + 224LL))(&v16);
    if ( !v16 || v10 )
    {
      updated = -1073741637;
    }
    else
    {
      v17 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v17, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    updated = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  return updated;
}
