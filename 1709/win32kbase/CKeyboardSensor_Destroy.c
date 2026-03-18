/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C0004F50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C000A850 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 */

void *CKeyboardSensor_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    result = CBaseInput::`scalar deleting destructor'((CBaseInput *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 1u);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  }
  return result;
}
