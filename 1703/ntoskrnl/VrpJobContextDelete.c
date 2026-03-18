/*
 * XREFs of VrpJobContextDelete @ 0x1406793D0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14067909C (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140679108 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
