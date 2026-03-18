/*
 * XREFs of EtwTraceMouseInputApc @ 0x1C009A1B0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceMouseInputApc(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return TemplateEventDescriptor(a1, &MouseInputApc, &W32kControlGuid);
  return result;
}
