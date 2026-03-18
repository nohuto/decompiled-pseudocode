/*
 * XREFs of DxgkUnmapFrameBufferPointerCB @ 0x1C002F300
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C014FFB0 (-UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z.c)
 */

int __fastcall DxgkUnmapFrameBufferPointerCB(__int64 a1, __int64 a2)
{
  return DXGADAPTER::UnmapFrameBufferPointer(
           *(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL),
           *(_DWORD *)a2,
           *(void **)(a2 + 8));
}
