/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x140279E9C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1407C5990 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
