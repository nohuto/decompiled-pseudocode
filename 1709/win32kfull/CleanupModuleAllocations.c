/*
 * XREFs of CleanupModuleAllocations @ 0x1C0125A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CleanupModuleAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( qword_1C0326828 )
    Win32FreePool(qword_1C0326828, a2, a3);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory, a2, a3);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2, a2, a3);
    gpQmsgHistory2 = 0LL;
  }
  result = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks, a2, a3);
    result = gpAtomickCheckStacks;
    gpAtomickCheckStacks = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong, a2, a3);
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  }
  return result;
}
