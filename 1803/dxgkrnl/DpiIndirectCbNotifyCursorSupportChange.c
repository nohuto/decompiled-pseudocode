/*
 * XREFs of DpiIndirectCbNotifyCursorSupportChange @ 0x1C0206920
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 DpiIndirectCbNotifyCursorSupportChange()
{
  _DWORD v1[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v1, 0, 0x20uLL);
  v1[0] = 13;
  return SMgrGdiCallout(v1, 0LL, 0LL, 0LL, 0LL, 0LL);
}
