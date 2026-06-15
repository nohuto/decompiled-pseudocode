/*
 * XREFs of ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18003B8BC
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18003B9CC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180085080 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180085844 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180085B18 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     pow @ 0x180049B90 (pow.c)
 */

void __fastcall CVolumeUnit::SetDBRange(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  double v6; // xmm0_8
  double v7; // xmm9_8
  double v8; // xmm7_8
  double v9; // xmm1_8
  double v10; // xmm6_8

  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 16) = a5;
  *(float *)(a1 + 8) = a3;
  *(float *)(a1 + 12) = a4;
  *(float *)(a1 + 20) = a4;
  v6 = pow(10.0, a3 / 20.0);
  *(double *)(a1 + 48) = v6;
  v7 = v6;
  v8 = pow(10.0, a4 / 20.0);
  *(double *)(a1 + 40) = v8;
  if ( v7 > 1.0 )
    v9 = 2.0 - pow(v7, -0.5714285714285714);
  else
    v9 = pow(v7, 0.5714285714285714);
  *(double *)(a1 + 24) = v9;
  if ( v8 > 1.0 )
    v10 = 2.0 - pow(v8, -0.5714285714285714);
  else
    v10 = pow(v8, 0.5714285714285714);
  *(double *)(a1 + 32) = v10;
}
