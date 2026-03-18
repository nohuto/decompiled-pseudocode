/*
 * XREFs of vCheckForSingularXform @ 0x1C0232CF0
 * Callers:
 *     bNewXform @ 0x1C02320A8 (bNewXform.c)
 * Callees:
 *     iHipot @ 0x1C0232834 (iHipot.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall vCheckForSingularXform(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v3; // r15d
  unsigned int v4; // eax
  __int64 v5; // r8
  int fixed; // eax
  int v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // r14d
  signed int v11; // edi
  signed int v12; // esi
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r10d
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r10d
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // r10d
  __int64 v27; // r8
  int v28; // r11d
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(v1 + 308) << 16;
  v4 = iHipot(*(_DWORD *)(a1 + 96), *(_DWORD *)(a1 + 92));
  fixed = FixMul(v4, v3, v5);
  if ( (int)(((fixed >> 15) + 1) & 0xFFFFFFFE) < 4 )
  {
    *(_DWORD *)(a1 + 116) |= 0x20u;
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 96);
      v8 = v7;
      if ( v7 < 0 )
        v8 = -v7;
      v9 = *(_DWORD *)(a1 + 80);
      v10 = v9;
      if ( v9 < 0 )
        v10 = -v9;
      v11 = (v7 >> 31) & 0xFFFFFFFE;
      v12 = (v9 >> 31) & 0xFFFFFFFE;
      v13 = CompDiv(*(unsigned __int16 *)(v1 + 308), 0x20000LL);
      *(_DWORD *)(a1 + 96) = v13;
      if ( v10 != v8 )
        v13 = CompDiv(v8, v10 * (__int64)v13);
      *(_DWORD *)(a1 + 80) = v13;
      if ( v11 < -1 )
        *(_DWORD *)(a1 + 96) = -*(_DWORD *)(a1 + 96);
      if ( v12 < -1 )
        *(_DWORD *)(a1 + 80) = -*(_DWORD *)(a1 + 80);
    }
    else
    {
      v14 = CompDiv((unsigned int)fixed, 0x200000000LL);
      v16 = FixMul(*(unsigned int *)(a1 + 80), v14, v15);
      v17 = *(unsigned int *)(a1 + 84);
      *(_DWORD *)(a1 + 80) = v16;
      v20 = FixMul(v17, v18, v19);
      v21 = *(unsigned int *)(a1 + 92);
      *(_DWORD *)(a1 + 84) = v20;
      v24 = FixMul(v21, v22, v23);
      v25 = *(unsigned int *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v24;
      *(_DWORD *)(a1 + 96) = FixMul(v25, v26, v27);
      *(float *)(a1 + 56) = (float)v28 * 0.000015258789;
      *(float *)(a1 + 68) = (float)*(int *)(a1 + 96) * 0.000015258789;
      *(float *)(a1 + 60) = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a1 + 64) = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
    }
  }
  v29 = iHipot(*(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84));
  result = FixMul(v29, v3, v30);
  if ( (int)result <= 0x8000 )
    *(_DWORD *)(a1 + 116) |= 8u;
  return result;
}
