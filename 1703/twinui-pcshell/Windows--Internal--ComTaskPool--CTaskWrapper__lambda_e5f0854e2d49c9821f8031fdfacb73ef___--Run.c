/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x18005CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180194FA4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rcx

  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(*(PSRWLOCK *)(a1 + 16));
  v2 = *(RTL_SRWLOCK **)(a1 + 16);
  if ( v2 )
  {
    if ( !LODWORD(v2->Ptr) )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(v2);
    `eh vector destructor iterator'(
      &v2[2],
      0x18uLL,
      2uLL,
      (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
    Ptr = v2[1].Ptr;
    if ( Ptr )
    {
      v2[1].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    operator delete(v2);
  }
}
