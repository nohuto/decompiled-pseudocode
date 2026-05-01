/*
 * XREFs of ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x18005D46C
 * Callers:
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005CE04 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x18005CF44 (-AppendChainLinkInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  if ( a1[1] != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = a1[1];
    a1[1] = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a1 + 2;
  result = a1 + 8;
  while ( v10 != result )
  {
    if ( !*v10 )
    {
      if ( *v10 != a3 )
      {
        if ( a3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        v12 = *v10;
        *v10 = a3;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v10[1] != a4 )
      {
        if ( a4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
        v13 = v10[1];
        v10[1] = a4;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      result = (__int64 *)a5;
      *((_DWORD *)v10 + 4) = a5;
      return result;
    }
    v10 += 3;
  }
  return result;
}
