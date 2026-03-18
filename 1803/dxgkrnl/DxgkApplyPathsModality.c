/*
 * XREFs of DxgkApplyPathsModality @ 0x1C00DE890
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v3; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+28h] [rbp-19h] BYREF
  __int64 v12; // [rsp+30h] [rbp-11h]
  int v13; // [rsp+38h] [rbp-9h] BYREF
  __int64 v14; // [rsp+40h] [rbp-1h]
  __int64 v15; // [rsp+48h] [rbp+7h]
  __int64 v16; // [rsp+50h] [rbp+Fh]
  __int16 v17; // [rsp+58h] [rbp+17h]
  __int64 v18; // [rsp+60h] [rbp+1Fh]
  __int64 v19; // [rsp+68h] [rbp+27h]
  __int64 v20; // [rsp+70h] [rbp+2Fh]
  __int64 v21; // [rsp+78h] [rbp+37h]
  char v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]
  int v24; // [rsp+88h] [rbp+47h]
  int v25; // [rsp+8Ch] [rbp+4Bh]
  int v26; // [rsp+90h] [rbp+4Fh]

  v3 = 0;
  v11 = 2169;
  v12 = 0LL;
  v6 = a1;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2169);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2169);
  if ( a2 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v20 = 0LL;
    v22 = 0;
    v21 = a2;
    v23 = 0;
    v26 = 0;
    if ( (v6 & 0x1000000) != 0 )
      v3 = 1;
    v25 = v3;
    v24 = 1;
    v7 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v13, v6, a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v13);
  }
  else
  {
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return v7;
}
