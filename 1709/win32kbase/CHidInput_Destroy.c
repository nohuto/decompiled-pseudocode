/*
 * XREFs of CHidInput_Destroy @ 0x1C0004F20
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00196A0 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CHidInput_Destroy()
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = CHidInput::`scalar deleting destructor'((CHidInput *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 1u);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
