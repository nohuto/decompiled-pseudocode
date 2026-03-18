/*
 * XREFs of EtwTraceTouchPadWMPointerProcessingStop @ 0x1C00DABB0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadWMPointerProcessingStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadWMPointerProcessingStop, &W32kControlGuid);
  return result;
}
