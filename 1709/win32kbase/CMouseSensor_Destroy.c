/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0004F80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C000A850 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 */

void *CMouseSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    result = CBaseInput::`scalar deleting destructor'((CBaseInput *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 1u);
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  }
  return result;
}
