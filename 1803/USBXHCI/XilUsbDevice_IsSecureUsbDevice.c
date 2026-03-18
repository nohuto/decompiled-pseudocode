/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C0002544
 * Callers:
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 608);
}
