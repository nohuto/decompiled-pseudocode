/*
 * XREFs of EtwFontLoadAttemptEvent @ 0x1C00FD0B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqzt @ 0x1C00FDB34 (McTemplateK0zqzt.c)
 */

__int64 __fastcall EtwFontLoadAttemptEvent(int a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (int)Microsoft_Windows_Win32kEnableBits < 0 )
    return McTemplateK0zqzt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
