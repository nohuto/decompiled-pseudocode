/*
 * XREFs of GreGetTextCharacterExtra @ 0x1C0298794
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreGetTextCharacterExtra(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock(v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*((_QWORD *)v3[0] + 10) + 160LL);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v3);
    _InterlockedDecrement((volatile signed __int32 *)v3[0] + 3);
  }
  return v1;
}
