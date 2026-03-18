/*
 * XREFs of cjVtfdDeviceMetrics @ 0x1C02380D8
 * Callers:
 *     vtfdQueryFontData @ 0x1C0238470 (vtfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjVtfdDeviceMetrics(__int64 a1, __int64 a2)
{
  int v3; // eax
  float v4; // xmm2_4
  float v5; // xmm3_4
  int v6; // r10d
  int v7; // edx
  __int64 v8; // rdx
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  int v12; // ecx
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  v3 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 )
    v3 = 8;
  *(_DWORD *)a2 = v3;
  v4 = *(float *)(a1 + 28);
  v5 = *(float *)(a1 + 24);
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 44);
  *(_QWORD *)(a2 + 12) = *(_QWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 28) = -*(_DWORD *)(a1 + 36);
  v6 = *(_DWORD *)(a1 + 120) & 4;
  v7 = ((int)(float)((float)*(__int16 *)(*(_QWORD *)(a1 + 8) + 78LL) * *(float *)(a1 + 40)) + 8) >> 4;
  *(_DWORD *)(a2 + 64) = v7;
  *(_DWORD *)(a2 + 20) = (*(_BYTE *)(a1 + 120) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0x1000) != 0
                       ? v7
                       : 0;
  v8 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 36) = (((int)(float)((float)-*(__int16 *)(v8 + 102) * v4) >> 3) + 1) >> 1;
  v9 = *(__int16 *)(v8 + 106);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 60) = 1;
  *(_DWORD *)(a2 + 52) = 1;
  *(_DWORD *)(a2 + 44) = (((int)(float)((float)-v9 * v4) >> 3) + 1) >> 1;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 60) = 2;
    *(_DWORD *)(a2 + 52) = 2;
  }
  if ( v6 )
  {
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    if ( v4 < 0.0 )
    {
      *(_DWORD *)(a2 + 52) = -*(_DWORD *)(a2 + 52);
      *(_DWORD *)(a2 + 60) = -*(_DWORD *)(a2 + 60);
    }
  }
  else
  {
    v10 = (float)*(int *)(a2 + 52);
    v11 = (((int)(float)(v10 * v4) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 52) = v11;
    *(_DWORD *)(a2 + 60) = v11;
    v12 = (((int)(float)(v10 * v5) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 48) = v12;
    *(_DWORD *)(a2 + 56) = v12;
    *(_DWORD *)(a2 + 32) = (((int)(float)((float)-*(__int16 *)(v8 + 102) * v5) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 40) = (((int)(float)((float)-*(__int16 *)(v8 + 106) * v5) >> 3) + 1) >> 1;
  }
  *(_DWORD *)(a2 + 68) = 0;
  result = 124LL;
  *(_DWORD *)(a2 + 72) = 0;
  return result;
}
