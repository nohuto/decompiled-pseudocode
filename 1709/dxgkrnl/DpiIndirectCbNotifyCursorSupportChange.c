/*
 * XREFs of DpiIndirectCbNotifyCursorSupportChange @ 0x1C01E5D70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 DpiIndirectCbNotifyCursorSupportChange()
{
  _DWORD v1[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v1, 0, 0x20uLL);
  v1[0] = 13;
  return SMgrGdiCallout(v1, 0LL, 0LL, 0LL, 0LL, 0LL);
}
