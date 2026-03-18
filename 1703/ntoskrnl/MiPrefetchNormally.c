/*
 * XREFs of MiPrefetchNormally @ 0x140108510
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1[728] >= 160 )
  {
    v3 = a1[781];
    v4 = a1[766];
    if ( v4 <= v3 && v3 - v4 >= 0x1080 && MiGetAvailablePagesBelowPriority(a1, a2) )
      return 1;
  }
  return result;
}
