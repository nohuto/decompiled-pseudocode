/*
 * XREFs of VrpJobContextDelete @ 0x1406A36F0
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x1406A30B8 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1406A3124 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
