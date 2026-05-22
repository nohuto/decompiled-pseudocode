/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18003E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180040884 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCSixDofProcessor::GetPoints(char *a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp-79h] BYREF
  int v6; // [rsp+40h] [rbp-71h]
  int v7; // [rsp+44h] [rbp-6Dh]
  int v8; // [rsp+48h] [rbp-69h]
  unsigned int v9; // [rsp+4Ch] [rbp-65h]
  __int64 v10; // [rsp+50h] [rbp-61h]
  int v11; // [rsp+58h] [rbp-59h]
  int v12; // [rsp+5Ch] [rbp-55h]
  __int64 v13; // [rsp+60h] [rbp-51h]
  int v14; // [rsp+68h] [rbp-49h]
  int v15; // [rsp+6Ch] [rbp-45h]
  int v16; // [rsp+70h] [rbp-41h]
  int v17; // [rsp+74h] [rbp-3Dh]
  int v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+7Ch] [rbp-35h]
  int v20; // [rsp+80h] [rbp-31h]
  char v21; // [rsp+84h] [rbp-2Dh]
  char v22; // [rsp+85h] [rbp-2Ch]
  char v23; // [rsp+86h] [rbp-2Bh]
  __int128 v24; // [rsp+88h] [rbp-29h]
  __int128 v25; // [rsp+98h] [rbp-19h]
  __int128 v26; // [rsp+A8h] [rbp-9h]
  __int128 v27; // [rsp+B8h] [rbp+7h]
  __int128 v28; // [rsp+C8h] [rbp+17h]
  __int128 v29; // [rsp+D8h] [rbp+27h]
  __int64 v30; // [rsp+F8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v30 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v7 = *((_DWORD *)a1 + 668);
  v8 = 5;
  v5 = *((_QWORD *)a1 + 347);
  v6 = *((_DWORD *)a1 + 696);
  if ( a1[3217] )
  {
    if ( (a1[2676] & 1) == 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x40C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        a1);
      __debugbreak();
    }
    v9 = 32;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 669) & 0x54 | (4 * (*((_DWORD *)a1 + 669) & 2 | (8 * (*((_DWORD *)a1 + 669) & 1)))) | ((*((_DWORD *)a1 + 669) & 8 | (*((_DWORD *)a1 + 669) >> 1) & 0x10u) >> 3);
  }
  v21 = 1;
  v10 = *(_QWORD *)(a1 + 2764);
  v11 = *((_DWORD *)a1 + 693);
  v12 = 0;
  v23 = 1;
  v15 = *((_DWORD *)a1 + 682);
  v16 = *((_DWORD *)a1 + 683);
  v17 = 0;
  v18 = *((_DWORD *)a1 + 678);
  v19 = *((_DWORD *)a1 + 679);
  v20 = 0;
  if ( a1[3208] )
  {
    v22 = 1;
    v13 = *((_QWORD *)a1 + 344);
    v3 = *((_DWORD *)a1 + 690);
  }
  else
  {
    v22 = 0;
    v3 = 0;
    v13 = 0LL;
  }
  v14 = v3;
  v24 = *(_OWORD *)(a1 + 104);
  v25 = *(_OWORD *)(a1 + 120);
  v26 = *(_OWORD *)(a1 + 136);
  v27 = *(_OWORD *)(a1 + 152);
  v28 = *(_OWORD *)(a1 + 168);
  v29 = *(_OWORD *)(a1 + 184);
  std::vector<PointData3D>::emplace_back<PointData3D const &>(a2, &v5);
  return a2;
}
