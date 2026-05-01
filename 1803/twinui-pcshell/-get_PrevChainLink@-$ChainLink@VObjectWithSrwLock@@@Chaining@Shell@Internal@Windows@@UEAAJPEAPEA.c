/*
 * XREFs of ?get_PrevChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x1801BA2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::get_PrevChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx

  *a2 = 0LL;
  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockShared(v4);
  if ( *(_QWORD *)(a1 + 32) )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 32));
    *a2 = *(_QWORD *)(a1 + 32);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
