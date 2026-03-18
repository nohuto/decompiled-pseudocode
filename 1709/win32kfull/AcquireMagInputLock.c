/*
 * XREFs of AcquireMagInputLock @ 0x1C00FD424
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00FD3A0 (AddMagnificationOutputTransform.c)
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01AA340 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01AA650 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AECA0 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
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
