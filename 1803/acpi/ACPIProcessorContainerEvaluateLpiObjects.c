/*
 * XREFs of ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003692C
 * Callers:
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003692C (ACPIProcessorContainerEvaluateLpiObjects.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0036B94 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0036874 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003692C (ACPIProcessorContainerEvaluateLpiObjects.c)
 */

__int64 __fastcall ACPIProcessorContainerEvaluateLpiObjects(_QWORD **a1, int *a2)
{
  KIRQL v4; // al
  _QWORD *i; // rbx
  __int64 result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = *a1; ; i = (_QWORD *)*i )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
    if ( i == a1 )
      break;
    result = ACPIProcessorContainerEvaluateLpiObjects(i + 2, a2);
    if ( (int)result < 0 )
      return result;
    result = ACPIProcessorContainerEvaluateLpiObject((__int64)(i - 23), a2);
    if ( (int)result < 0 )
      return result;
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  }
  return 0LL;
}
