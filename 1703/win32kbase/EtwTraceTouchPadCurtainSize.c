/*
 * XREFs of EtwTraceTouchPadCurtainSize @ 0x1C00DA950
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C0107540 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     Template_qqqt @ 0x1C00DD3D4 (Template_qqqt.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainSize(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return Template_qqqt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
