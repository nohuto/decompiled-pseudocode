/*
 * XREFs of ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180006150
 * Callers:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180015FA8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheOpportunityCallback(
        union wil_details_FeaturePropertyCache *a1,
        _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v5; // edx
  int v6; // r8d
  unsigned int v7; // r9d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 result; // rax
  int v11; // ecx

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
  **(_DWORD **)a2 = ((*(_DWORD *)a1 >> 3) & 1) == 0;
  *(_DWORD *)a1 |= 8u;
  v5 = *(_DWORD *)a1;
  v6 = a2[2];
  if ( *(_DWORD *)a1 >> 31 == (v6 == 5) )
  {
    v7 = *(_DWORD *)a1;
  }
  else
  {
    if ( (v5 & 0x7F000000) != 0 )
    {
      v11 = 5;
      if ( v6 != 1 )
        v11 = 1;
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v11;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
      *(_DWORD *)a1 &= 0x80FFFFFF;
      v5 = *(_DWORD *)a1;
      v6 = a2[2];
    }
    if ( v6 == 5 )
      v2 = 0x80000000;
    v7 = v5 & 0x7FFFFFFF | v2;
    *(_DWORD *)a1 = v7;
  }
  v8 = HIBYTE(v7) & 0x7F;
  v9 = *((_QWORD *)a2 + 2) + v8;
  if ( v9 > 0x7F || v9 < v8 )
  {
    v9 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
    v7 = *(_DWORD *)a1;
  }
  result = 1LL;
  *(_DWORD *)a1 = v7 ^ (v7 ^ ((_DWORD)v9 << 24)) & 0x7F000000;
  return result;
}
