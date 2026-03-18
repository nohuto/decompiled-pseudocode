/*
 * XREFs of DxgkCheckExclusiveOwnership @ 0x1C010C100
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C010C164 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DxgkCheckExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int8 v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v9 = 2047;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2047);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2047);
  Global = DXGGLOBAL::GetGlobal(v3);
  v5 = DXGGLOBAL::CheckExclusiveOwnership(Global);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return v5;
}
