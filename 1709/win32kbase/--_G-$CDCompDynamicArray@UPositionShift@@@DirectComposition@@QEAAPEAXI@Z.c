/*
 * XREFs of ??_G?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z @ 0x1C0144880
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01448B0 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144988 (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 *__fastcall DirectComposition::CDCompDynamicArray<PositionShift>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
    Win32FreePool(v2);
  Win32FreePool((__int64)a1);
  return a1;
}
