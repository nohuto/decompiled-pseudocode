/*
 * XREFs of EtwTraceSmoothRotationStart @ 0x1C00E1180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qtq @ 0x1C00E4680 (McTemplateK0qtq.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStart(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0qtq(a1, a2, a3, a1, a2, a3);
  return result;
}
