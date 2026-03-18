/*
 * XREFs of BiZwDeleteKey @ 0x140155ACC
 * Callers:
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1401A8E60 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
