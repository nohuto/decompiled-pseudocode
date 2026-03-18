/*
 * XREFs of EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C009BED0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C00E2C04 (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceDITSpeedHitTestFailedRevalidation(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0p(a1, &DITSpeedHitTestFailedRevalidation, &W32kControlGuid, a1);
  return result;
}
