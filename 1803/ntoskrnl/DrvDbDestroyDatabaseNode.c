/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x1407F3FAC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x14050C6F0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenContext @ 0x140623998 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140652418 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     DrvDbUnloadDatabaseNode @ 0x140565128 (DrvDbUnloadDatabaseNode.c)
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
    v6 = a2[18];
    if ( v6 )
    {
      ExDeleteResourceLite((PERESOURCE)a2[18]);
      ExFreePoolWithTag(v6, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)(a2 + 5));
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v3;
}
