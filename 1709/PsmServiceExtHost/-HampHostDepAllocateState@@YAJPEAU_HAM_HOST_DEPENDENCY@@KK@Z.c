/*
 * XREFs of ?HampHostDepAllocateState@@YAJPEAU_HAM_HOST_DEPENDENCY@@KK@Z @ 0x180045570
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180007388 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 */

NTSTATUS __fastcall HampHostDepAllocateState(void **a1, unsigned int a2, unsigned int a3)
{
  NTSTATUS result; // eax

  result = RmpSystemOpenProcess(a1 + 2, 0x100000u, a2);
  if ( result >= 0 )
  {
    result = RmpSystemOpenProcess(a1 + 3, 0x100000u, a3);
    if ( result >= 0 )
    {
      result = TpAllocWait(a1 + 4, HampHostDepProcessExitCallback, a1, 0LL);
      if ( result >= 0 )
      {
        result = TpAllocWait(a1 + 5, HampHostDepProcessExitCallback, a1, 0LL);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
