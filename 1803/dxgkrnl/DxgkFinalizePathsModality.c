/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C00DE980
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B3234 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-19h] BYREF
  __int64 v9; // [rsp+28h] [rbp-11h]
  int v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1h]
  __int64 v12; // [rsp+40h] [rbp+7h]
  __int64 v13; // [rsp+48h] [rbp+Fh]
  __int16 v14; // [rsp+50h] [rbp+17h]
  __int64 v15; // [rsp+58h] [rbp+1Fh]
  __int64 v16; // [rsp+60h] [rbp+27h]
  __int64 v17; // [rsp+68h] [rbp+2Fh]
  __int64 v18; // [rsp+70h] [rbp+37h]
  char v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]
  int v21; // [rsp+80h] [rbp+47h]
  __int64 v22; // [rsp+84h] [rbp+4Bh]

  v8 = 2170;
  v9 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2170);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2170);
  if ( a1 )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v17 = 0LL;
    v18 = a1;
    v19 = 0;
    v20 = 0;
    v21 = 1;
    v22 = 0LL;
    v4 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v10);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v10);
  }
  else
  {
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, v6, v8);
  return v4;
}
