/*
 * XREFs of ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18004C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18003A08C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCMouseProcessor::GetPoints(__int64 a1, _QWORD *a2)
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
  int v14; // [rsp+6Ch] [rbp-45h]
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  __int64 v17; // [rsp+78h] [rbp-39h]
  int v18; // [rsp+80h] [rbp-31h]
  __int16 v19; // [rsp+84h] [rbp-2Dh]
  char v20; // [rsp+86h] [rbp-2Bh]
  __int128 v21; // [rsp+88h] [rbp-29h]
  __int128 v22; // [rsp+98h] [rbp-19h]
  __int128 v23; // [rsp+A8h] [rbp-9h]
  __int128 v24; // [rsp+B8h] [rbp+7h]
  __int128 v25; // [rsp+C8h] [rbp+17h]
  __int128 v26; // [rsp+D8h] [rbp+27h]
  __int64 v27; // [rsp+F8h] [rbp+47h]

  v27 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6 = 2;
  v7 = 3;
  v4 = *(_QWORD *)(a1 + 672);
  v5 = *(_DWORD *)(a1 + 680);
  v8 = (*(_DWORD *)(a1 + 656) >> 4) & 7;
  v19 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = FLOAT_1_0;
  v12 = 0LL;
  v13 = 0;
  v20 = 1;
  v14 = *(_DWORD *)(a1 + 684);
  v15 = *(_DWORD *)(a1 + 688);
  v16 = *(_DWORD *)(a1 + 692);
  v17 = 0LL;
  v18 = 0;
  v21 = *(_OWORD *)(a1 + 112);
  v22 = *(_OWORD *)(a1 + 128);
  v23 = *(_OWORD *)(a1 + 144);
  v24 = *(_OWORD *)(a1 + 160);
  v25 = *(_OWORD *)(a1 + 176);
  v26 = *(_OWORD *)(a1 + 192);
  std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v4);
  return a2;
}
