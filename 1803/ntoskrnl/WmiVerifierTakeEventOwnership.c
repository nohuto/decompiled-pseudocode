/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1402AD06C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140832EF0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
