/*
 * XREFs of ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01DECB8
 * Callers:
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE884 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01DE980 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E0CB0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00EE258 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SwapPathsDescriptors(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  _OWORD *v9; // rcx
  __int64 v10; // r10
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // r9
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  _BYTE v34[272]; // [rsp+20h] [rbp-118h] BYREF

  v3 = a3;
  v5 = a2;
  CCD_TOPOLOGY::ClearModalitySetId(this);
  v6 = *((_QWORD *)this + 8);
  v7 = 0;
  if ( v6 )
    v7 = *(_WORD *)(v6 + 20);
  if ( (unsigned int)v5 >= v7 || (unsigned int)v3 >= v7 )
    return 3221225485LL;
  v8 = 2LL;
  v9 = v34;
  v10 = 2LL;
  v11 = (_OWORD *)(v6 + 264 * v5 + 48);
  v12 = v11;
  do
  {
    v13 = v12[1];
    *v9 = *v12;
    v14 = v12[2];
    v9[1] = v13;
    v15 = v12[3];
    v9[2] = v14;
    v16 = v12[4];
    v9[3] = v15;
    v17 = v12[5];
    v9[4] = v16;
    v18 = v12[6];
    v9[5] = v17;
    v19 = v12[7];
    v12 += 8;
    v9[6] = v18;
    v9 += 8;
    *(v9 - 1) = v19;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v9 = *(_QWORD *)v12;
  v20 = v6 + 48;
  v21 = 2LL;
  v22 = (_OWORD *)(264 * v3 + v20);
  do
  {
    *v11 = *v22;
    v11[1] = v22[1];
    v11[2] = v22[2];
    v11[3] = v22[3];
    v11[4] = v22[4];
    v11[5] = v22[5];
    v11[6] = v22[6];
    v11 += 8;
    v23 = v22[7];
    v22 += 8;
    *(v11 - 1) = v23;
    --v21;
  }
  while ( v21 );
  *(_QWORD *)v11 = *(_QWORD *)v22;
  v24 = (_OWORD *)(*((_QWORD *)this + 8) + 48LL + 264 * v3);
  v25 = v34;
  do
  {
    v26 = v25[1];
    *v24 = *v25;
    v27 = v25[2];
    v24[1] = v26;
    v28 = v25[3];
    v24[2] = v27;
    v29 = v25[4];
    v24[3] = v28;
    v30 = v25[5];
    v24[4] = v29;
    v31 = v25[6];
    v24[5] = v30;
    v32 = v25[7];
    v25 += 8;
    v24[6] = v31;
    v24 += 8;
    *(v24 - 1) = v32;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v24 = *(_QWORD *)v25;
  return 0LL;
}
