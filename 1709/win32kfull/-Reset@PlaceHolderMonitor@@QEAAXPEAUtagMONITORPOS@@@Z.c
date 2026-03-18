/*
 * XREFs of ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CA23C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00CA0DC (FindOldMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaceHolderMonitor::Reset(PlaceHolderMonitor *this, struct tagMONITORPOS *a2)
{
  *(_DWORD *)(*((_QWORD *)this + 14) + 28LL) = *(_DWORD *)a2;
  *(_DWORD *)(*((_QWORD *)this + 14) + 32LL) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(*((_QWORD *)this + 14) + 36LL) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(*((_QWORD *)this + 14) + 40LL) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(*((_QWORD *)this + 14) + 44LL) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(*((_QWORD *)this + 14) + 48LL) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(*((_QWORD *)this + 14) + 52LL) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(*((_QWORD *)this + 14) + 56LL) = *((_DWORD *)a2 + 7);
  *(_WORD *)(*((_QWORD *)this + 14) + 64LL) = *((_WORD *)a2 + 16);
  *(_WORD *)(*((_QWORD *)this + 14) + 66LL) = *((_WORD *)a2 + 17);
}
