/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4
 * Callers:
 *     xxxUpdateWindow @ 0x1C0049200 (xxxUpdateWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxbFullscreenSwitch @ 0x1C01E7D70 (xxxbFullscreenSwitch.c)
 *     xxxUpdateThreadsWindows @ 0x1C01F87FC (xxxUpdateThreadsWindows.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
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
