/*
 * XREFs of EtwTraceTouchPadWMPointerProcessingStart @ 0x1C00E16D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadWMPointerProcessingStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0(a1, &TouchPadWMPointerProcessingStart, &W32kControlGuid);
  return result;
}
