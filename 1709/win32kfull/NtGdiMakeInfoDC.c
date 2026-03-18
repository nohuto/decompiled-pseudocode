/*
 * XREFs of NtGdiMakeInfoDC @ 0x1C011AC10
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  InfoDC = 0;
  v5[1] = 0LL;
  XDCOBJ::vLock(v5, a1);
  if ( v5[0] )
  {
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return InfoDC;
}
