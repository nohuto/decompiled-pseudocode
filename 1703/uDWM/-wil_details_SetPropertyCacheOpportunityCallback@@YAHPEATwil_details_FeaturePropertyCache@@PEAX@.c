/*
 * XREFs of ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180081700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheOpportunityCallback(
        union wil_details_FeaturePropertyCache *a1,
        _DWORD *a2)
{
  _DWORD *v2; // rax
  int v4; // edx
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = *(_DWORD **)a2;
  v4 = 0;
  v2[1] = 0;
  **(_DWORD **)a2 = ((*(_DWORD *)a1 >> 3) & 1) == 0;
  *(_DWORD *)a1 |= 8u;
  if ( *(_DWORD *)a1 >= 0x80000000 != (a2[2] == 5) )
  {
    if ( (*(_DWORD *)a1 & 0x7F000000) != 0 )
    {
      v6 = 5;
      if ( a2[2] != 1 )
        v6 = 1;
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v6;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
      *(_DWORD *)a1 &= 0x80FFFFFF;
    }
    LOBYTE(v4) = a2[2] == 5;
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0x7FFFFFFF | (v4 << 31);
  }
  v7 = HIBYTE(*(_DWORD *)a1) & 0x7F;
  v8 = *((_QWORD *)a2 + 2) + v7;
  if ( v8 > 0x7F || v8 < v7 )
  {
    v8 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
  }
  *(_DWORD *)a1 &= 0x80FFFFFF;
  *(_DWORD *)a1 |= (v8 & 0x7F) << 24;
  return 1LL;
}
