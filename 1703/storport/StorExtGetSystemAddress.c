/*
 * XREFs of StorExtGetSystemAddress @ 0x1C00327C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall StorExtGetSystemAddress(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v2 = *(_BYTE *)(a1 + 2) == 40 ? *(_QWORD *)(a1 + 96) : *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 104);
  if ( !v3 )
    return 0LL;
  if ( (*(_BYTE *)(v3 + 10) & 5) != 0 )
    return *(PVOID *)(v3 + 24);
  return MmMapLockedPagesSpecifyCache((PMDL)v3, 0, MmCached, 0LL, 0, 0x40000010u);
}
