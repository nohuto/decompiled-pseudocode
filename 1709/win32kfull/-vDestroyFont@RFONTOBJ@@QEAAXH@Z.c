/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0283D08
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C0283E50 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C003D8F0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  __int64 *pvConsumer; // rax
  struct PDEV *iTTUniq; // rbx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v7; // [rsp+40h] [rbp+18h] BYREF

  pvConsumer = (__int64 *)(*this)[1].pvConsumer;
  iTTUniq = (struct PDEV *)(*this)[1].iTTUniq;
  v7 = iTTUniq;
  v6 = pvConsumer;
  PFEOBJ::vFreepfdg(&v6);
  if ( a2 )
  {
    if ( *((_QWORD *)iTTUniq + 381) )
      PDEVOBJ::DestroyFont(&v7, *this);
  }
}
