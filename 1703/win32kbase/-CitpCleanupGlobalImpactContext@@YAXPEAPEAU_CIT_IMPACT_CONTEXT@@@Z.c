/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084FD8
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00846B4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0084F68 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008501C (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  if ( qword_1C018E8C8 )
  {
    CitpContextCleanup(qword_1C018E8C8);
    if ( qword_1C018E8C8 )
    {
      Win32FreePool((__int64)qword_1C018E8C8);
      qword_1C018E8C8 = 0LL;
    }
  }
  *a1 = 0LL;
}
