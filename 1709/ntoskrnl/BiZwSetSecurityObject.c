/*
 * XREFs of BiZwSetSecurityObject @ 0x140134AF0
 * Callers:
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x140180C60 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
