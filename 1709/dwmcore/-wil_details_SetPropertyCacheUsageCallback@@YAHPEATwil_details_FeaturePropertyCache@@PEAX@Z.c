/*
 * XREFs of ?wil_details_SetPropertyCacheUsageCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18013AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheUsageCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  int v4; // edx
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 result; // rax

  v2 = *(_DWORD **)a2;
  v4 = 0;
  v2[1] = 0;
  **(_DWORD **)a2 = (*(_DWORD *)a1 & 8) == 0;
  *(_DWORD *)a1 |= 8u;
  v5 = a2[2];
  if ( ((*(_DWORD *)a1 >> 15) & 1) != (v5 == 4) )
  {
    if ( (*(_DWORD *)a1 & 0x7FC0) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v5 == 0 ? 4 : 0;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*(_DWORD *)a1 >> 6) & 0x1FF;
      *(_DWORD *)a1 &= 0xFFFF803F;
    }
    LOBYTE(v4) = a2[2] == 4;
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFF7FFF | (v4 << 15);
  }
  v6 = ((unsigned __int64)*(unsigned int *)a1 >> 6) & 0x1FF;
  v7 = *((_QWORD *)a2 + 2) + v6;
  if ( v7 > 0x1FF || v7 < v6 )
  {
    v7 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*(_DWORD *)a1 >> 6) & 0x1FF;
  }
  *(_DWORD *)a1 &= 0xFFFF803F;
  result = 1LL;
  *(_DWORD *)a1 |= (v7 & 0x1FF) << 6;
  return result;
}
