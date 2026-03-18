/*
 * XREFs of ExpFreePoolChecks @ 0x1402B8EBC
 * Callers:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x140241F58 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x1402BA204 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x1402BB130 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1402BB594 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x140824840 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a3 )
      ExpCheckForLookaside(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfFreePoolNotification(BugCheckParameter3, a2);
  return result;
}
