/*
 * XREFs of EtwTracePowerOnGdiBegin @ 0x1C00A6050
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePowerOnGdiBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &PowerOnGdiBegin, a3, (unsigned int)a1);
  return result;
}
