/*
 * XREFs of HmgMarkDeletable @ 0x1C007E370
 * Callers:
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     GreMarkDeletableBitmap @ 0x1C007E330 (GreMarkDeletableBitmap.c)
 *     GreMarkDeletableRgn @ 0x1C007E340 (GreMarkDeletableRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgMarkDeletable(unsigned int a1, char a2)
{
  unsigned int v3; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v6) )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) &= ~1u;
      v3 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  return v3;
}
