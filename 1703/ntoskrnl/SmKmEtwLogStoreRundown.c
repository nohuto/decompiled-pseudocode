/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x1405C2328
 * Callers:
 *     SmEtwEnableCallback @ 0x1405C22D0 (SmEtwEnableCallback.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     SmKmEtwLogStoreChange @ 0x140701CD4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140701E08 (SmKmEtwLogStoreStats.c)
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
