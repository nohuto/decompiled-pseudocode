/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x1C01BCACC
 * Callers:
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 9 || (unsigned int)(a1 - 593) <= 2;
}
