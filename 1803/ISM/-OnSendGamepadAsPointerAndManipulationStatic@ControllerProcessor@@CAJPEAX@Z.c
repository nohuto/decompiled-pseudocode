/*
 * XREFs of ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180033FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 */

__int64 __fastcall ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic(char *a1)
{
  int v1; // ebx

  if ( a1 )
  {
    v1 = ControllerProcessor::SendGamepadAsPointerAndManipulation(
           (ControllerProcessor *)a1,
           (struct Windows::Gaming::Input::GamepadReading *)(a1 + 680));
    if ( v1 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v1;
}
