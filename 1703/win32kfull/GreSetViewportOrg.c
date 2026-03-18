/*
 * XREFs of GreSetViewportOrg @ 0x1C000E26C
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // edi
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  v6 = 0;
  if ( v10[0] )
  {
    v7 = *(_QWORD *)(v10[0] + 80LL);
    v8 = -a2;
    if ( (*(_DWORD *)(v7 + 312) & 1) == 0 )
      v8 = a2;
    if ( (unsigned int)(v8 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
    {
      if ( (*(_DWORD *)(v7 + 8) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 0x402u);
        if ( v11[0] )
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)v11,
            (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 80LL) + 84LL),
            (struct _POINTL *)(*(_QWORD *)(v10[0] + 80LL) + 76LL),
            1uLL);
        *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 8LL) &= ~0x100u;
        v5 = v10[0];
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0x200u;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x80000204);
      *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 352LL) |= 0x2010u;
      *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 336LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 340LL) = a3;
      EXFORMOBJ::vInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x402u, 0);
      v6 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v6;
}
