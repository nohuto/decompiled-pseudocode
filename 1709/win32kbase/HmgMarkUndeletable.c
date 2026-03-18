/*
 * XREFs of HmgMarkUndeletable @ 0x1C0063790
 * Callers:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E1D8 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     GreMarkUndeletableBitmap @ 0x1C0063770 (GreMarkUndeletableBitmap.c)
 *     GreMarkUndeletableBrush @ 0x1C009BBC0 (GreMarkUndeletableBrush.c)
 *     bInitICM @ 0x1C01DF194 (bInitICM.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgMarkUndeletable(struct HOBJ__ *a1, char a2)
{
  unsigned int v2; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v4 = WORD1(a1);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v6, a1, 1, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) |= 1u;
      v2 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v2;
}
