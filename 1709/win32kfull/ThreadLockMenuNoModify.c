/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C007CAD4
 * Callers:
 *     xxxCalcMenuBar @ 0x1C007CC3C (xxxCalcMenuBar.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) |= 0x200u;
  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  *a2 = *(_QWORD *)(result + 392);
  *(_QWORD *)(result + 392) = a2;
  a2[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
