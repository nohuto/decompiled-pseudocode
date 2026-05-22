/*
 * XREFs of ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180095A40
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180040884 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCGamepadProcessor::GetPoints(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+38h] [rbp-79h] BYREF
  int v5; // [rsp+40h] [rbp-71h]
  int v6; // [rsp+44h] [rbp-6Dh]
  int v7; // [rsp+48h] [rbp-69h]
  int v8; // [rsp+4Ch] [rbp-65h]
  __int64 v9; // [rsp+50h] [rbp-61h]
  int v10; // [rsp+58h] [rbp-59h]
  float v11; // [rsp+5Ch] [rbp-55h]
  __int64 v12; // [rsp+60h] [rbp-51h]
  int v13; // [rsp+68h] [rbp-49h]
  __int128 v14; // [rsp+6Ch] [rbp-45h]
  __int64 v15; // [rsp+7Ch] [rbp-35h]
  __int16 v16; // [rsp+84h] [rbp-2Dh]
  char v17; // [rsp+86h] [rbp-2Bh]
  __int128 v18; // [rsp+88h] [rbp-29h]
  __int128 v19; // [rsp+98h] [rbp-19h]
  __int128 v20; // [rsp+A8h] [rbp-9h]
  __int128 v21; // [rsp+B8h] [rbp+7h]
  __int128 v22; // [rsp+C8h] [rbp+17h]
  __int128 v23; // [rsp+D8h] [rbp+27h]
  __int64 v24; // [rsp+F8h] [rbp+47h]

  v24 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6 = 1;
  v7 = 4;
  v4 = *(_QWORD *)(a1 + 4508);
  v5 = *(_DWORD *)(a1 + 4516);
  v8 = (16 * (*(_DWORD *)(a1 + 4032) & 1)) | (*(_DWORD *)(a1 + 4032) >> 2) & 0xF;
  v16 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = FLOAT_1_0;
  v12 = 0LL;
  v13 = 0;
  v17 = 1;
  v14 = *(_OWORD *)(a1 + 4536);
  v15 = 0LL;
  v18 = *(_OWORD *)(a1 + 104);
  v19 = *(_OWORD *)(a1 + 120);
  v20 = *(_OWORD *)(a1 + 136);
  v21 = *(_OWORD *)(a1 + 152);
  v22 = *(_OWORD *)(a1 + 168);
  v23 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v4);
  return a2;
}
