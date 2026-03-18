/*
 * XREFs of BiSanitizeHandle @ 0x1400D2628
 * Callers:
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x140606D48 (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140608704 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiGetKeyName @ 0x1406090AC (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x1406092E4 (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
