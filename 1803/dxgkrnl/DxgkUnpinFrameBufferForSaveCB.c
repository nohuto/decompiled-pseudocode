/*
 * XREFs of DxgkUnpinFrameBufferForSaveCB @ 0x1C002F380
 * Callers:
 *     <none>
 * Callees:
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C014FFF4 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkUnpinFrameBufferForSaveCB(__int64 a1, unsigned int *a2)
{
  return DXGADAPTER::UnpinFrameBufferForSave(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL), *a2);
}
