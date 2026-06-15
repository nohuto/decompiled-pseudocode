/*
 * XREFs of ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180007000
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180006F20 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheOpportunityCallback(
        union wil_details_FeaturePropertyCache *a1,
        _DWORD *a2)
{
  _DWORD *v2; // rax
  int v4; // edx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v9; // ecx

  v2 = *(_DWORD **)a2;
  v4 = 0;
  v2[1] = 0;
  **(_DWORD **)a2 = ((*(_DWORD *)a1 >> 3) & 1) == 0;
  *(_DWORD *)a1 |= 8u;
  if ( *(_DWORD *)a1 >> 31 != (a2[2] == 5) )
  {
    if ( (*(_DWORD *)a1 & 0x7F000000) != 0 )
    {
      v9 = 5;
      if ( a2[2] != 1 )
        v9 = 1;
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v9;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
      *(_DWORD *)a1 &= 0x80FFFFFF;
    }
    LOBYTE(v4) = a2[2] == 5;
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0x7FFFFFFF | (v4 << 31);
  }
  v6 = HIBYTE(*(_DWORD *)a1) & 0x7F;
  v7 = *((_QWORD *)a2 + 2) + v6;
  if ( v7 > 0x7F || v7 < v6 )
  {
    v7 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *((_BYTE *)a1 + 3) & 0x7F;
  }
  *(_DWORD *)a1 &= 0x80FFFFFF;
  *(_DWORD *)a1 |= (v7 & 0x7F) << 24;
  return 1LL;
}
