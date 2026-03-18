/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603B0
 * Callers:
 *     ?CitpCleanup@@YAXXZ @ 0x1C0160358 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0160B5C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603F4 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  if ( qword_1C01A16B0 )
  {
    CitpContextCleanup(qword_1C01A16B0);
    if ( qword_1C01A16B0 )
    {
      Win32FreePool((__int64)qword_1C01A16B0);
      qword_1C01A16B0 = 0LL;
    }
  }
  *a1 = 0LL;
}
