/*
 * XREFs of GreSetGraphicsMode @ 0x1C029C860
 * Callers:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     FlipUserTextOutW @ 0x1C00F6CEC (FlipUserTextOutW.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  DC *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = 0LL;
  XDCOBJ::vLock(v6, a1);
  if ( v6[0] )
  {
    v4 = *((_QWORD *)v6[0] + 10);
    v3 = *(_DWORD *)(v4 + 68);
    if ( (unsigned int)(a2 - 1) <= 1 )
      *(_DWORD *)(v4 + 68) = a2;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v6);
    _InterlockedDecrement((volatile signed __int32 *)v6[0] + 3);
  }
  return v3;
}
