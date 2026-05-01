/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x180130260
 * Callers:
 *     <none>
 * Callees:
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x18012CE34 (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18012F338 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run(
        __int64 a1)
{
  void *v2; // rcx

  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(*(_QWORD *)(a1 + 16));
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v2);
}
