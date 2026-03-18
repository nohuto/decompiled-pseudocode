/*
 * XREFs of SmProcessDeleteNotification @ 0x140511C74
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400BC874 (SmKmStoreDeleteWhenEmpty.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall SmProcessDeleteNotification(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int16 v2; // bx
  unsigned int v3; // ebx
  __int64 *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140466188, (__int64)&v6, 2, 0LL);
  if ( v1 )
  {
    v2 = *(_WORD *)(v1 + 16);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    v3 = v2 & 0x3FF;
    v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    SmKmStoreDeleteWhenEmpty((__int64)&SmGlobals, *v4);
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    ExReleaseRundownProtection(v5 + 1);
  }
}
