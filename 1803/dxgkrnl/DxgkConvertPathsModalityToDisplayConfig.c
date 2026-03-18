/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x1C01C7220
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00AEFD8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B40E8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v8; // eax
  int TopologyClass; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-41h]
  __int64 v15; // [rsp+38h] [rbp-39h]
  int v16; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h]
  int v18; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+60h] [rbp-11h]
  __int64 v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  __int16 v22; // [rsp+78h] [rbp+7h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  struct D3DKMT_GETPATHSMODALITY *v26; // [rsp+98h] [rbp+27h]
  bool v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]
  int v29; // [rsp+A8h] [rbp+37h]
  __int64 v30; // [rsp+ACh] [rbp+3Bh]
  int v31; // [rsp+D8h] [rbp+67h] BYREF

  v16 = 2177;
  v17 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2177);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2177);
  if ( a4 )
    *a4 = 0;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v27 = a1 == 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v25 = 0LL;
  v26 = a1;
  v13 = 0LL;
  v8 = *a2;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v14 = a3;
  v15 = a3;
  HIDWORD(v13) = v8;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0LL, 0LL, (struct _QDC_CONTEXT *)&v13);
  if ( TopologyClass >= 0 )
  {
    *a2 = (v15 - v14) / 200 + v15 - v14;
    if ( a4 )
    {
      v31 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)&v18, (enum CCD_TOPOLOGY_CLASS *)&v31);
      if ( TopologyClass >= 0 )
        *a4 = v31;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v16);
  return (unsigned int)TopologyClass;
}
