/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     xxxUpdateWindow @ 0x1C009F840 (xxxUpdateWindow.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C01DF9A4 (xxxUpdateThreadsWindows.c)
 *     xxxbFullscreenSwitch @ 0x1C01F3D7C (xxxbFullscreenSwitch.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  __int64 i; // r8

  if ( (*((_BYTE *)a1 + 64) & 0x20) != 0 )
  {
    for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_QWORD *)(i + 16) == *((_QWORD *)a1 + 2) && (*(_QWORD *)(i + 176) || (*(_BYTE *)(i + 57) & 0x10) != 0) )
        return;
    }
  }
  xxxUpdateWindow2(a1, a2);
}
