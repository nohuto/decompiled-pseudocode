/*
 * XREFs of ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x1C01F6ECC
 * Callers:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C01F7034 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyPathModalityDescriptor(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // rax
  __int64 v7; // r8
  __int128 v8; // xmm1
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1

  v3 = (__int64 *)((char *)a2 + 216);
  v4 = *((_QWORD *)a2 + 27);
  v6 = a3;
  v7 = 2LL;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v6;
    *((_OWORD *)a2 + 1) = *((_OWORD *)v6 + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v6 + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v6 + 3);
    *((_OWORD *)a2 + 4) = *((_OWORD *)v6 + 4);
    *((_OWORD *)a2 + 5) = *((_OWORD *)v6 + 5);
    *((_OWORD *)a2 + 6) = *((_OWORD *)v6 + 6);
    a2 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)a2 + 128);
    v8 = *((_OWORD *)v6 + 7);
    v6 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v6 + 128);
    *((_OWORD *)a2 - 1) = v8;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)a2 = *(_QWORD *)v6;
  if ( *((_QWORD *)a3 + 27) )
  {
    if ( v4 )
    {
      *v3 = v4;
    }
    else
    {
      v9 = operator new(0xF4uLL, 0x63644356u, PagedPool);
      *v3 = (__int64)v9;
      if ( !v9 )
      {
        v11 = WdLogNewEntry5_WdLowResource(v10);
        WdLogEvent5_WdLowResource(v11);
        return 3221225626LL;
      }
    }
    v13 = (_OWORD *)*((_QWORD *)a3 + 27);
    v14 = *v3;
    *(_OWORD *)v14 = *v13;
    *(_OWORD *)(v14 + 16) = v13[1];
    *(_OWORD *)(v14 + 32) = v13[2];
    *(_OWORD *)(v14 + 48) = v13[3];
    *(_OWORD *)(v14 + 64) = v13[4];
    *(_OWORD *)(v14 + 80) = v13[5];
    *(_OWORD *)(v14 + 96) = v13[6];
    v14 += 128LL;
    v15 = v13[7];
    v13 += 8;
    *(_OWORD *)(v14 - 16) = v15;
    *(_OWORD *)v14 = *v13;
    *(_OWORD *)(v14 + 16) = v13[1];
    *(_OWORD *)(v14 + 32) = v13[2];
    *(_OWORD *)(v14 + 48) = v13[3];
    *(_OWORD *)(v14 + 64) = v13[4];
    *(_OWORD *)(v14 + 80) = v13[5];
    *(_OWORD *)(v14 + 96) = v13[6];
    *(_DWORD *)(v14 + 112) = *((_DWORD *)v13 + 28);
  }
  return 0LL;
}
