/*
 * XREFs of BiSanitizeHandle @ 0x14013C160
 * Callers:
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
