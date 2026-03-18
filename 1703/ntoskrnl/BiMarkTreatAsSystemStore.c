/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x14058A118
 * Callers:
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, P, &v7) >= 0 )
  {
    v4 = *(_DWORD *)P[0];
    ExFreePoolWithTag(P[0], 0x4B444342u);
    if ( v4 )
    {
      if ( a2 )
        return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description");
    }
  }
  result = BiDeleteRegistryValue(a1, L"TreatAsSystem");
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}
