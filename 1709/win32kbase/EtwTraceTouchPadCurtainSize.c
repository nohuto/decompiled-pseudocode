/*
 * XREFs of EtwTraceTouchPadCurtainSize @ 0x1C00E14A0
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C0105B50 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     McTemplateK0qqqt @ 0x1C00E3DCC (McTemplateK0qqqt.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainSize(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qqqt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
