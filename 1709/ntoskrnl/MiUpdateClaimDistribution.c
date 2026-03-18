/*
 * XREFs of MiUpdateClaimDistribution @ 0x1400F51D0
 * Callers:
 *     MiComputeAgeDistribution @ 0x1400F506C (MiComputeAgeDistribution.c)
 *     MiOrderTrimList @ 0x14021D9B0 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateClaimDistribution(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  char v4; // cl
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  __int64 result; // rax

  v2 = *a2;
  v4 = 3;
  if ( *(_BYTE *)(a1 + 194) != 2 )
    v4 = 1;
  v5 = v2 + (*(_QWORD *)(a1 + 40) >> v4);
  if ( v5 < v2 )
    *a2 = -1LL;
  else
    *a2 = v5;
  v6 = a2[1];
  v7 = v6 + (*(_QWORD *)(a1 + 48) >> v4);
  if ( v7 < v6 )
    a2[1] = -1LL;
  else
    a2[1] = v7;
  v8 = a2[2];
  v9 = v8 + (*(_QWORD *)(a1 + 56) >> v4);
  if ( v9 < v8 )
    a2[2] = -1LL;
  else
    a2[2] = v9;
  v10 = a2[3];
  v11 = v10 + (*(_QWORD *)(a1 + 64) >> v4);
  if ( v11 < v10 )
    a2[3] = -1LL;
  else
    a2[3] = v11;
  v12 = a2[4];
  v13 = v12 + (*(_QWORD *)(a1 + 72) >> v4);
  if ( v13 < v12 )
    a2[4] = -1LL;
  else
    a2[4] = v13;
  v14 = a2[5];
  v15 = v14 + (*(_QWORD *)(a1 + 80) >> v4);
  if ( v15 < v14 )
    a2[5] = -1LL;
  else
    a2[5] = v15;
  v16 = a2[6];
  v17 = v16 + (*(_QWORD *)(a1 + 88) >> v4);
  if ( v17 < v16 )
    a2[6] = -1LL;
  else
    a2[6] = v17;
  v18 = a2[7];
  result = *(_QWORD *)(a1 + 96) >> v4;
  if ( result + v18 < v18 )
    a2[7] = -1LL;
  else
    a2[7] = result + v18;
  return result;
}
