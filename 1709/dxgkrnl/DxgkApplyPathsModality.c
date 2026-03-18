/*
 * XREFs of DxgkApplyPathsModality @ 0x1C00F9760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(unsigned int a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v3; // ebx
  struct D3DKMT_GETPATHSMODALITY *v5[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  __int64 v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  char v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  int v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+74h] [rbp-Ch]

  if ( !a2 )
    return 3221225485LL;
  v10 = a2;
  memset(&v5[1], 0, 24);
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v5[0]) = 0;
  v6 = 0;
  v9 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 1;
  v14 = 0LL;
  v3 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v5, a1, a3);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v5);
  return v3;
}
