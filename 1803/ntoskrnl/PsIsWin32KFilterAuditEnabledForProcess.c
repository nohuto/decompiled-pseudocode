/*
 * XREFs of PsIsWin32KFilterAuditEnabledForProcess @ 0x1400C6B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterAuditEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2088) & 0x8000) != 0;
}
