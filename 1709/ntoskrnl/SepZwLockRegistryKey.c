/*
 * XREFs of SepZwLockRegistryKey @ 0x1405F30A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14017F960 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
