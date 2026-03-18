/*
 * XREFs of BiSanitizeHandle @ 0x140131B74
 * Callers:
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiDeleteRegistryValue @ 0x1405AE26C (BiDeleteRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiGetKeyName @ 0x1405AFEC4 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 *     BcdFlushStore @ 0x140778A44 (BcdFlushStore.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
