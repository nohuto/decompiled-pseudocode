/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14025295C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1407835E0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
