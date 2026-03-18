/*
 * XREFs of MiHashIsCommon @ 0x140223CB0
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHashIsCommon(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int v6; // edx

  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 48);
  if ( v6 )
  {
    while ( a2 != *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= v6 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
