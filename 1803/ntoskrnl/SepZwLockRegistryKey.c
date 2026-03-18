/*
 * XREFs of SepZwLockRegistryKey @ 0x140655D50
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1401A9580 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
