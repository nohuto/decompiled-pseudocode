/*
 * XREFs of ExpFreePoolChecks @ 0x1402848FC
 * Callers:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x140204778 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x140285BD4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140286E60 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140287298 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x1407B7624 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !(_DWORD)a3 )
      ExpCheckForLookaside(BugCheckParameter3, a2, a3, a4);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a2, a3, a4);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
    result = (unsigned int)ExpPoolFlags;
    if ( (ExpPoolFlags & 0x10) != 0 )
      return VfFreePoolNotification(BugCheckParameter3, a2, a3, a4);
  }
  return result;
}
