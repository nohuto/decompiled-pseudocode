/*
 * XREFs of GreSelectPen @ 0x1C00ED9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 */

struct HOBJ__ *__fastcall GreSelectPen(struct HOBJ__ *a1, struct HOBJ__ *a2)
{
  struct HOBJ__ *v3; // rbx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GreDCSelectPen((struct HOBJ__ ***)v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
