/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003C3DC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentProcessDwm(void)
{
  PVOID CurrentProcess; // rcx
  _BOOL8 result; // rax

  CurrentProcess = (PVOID)PsGetCurrentProcess();
  result = 0LL;
  if ( CurrentProcess )
    return CurrentProcess == g_pepDwm;
  return result;
}
