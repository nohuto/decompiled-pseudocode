/*
 * XREFs of RtlGetAppContainerSidType @ 0x180043830
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     RtlGetAppContainerParent @ 0x180043B90 (RtlGetAppContainerParent.c)
 *     RtlIsParentOfChildAppContainer @ 0x180080A40 (RtlIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(__int64 a1, _DWORD *a2)
{
  char v4; // al

  if ( *(_BYTE *)(a1 + 1) >= 2u
    && *(_BYTE *)a1 == 1
    && RtlCompareMemory((const void *)(a1 + 2), &unk_180114628, 6uLL) == 6
    && *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = *(_BYTE *)(a1 + 1);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
