/*
 * XREFs of VrpJobContextDelete @ 0x140707D60
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140707750 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x1407077BC (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
