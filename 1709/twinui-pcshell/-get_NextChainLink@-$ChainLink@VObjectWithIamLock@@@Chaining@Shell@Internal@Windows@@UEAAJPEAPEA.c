/*
 * XREFs of ?get_NextChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18005D2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_NextChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // rcx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = 0LL;
  AcquireSRWLockShared(v2);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = *(_QWORD *)(a1 + 24);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
