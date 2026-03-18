/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x1C01AB040
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00EB8BC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct _D3DKMT_GETPATHSMODALITY *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbx
  int TopologyClass; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+48h] [rbp-59h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v17[4]; // [rsp+78h] [rbp-29h] BYREF
  __int16 v18; // [rsp+98h] [rbp-9h]
  __int64 v19; // [rsp+A0h] [rbp-1h]
  __int64 v20; // [rsp+A8h] [rbp+7h]
  __int64 v21; // [rsp+B0h] [rbp+Fh]
  struct _D3DKMT_GETPATHSMODALITY *v22; // [rsp+B8h] [rbp+17h]
  bool v23; // [rsp+C0h] [rbp+1Fh]
  int v24; // [rsp+C4h] [rbp+23h]
  int v25; // [rsp+C8h] [rbp+27h]
  __int64 v26; // [rsp+CCh] [rbp+2Bh]

  v6 = a6;
  if ( a6 )
    *a6 = 0;
  LODWORD(v17[0]) = 0;
  memset(&v17[1], 0, 24);
  v19 = 0LL;
  v23 = a1 == 0LL;
  v20 = 0LL;
  v18 = 0;
  v21 = 0LL;
  v22 = a1;
  v24 = 0;
  v25 = 1;
  v26 = 0LL;
  memset(v16, 0, sizeof(v16));
  v16[3] = a5;
  v16[5] = a5;
  LODWORD(v16[2]) = *a4;
  HIDWORD(v16[0]) = *a2;
  v16[1] = a3;
  v16[4] = a3;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0LL, 0LL, 1LL, 0, 0, (struct _QDC_CONTEXT *)v16);
  if ( TopologyClass >= 0 )
  {
    v14 = (__int64)(v16[5] - v16[3]) >> 6;
    *a2 = (v16[4] - v16[1]) / 72LL;
    *a4 = v14;
    if ( v6 )
    {
      LODWORD(a6) = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)v17, (enum CCD_TOPOLOGY_CLASS *)&a6, v12, v13);
      if ( TopologyClass >= 0 )
        *v6 = (_DWORD)a6;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v17);
  return (unsigned int)TopologyClass;
}
