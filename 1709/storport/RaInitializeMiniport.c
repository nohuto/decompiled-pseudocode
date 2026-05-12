/*
 * XREFs of RaInitializeMiniport @ 0x1C00633F0
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaAssignConfigurationResources @ 0x1C0063444 (RaAssignConfigurationResources.c)
 */

__int64 __fastcall RaInitializeMiniport(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( *a2 == 176 || *a2 == 208 && (a2[46] & 1) != 0 )
    *(_BYTE *)(a1 + 248) |= 4u;
  if ( *a4 )
    return (unsigned int)RaAssignConfigurationResources(a1 + 8, *a4, (unsigned int)a2[19]);
  return v4;
}
