/*
 * XREFs of IsParentBandValid @ 0x1C011AA14
 * Callers:
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C0072C0C (IsTopLevelParent.c)
 */

_BOOL8 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  return IsTopLevelParent(a2)
      || *(_DWORD *)(v2 + 320) == *(_DWORD *)(v3 + 320) && ((*(_BYTE *)(v2 + 306) ^ *(_BYTE *)(v3 + 306)) & 0x40) == 0;
}
