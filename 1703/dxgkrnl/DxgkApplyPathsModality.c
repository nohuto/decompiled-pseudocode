/*
 * XREFs of DxgkApplyPathsModality @ 0x1C00A60E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(unsigned int a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h]
  __int64 v7; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+38h] [rbp-48h]
  __int16 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  char v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+74h] [rbp-Ch]

  if ( !a2 )
    return 3221225485LL;
  v13 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v5 = 0;
  v8 = 0LL;
  v9 = 0;
  v12 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v17 = 0LL;
  v3 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v5, a1, a3);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v5);
  return v3;
}
