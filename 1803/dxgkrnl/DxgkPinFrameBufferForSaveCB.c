/*
 * XREFs of DxgkPinFrameBufferForSaveCB @ 0x1C002F060
 * Callers:
 *     <none>
 * Callees:
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C014D698 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DxgkPinFrameBufferForSaveCB(__int64 a1, __int64 a2)
{
  return DXGADAPTER::PinFrameBufferForSave(
           *(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL),
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           (struct _MDL **)(a2 + 16));
}
