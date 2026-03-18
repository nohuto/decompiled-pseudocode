/*
 * XREFs of DxgkMapFrameBufferPointerCB @ 0x1C002EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z @ 0x1C014D4D8 (-MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkMapFrameBufferPointerCB(__int64 a1, __int64 a2)
{
  return DXGADAPTER::MapFrameBufferPointer(
           *(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL),
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           (unsigned __int64 *)(a2 + 16),
           (void **)(a2 + 24));
}
