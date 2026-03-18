/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C00E1150
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}
