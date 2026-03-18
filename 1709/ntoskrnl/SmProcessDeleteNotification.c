/*
 * XREFs of SmProcessDeleteNotification @ 0x1404FCE70
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     SmKmStoreDeleteWhenEmpty @ 0x14000C970 (SmKmStoreDeleteWhenEmpty.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 */

void __fastcall SmProcessDeleteNotification(__int64 a1)
{
  _QWORD *v1; // rax
  __int16 v2; // bx
  unsigned int v3; // ebx
  __int64 *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_14041B178, &v6, 2, 0);
  if ( v1 )
  {
    v2 = *((_WORD *)v1 + 8);
    MiDeleteSubsection((PPRIVILEGE_SET)v1);
    v3 = v2 & 0x3FF;
    v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    SmKmStoreDeleteWhenEmpty((__int64)&SmGlobals, *v4);
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3);
    ExReleaseRundownProtection_0(v5 + 1);
  }
}
