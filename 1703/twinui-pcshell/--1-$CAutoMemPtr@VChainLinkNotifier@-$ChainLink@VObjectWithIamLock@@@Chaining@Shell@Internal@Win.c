/*
 * XREFs of ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x18005732C
 * Callers:
 *     _CImmersiveApp::_RemoveFromChain_::_1_::dtor$0 @ 0x18019A4DE (_CImmersiveApp--_RemoveFromChain_--_1_--dtor$0.c)
 * Callees:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180194FA4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>::~CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>(
        void **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( !*(_DWORD *)v1 )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(v1);
    `eh vector destructor iterator'(
      v1 + 2,
      0x18uLL,
      2uLL,
      (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
    v2 = v1[1];
    if ( v2 )
    {
      v1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(v1);
  }
}
