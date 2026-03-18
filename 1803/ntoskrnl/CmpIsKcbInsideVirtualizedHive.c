/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1405ADDE0
 * Callers:
 *     KCBIsVirtualizable @ 0x1400BCF80 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x140221E5C (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4152LL) & 0x10) != 0;
}
