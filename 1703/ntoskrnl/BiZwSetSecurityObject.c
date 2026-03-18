/*
 * XREFs of BiZwSetSecurityObject @ 0x14014CF48
 * Callers:
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
