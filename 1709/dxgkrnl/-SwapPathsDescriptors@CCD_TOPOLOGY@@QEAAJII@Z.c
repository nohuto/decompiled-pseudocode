/*
 * XREFs of ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01F7E08
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01F79D8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01F7AC8 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FAFA0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00DC588 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SwapPathsDescriptors(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int16 v7; // ax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  __int64 v11; // r10
  _OWORD *v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // r9
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
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
  if ( (_DWORD)v5 != (_DWORD)v3 )
  {
    v9 = 2LL;
    v10 = v34;
    v11 = 2LL;
    v12 = (_OWORD *)(v6 + 264 * v5 + 48);
    v13 = v12;
    do
    {
      v14 = v13[1];
      *v10 = *v13;
      v15 = v13[2];
      v10[1] = v14;
      v16 = v13[3];
      v10[2] = v15;
      v17 = v13[4];
      v10[3] = v16;
      v18 = v13[5];
      v10[4] = v17;
      v19 = v13[6];
      v10[5] = v18;
      v20 = v13[7];
      v13 += 8;
      v10[6] = v19;
      v10 += 8;
      *(v10 - 1) = v20;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)v10 = *(_QWORD *)v13;
    v21 = v6 + 48;
    v22 = 2LL;
    v23 = (_OWORD *)(264 * v3 + v21);
    do
    {
      *v12 = *v23;
      v12[1] = v23[1];
      v12[2] = v23[2];
      v12[3] = v23[3];
      v12[4] = v23[4];
      v12[5] = v23[5];
      v12[6] = v23[6];
      v12 += 8;
      v24 = v23[7];
      v23 += 8;
      *(v12 - 1) = v24;
      --v22;
    }
    while ( v22 );
    *(_QWORD *)v12 = *(_QWORD *)v23;
    v25 = (_OWORD *)(*((_QWORD *)this + 8) + 48LL + 264 * v3);
    v26 = v34;
    do
    {
      v27 = v26[1];
      *v25 = *v26;
      v28 = v26[2];
      v25[1] = v27;
      v29 = v26[3];
      v25[2] = v28;
      v30 = v26[4];
      v25[3] = v29;
      v31 = v26[5];
      v25[4] = v30;
      v32 = v26[6];
      v25[5] = v31;
      v33 = v26[7];
      v26 += 8;
      v25[6] = v32;
      v25 += 8;
      *(v25 - 1) = v33;
      --v9;
    }
    while ( v9 );
    *(_QWORD *)v25 = *(_QWORD *)v26;
  }
  return 0LL;
}
