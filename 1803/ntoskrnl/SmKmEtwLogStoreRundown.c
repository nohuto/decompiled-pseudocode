/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x140641C98
 * Callers:
 *     SmEtwEnableCallback @ 0x140641C40 (SmEtwEnableCallback.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1400902E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     SmKmEtwLogStoreChange @ 0x14079CFD4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14079D108 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a2, i);
    v6 = v5;
    if ( v5 )
    {
      SmKmEtwLogStoreStats(a1, v5);
      SmKmEtwLogStoreChange(a1, v6, &SmEventStoreRundown);
      v7 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, i & 0x3FF);
      ExReleaseRundownProtection(v7 + 1);
    }
  }
}
