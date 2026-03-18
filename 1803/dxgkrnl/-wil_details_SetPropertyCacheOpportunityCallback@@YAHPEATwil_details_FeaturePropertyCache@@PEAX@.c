/*
 * XREFs of ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1C0027520
 * Callers:
 *     <none>
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
  int v7; // ecx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 result; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
  **(_DWORD **)a2 = ((*(_DWORD *)a1 >> 3) & 1) == 0;
  *(_DWORD *)a1 |= 8u;
  v5 = *(_DWORD *)a1;
  v6 = a2[2];
  if ( *(_DWORD *)a1 >> 31 == (v6 == 5) )
  {
    v8 = *(_DWORD *)a1;
  }
  else
  {
    if ( (v5 & 0x7F000000) != 0 )
    {
      v7 = 5;
      if ( v6 != 1 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
      *(_DWORD *)a1 &= 0x80FFFFFF;
      v5 = *(_DWORD *)a1;
      v6 = a2[2];
    }
    if ( v6 == 5 )
      v2 = 0x80000000;
    v8 = v5 & 0x7FFFFFFF | v2;
    *(_DWORD *)a1 = v8;
  }
  v9 = HIBYTE(v8) & 0x7F;
  v10 = *((_QWORD *)a2 + 2) + v9;
  if ( v10 > 0x7F || v10 < v9 )
  {
    v10 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
    v8 = *(_DWORD *)a1;
  }
  result = 1LL;
  *(_DWORD *)a1 = v8 ^ (v8 ^ ((_DWORD)v10 << 24)) & 0x7F000000;
  return result;
}
