/*
 * XREFs of ExpFreePoolChecks @ 0x14025B100
 * Callers:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401FE4D8 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14025C2B4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14025D348 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14025D678 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a3 )
    {
      ExpCheckForLookaside(BugCheckParameter3, a2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter3, a2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 4) != 0 )
    {
      ExpCheckForResource(BugCheckParameter3, a2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter3);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 0x10) != 0 )
      return VfFreePoolNotification(BugCheckParameter3, a2);
  }
  return result;
}
