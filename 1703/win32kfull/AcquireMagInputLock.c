/*
 * XREFs of AcquireMagInputLock @ 0x1C0103100
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C00A236C (_SetMagnificationInputTransform.c)
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C01030C0 (MagpInverseMagnificationTransformFromPoint.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ApplyMagInputTransform @ 0x1C01A2820 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01A2C40 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AB890 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

signed __int64 AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
