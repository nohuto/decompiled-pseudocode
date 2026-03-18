/*
 * XREFs of ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C01D45C4
 * Callers:
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C00E4F04 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall OemSpecifiedViewDist(_QWORD *a1)
{
  EVENT_DESCRIPTOR *v1; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)DpiReadPnpRegistryValue(a1[24], L"ViewDistanceOverride", (char *)&v3, 4u, 2u) < 0 )
    return 0LL;
  v1 = (EVENT_DESCRIPTOR *)&ViewDistanceArray;
  while ( v3 != *(_DWORD *)&v1->Id )
  {
    v1 = (EVENT_DESCRIPTOR *)((char *)v1 + 4);
    if ( v1 == &EventVSyncDPC )
      return 0LL;
  }
  return v3;
}
