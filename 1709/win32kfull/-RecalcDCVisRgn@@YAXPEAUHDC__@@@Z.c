/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021605C
 * Callers:
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00FB000 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
}
