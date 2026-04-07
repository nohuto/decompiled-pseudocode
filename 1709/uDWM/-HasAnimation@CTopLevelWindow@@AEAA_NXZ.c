/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180078990
 * Callers:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180019674 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001A75C (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180079370 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800793A0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelWindow::HasAnimation(CTopLevelWindow *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 61) || *((char *)this + 240) < 0 )
    return 1;
  return result;
}
