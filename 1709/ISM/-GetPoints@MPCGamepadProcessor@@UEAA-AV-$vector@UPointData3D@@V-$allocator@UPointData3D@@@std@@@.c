/*
 * XREFs of ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800394B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18003A08C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCGamepadProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp-79h] BYREF
  int v6; // [rsp+40h] [rbp-71h]
  int v7; // [rsp+44h] [rbp-6Dh]
  int v8; // [rsp+48h] [rbp-69h]
  int v9; // [rsp+4Ch] [rbp-65h]
  __int64 v10; // [rsp+50h] [rbp-61h]
  int v11; // [rsp+58h] [rbp-59h]
  float v12; // [rsp+5Ch] [rbp-55h]
  __int64 v13; // [rsp+60h] [rbp-51h]
  int v14; // [rsp+68h] [rbp-49h]
  int v15; // [rsp+6Ch] [rbp-45h]
  int v16; // [rsp+70h] [rbp-41h]
  int v17; // [rsp+74h] [rbp-3Dh]
  __int64 v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+80h] [rbp-31h]
  __int16 v20; // [rsp+84h] [rbp-2Dh]
  char v21; // [rsp+86h] [rbp-2Bh]
  __int128 v22; // [rsp+88h] [rbp-29h]
  __int128 v23; // [rsp+98h] [rbp-19h]
  __int128 v24; // [rsp+A8h] [rbp-9h]
  __int128 v25; // [rsp+B8h] [rbp+7h]
  __int128 v26; // [rsp+C8h] [rbp+17h]
  __int128 v27; // [rsp+D8h] [rbp+27h]
  __int64 v28; // [rsp+F8h] [rbp+47h]

  v28 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v7 = 1;
  v8 = 4;
  v5 = *(_QWORD *)(a1 + 3920);
  v6 = *(_DWORD *)(a1 + 3928);
  v3 = *(_DWORD *)(a1 + 3416);
  if ( (v3 & 4) != 0 )
  {
    v9 = 1;
  }
  else if ( (v3 & 8) != 0 )
  {
    v9 = 2;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v9 = 4;
  }
  else if ( (v3 & 0x20) != 0 )
  {
    v9 = 8;
  }
  else
  {
    v9 = 16 * (*(_DWORD *)(a1 + 3416) & 1);
  }
  v20 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = FLOAT_1_0;
  v13 = 0LL;
  v14 = 0;
  v21 = 1;
  v15 = *(_DWORD *)(a1 + 3944);
  v16 = *(_DWORD *)(a1 + 3948);
  v17 = *(_DWORD *)(a1 + 3952);
  v18 = 0LL;
  v19 = 0;
  v22 = *(_OWORD *)(a1 + 112);
  v23 = *(_OWORD *)(a1 + 128);
  v24 = *(_OWORD *)(a1 + 144);
  v25 = *(_OWORD *)(a1 + 160);
  v26 = *(_OWORD *)(a1 + 176);
  v27 = *(_OWORD *)(a1 + 192);
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v5);
  return a2;
}
