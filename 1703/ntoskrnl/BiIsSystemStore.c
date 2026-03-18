/*
 * XREFs of BiIsSystemStore @ 0x14058A854
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // ebx
  char v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v6) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v3 )
    {
      if ( (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &P, &v6) >= 0 )
      {
        v4 = *(_DWORD *)P;
        ExFreePoolWithTag(P, 0x4B444342u);
        return v4 != 0;
      }
    }
  }
  return v1;
}
