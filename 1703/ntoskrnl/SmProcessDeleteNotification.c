/*
 * XREFs of SmProcessDeleteNotification @ 0x140498D5C
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     SmKmStoreDeleteWhenEmpty @ 0x14002B434 (SmKmStoreDeleteWhenEmpty.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

void __fastcall SmProcessDeleteNotification(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // bx
  unsigned int v3; // ebx
  __int64 *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8, &v6, 2, 0);
  if ( v1 )
  {
    v2 = *(_WORD *)(v1 + 16);
    MiDeleteSubsection((PPRIVILEGE_SET)v1);
    v3 = v2 & 0x3FF;
    v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    SmKmStoreDeleteWhenEmpty((__int64)&SmGlobals, *v4);
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    ExReleaseRundownProtection(v5 + 1);
  }
}
