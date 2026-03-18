/*
 * XREFs of EtwBindSwapChain @ 0x1C00A2780
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx @ 0x1C00FDAC0 (McTemplateK0xx.c)
 */

__int64 __fastcall EtwBindSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx(a1, &BindSwapChain, a3, a1, a2);
  return result;
}
