/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1C00DD900
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rax
  int v12; // [rsp+28h] [rbp-19h] BYREF
  __int64 v13; // [rsp+30h] [rbp-11h]
  int v14; // [rsp+38h] [rbp-9h] BYREF
  __int64 v15; // [rsp+40h] [rbp-1h]
  __int64 v16; // [rsp+48h] [rbp+7h]
  __int64 v17; // [rsp+50h] [rbp+Fh]
  __int16 v18; // [rsp+58h] [rbp+17h]
  __int64 v19; // [rsp+60h] [rbp+1Fh]
  __int64 v20; // [rsp+68h] [rbp+27h]
  __int64 v21; // [rsp+70h] [rbp+2Fh]
  __int64 v22; // [rsp+78h] [rbp+37h]
  char v23; // [rsp+80h] [rbp+3Fh]
  BOOL v24; // [rsp+84h] [rbp+43h]
  int v25; // [rsp+88h] [rbp+47h]
  _BOOL8 v26; // [rsp+8Ch] [rbp+4Bh]

  v12 = 2168;
  v4 = a1;
  v13 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2168);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2168);
  if ( a2 )
  {
    if ( (v4 & 0xFEFD7FFF) != 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v11 + 24) = 222LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v22 = a2;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v23 = 0;
    v25 = 1;
    v24 = (v4 & 0x8000) != 0;
    v26 = (v4 & 0x1000000) != 0;
    v6 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v14, v4);
    v24 = 0;
    v7 = v6;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v14);
  }
  else
  {
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v12);
  return v7;
}
