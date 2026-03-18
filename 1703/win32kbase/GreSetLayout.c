/*
 * XREFs of GreSetLayout @ 0x1C00808C0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003A530 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
