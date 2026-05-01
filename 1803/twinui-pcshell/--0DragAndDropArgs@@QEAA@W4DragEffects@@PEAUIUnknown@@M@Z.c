/*
 * XREFs of ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x1802A455C
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A4A8C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A53A0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall DragAndDropArgs::DragAndDropArgs(__int64 a1, int a2, CWinRTApplicationView *a3, float a4)
{
  CWinRTApplicationView **v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v5 = (CWinRTApplicationView **)(a1 + 8);
  *v5 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v5, a3);
  *(float *)(a1 + 20) = a4;
  result = a1;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
