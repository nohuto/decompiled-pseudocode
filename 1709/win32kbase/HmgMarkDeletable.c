/*
 * XREFs of HmgMarkDeletable @ 0x1C00801F0
 * Callers:
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     GreMarkDeletableBitmap @ 0x1C00801A0 (GreMarkDeletableBitmap.c)
 *     GreMarkDeletableRgn @ 0x1C00801C0 (GreMarkDeletableRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgMarkDeletable(struct HOBJ__ *a1, char a2)
{
  __int16 v3; // ebx^2
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v3 = WORD1(a1);
  v4 = 0;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v6, a1, 0, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v3 )
    {
      *(_BYTE *)(v6 + 15) &= ~1u;
      v4 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v4;
}
