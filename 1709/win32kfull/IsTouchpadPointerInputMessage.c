/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x1C01C0A28
 * Callers:
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01CB734 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 5 || (unsigned int)(a1 - 593) <= 2;
}
