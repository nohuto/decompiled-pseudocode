/*
 * XREFs of ?get_NextChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18005A920
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@ObjectWithIamLock@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1800501F0 (-LockShared@ObjectWithIamLock@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_NextChainLink(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  ObjectWithIamLock::LockShared(a1, &SRWLock);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = *(_QWORD *)(a1 + 16);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
