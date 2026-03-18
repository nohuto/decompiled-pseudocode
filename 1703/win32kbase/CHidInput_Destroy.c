/*
 * XREFs of CHidInput_Destroy @ 0x1C00693F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C004EE30 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

CHidInput *CHidInput_Destroy()
{
  CHidInput *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = CHidInput::`scalar deleting destructor'((CHidInput *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 1);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
