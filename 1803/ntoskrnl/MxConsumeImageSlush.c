/*
 * XREFs of MxConsumeImageSlush @ 0x140897E90
 * Callers:
 *     MxConsumeLargePageSlush @ 0x140898030 (MxConsumeLargePageSlush.c)
 * Callees:
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x14017021C (MiAddExpansionNonPagedPool.c)
 */

__int64 __fastcall MxConsumeImageSlush(__int128 *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  __int128 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int128 v27; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+30h] [rbp-98h]
  __int128 v29; // [rsp+40h] [rbp-88h]
  __int128 v30; // [rsp+50h] [rbp-78h]
  __int128 v31; // [rsp+60h] [rbp-68h]
  __int128 v32; // [rsp+70h] [rbp-58h]
  __int128 v33; // [rsp+80h] [rbp-48h]
  __int128 v34; // [rsp+90h] [rbp-38h]
  __int128 v35; // [rsp+A0h] [rbp-28h]
  __int128 v36; // [rsp+B0h] [rbp-18h]

  v1 = (unsigned int)dword_14044B1C8;
  v2 = 0;
  v3 = a1;
  if ( a1 == (__int128 *)qword_1408F25D8 )
  {
    v4 = *((_QWORD *)a1 + 6);
    v5 = *((unsigned int *)a1 + 16);
    v6 = *(_QWORD *)(MxHalDataTableEntry + 48);
    if ( (unsigned int)dword_14044B1C8 + v4 + v5 == v6 )
    {
      v7 = a1[1];
      v27 = *a1;
      v8 = a1[2];
      v28 = v7;
      v9 = a1[3];
      v29 = v8;
      v10 = a1[4];
      v30 = v9;
      v11 = a1[5];
      v31 = v10;
      v12 = a1[6];
      v32 = v11;
      v13 = a1[8];
      v33 = v12;
      v34 = a1[7];
      v14 = a1[9];
      v35 = v13;
      v36 = v14;
      v15 = dword_14044B1C8 + *(_DWORD *)(MxHalDataTableEntry + 64);
    }
    else
    {
      if ( (unsigned int)dword_14044B1C8 + v6 + *(unsigned int *)(MxHalDataTableEntry + 64) != v4 )
        goto LABEL_7;
      v16 = *(_OWORD *)(MxHalDataTableEntry + 16);
      v27 = *(_OWORD *)MxHalDataTableEntry;
      v17 = *(_OWORD *)(MxHalDataTableEntry + 32);
      v28 = v16;
      v18 = *(_OWORD *)(MxHalDataTableEntry + 48);
      v29 = v17;
      v19 = *(_OWORD *)(MxHalDataTableEntry + 64);
      v30 = v18;
      v20 = *(_OWORD *)(MxHalDataTableEntry + 80);
      v31 = v19;
      v21 = *(_OWORD *)(MxHalDataTableEntry + 96);
      v32 = v20;
      v22 = *(_OWORD *)(MxHalDataTableEntry + 128);
      v33 = v21;
      v34 = *(_OWORD *)(MxHalDataTableEntry + 112);
      v23 = *(_OWORD *)(MxHalDataTableEntry + 144);
      v35 = v22;
      v36 = v23;
      v15 = v5 + dword_14044B1C8;
    }
    LODWORD(v31) = v15 + v31;
    v3 = &v27;
    v2 = 1;
  }
LABEL_7:
  v24 = MiVaToPfn(*((_QWORD *)v3 + 6));
  if ( (v24 & 0x1FF) != 0 )
    MiAddExpansionNonPagedPool(v24 & 0xFFFFFFFFFFFFFE00uLL, v24 & 0x1FF);
  v25 = MiVaToPfn(*((_QWORD *)v3 + 6) + *((unsigned int *)v3 + 16) + v1 - 1);
  if ( (v25 & 0x1FF) != 0x1FF )
    MiAddExpansionNonPagedPool(v25 + 1, 511 - (v25 & 0x1FF));
  return v2;
}
