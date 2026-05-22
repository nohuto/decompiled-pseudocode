/*
 * XREFs of ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x18003F720
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 */

__int64 __fastcall ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic(char *a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx

  if ( a1 )
  {
    v2 = ControllerProcessor::SendGamepadAsPointerAndManipulation(
           (ControllerProcessor *)a1,
           (struct Windows::Gaming::Input::GamepadReading *)(a1 + 168));
    v1 = v2;
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 12, 1286, v2);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  else
  {
    v1 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 12, 1282, 87);
  }
  return v1;
}
