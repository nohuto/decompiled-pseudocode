/*
 * XREFs of BiZwSetSecurityObject @ 0x1401643D0
 * Callers:
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1401AA8A0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
