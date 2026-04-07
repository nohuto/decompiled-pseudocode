/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180080858
 * Callers:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025A70 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800811F8 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180081228 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::HasAnimation(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 61) || *((_BYTE *)this + 240) >= 0x80u )
    return 1LL;
  return result;
}
