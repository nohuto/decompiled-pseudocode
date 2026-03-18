/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C0069420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C006E6D0 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 */

void *CKeyboardSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    result = CRIMBase::`scalar deleting destructor'((CRIMBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 1u);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  }
  return result;
}
