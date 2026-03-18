/*
 * XREFs of EtwTracePTPReadThresholdsStart @ 0x1C00E0CF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePTPReadThresholdsStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0(a1, &PTPReadThresholdsStart, &W32kControlGuid);
  return result;
}
