/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0069450
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C006E6D0 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 */

void *CMouseSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    result = CRIMBase::`scalar deleting destructor'((CRIMBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 1u);
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  }
  return result;
}
