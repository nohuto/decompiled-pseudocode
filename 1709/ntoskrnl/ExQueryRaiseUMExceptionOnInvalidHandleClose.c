/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x1405F308C
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
