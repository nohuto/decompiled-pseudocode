/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x1C01C4BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00B626C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DBD7C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v6; // eax
  int TopologyClass; // edi
  __int64 v9; // [rsp+20h] [rbp-39h] BYREF
  __int64 v10; // [rsp+28h] [rbp-31h]
  __int64 v11; // [rsp+30h] [rbp-29h]
  struct D3DKMT_GETPATHSMODALITY *v12[4]; // [rsp+40h] [rbp-19h] BYREF
  __int16 v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int64 v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  struct D3DKMT_GETPATHSMODALITY *v17; // [rsp+80h] [rbp+27h]
  bool v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  int v20; // [rsp+90h] [rbp+37h]
  __int64 v21; // [rsp+94h] [rbp+3Bh]
  int v22; // [rsp+C0h] [rbp+67h] BYREF

  if ( a4 )
    *a4 = 0;
  LODWORD(v12[0]) = 0;
  memset(&v12[1], 0, 24);
  v14 = 0LL;
  v18 = a1 == 0LL;
  v15 = 0LL;
  v9 = 0LL;
  v6 = *a2;
  v13 = 0;
  v16 = 0LL;
  v17 = a1;
  v10 = a3;
  v11 = a3;
  v19 = 0;
  v20 = 1;
  v21 = 0LL;
  HIDWORD(v9) = v6;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0LL, 0LL, (struct _QDC_CONTEXT *)&v9);
  if ( TopologyClass >= 0 )
  {
    *a2 = ((int)v11 - (int)v10) / 192;
    if ( a4 )
    {
      v22 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)v12, (enum CCD_TOPOLOGY_CLASS *)&v22);
      if ( TopologyClass >= 0 )
        *a4 = v22;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v12);
  return (unsigned int)TopologyClass;
}
