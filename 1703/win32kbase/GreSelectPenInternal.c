/*
 * XREFs of GreSelectPenInternal @ 0x1C009F9C0
 * Callers:
 *     GreSelectPen @ 0x1C00E82E0 (GreSelectPen.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031DF4 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 */

struct HOBJ__ *__fastcall GreSelectPenInternal(HDC a1, struct HOBJ__ *a2, int a3)
{
  struct HOBJ__ *v4; // rbx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a3 || (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v7[0]) + 8) & 0xFFFFFFFE) != 0 )
      v4 = GreDCSelectPen((struct HOBJ__ ***)v7[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v4;
}
