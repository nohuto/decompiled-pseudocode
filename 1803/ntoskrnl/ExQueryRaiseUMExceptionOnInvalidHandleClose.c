/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140606130
 * Callers:
 *     NtClose @ 0x1405A2660 (NtClose.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
