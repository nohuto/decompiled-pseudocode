/*
 * XREFs of GreSelectBrush @ 0x1C00948A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 */

__int64 __fastcall GreSelectBrush(struct HOBJ__ *a1, struct HOBJ__ *a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GreDCSelectBrush(v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
