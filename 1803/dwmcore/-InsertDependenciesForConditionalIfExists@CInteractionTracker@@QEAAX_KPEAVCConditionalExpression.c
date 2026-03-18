/*
 * XREFs of ?InsertDependenciesForConditionalIfExists@CInteractionTracker@@QEAAX_KPEAVCConditionalExpression@@@Z @ 0x180194990
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForConditionalIfExists(
        CInteractionTracker *this,
        __int64 a2,
        struct CConditionalExpression *a3)
{
  if ( a3 )
    (*(void (__fastcall **)(struct CConditionalExpression *))(*(_QWORD *)a3 + 176LL))(a3);
}
