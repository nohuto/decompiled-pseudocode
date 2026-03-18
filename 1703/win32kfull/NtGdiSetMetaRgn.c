/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00E9BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C007BCD4 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[0] = 0LL;
  v3[1] = 0LL;
  XDCOBJ::vLock(v3, a1);
  if ( v3[0] )
  {
    v1 = DC::iSetMetaRgn(v3[0]);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v3);
    _InterlockedDecrement((volatile signed __int32 *)v3[0] + 3);
  }
  else
  {
    EngSetLastError(0x57u);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  }
  return v1;
}
