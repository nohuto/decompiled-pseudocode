/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x140221E5C
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1405ADDE0 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 176) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v2) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v2, v1, 0LL) == 0;
}
