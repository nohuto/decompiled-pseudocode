/*
 * XREFs of GreGetBkColor @ 0x1C00D68EC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreGetBkColor(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  v5 = 0;
  v1 = -1;
  XDCOBJ::vLock(&v3, a1);
  if ( v3 )
  {
    v1 = *(_DWORD *)(*((_QWORD *)v3 + 10) + 36LL);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v3);
    _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
  }
  return v1;
}
