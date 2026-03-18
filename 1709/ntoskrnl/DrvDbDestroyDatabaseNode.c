/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x14078782C
 * Callers:
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbDispatchDriverDatabase @ 0x140531320 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     DrvDbUnloadDatabaseNode @ 0x140533D40 (DrvDbUnloadDatabaseNode.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, void ***a2)
{
  int v3; // esi
  void **v4; // rcx
  void **v5; // rdx
  void **v6; // rdi

  v3 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v3 >= 0 )
  {
    v4 = *a2;
    if ( (*a2)[1] != a2 || (v5 = a2[1], *v5 != a2) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = a2[17];
    if ( v6 )
    {
      ExDeleteResourceLite((PERESOURCE)a2[17]);
      ExFreePoolWithTag(v6, 0);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 1);
    RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 5));
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v3;
}
