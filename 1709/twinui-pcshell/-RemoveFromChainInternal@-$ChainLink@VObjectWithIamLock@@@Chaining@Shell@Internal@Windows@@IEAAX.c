/*
 * XREFs of ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005CE04
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D6AC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x18005D46C (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 i; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 j; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v2,
      a1,
      0);
    if ( *(_QWORD *)(a2 + 8) != a1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v5 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = a1;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    for ( i = a2 + 64; i != a2 + 80; i += 8LL )
    {
      if ( !*(_BYTE *)(i + 4) )
      {
        *(_DWORD *)i = 2;
        *(_BYTE *)(i + 4) = 1;
        break;
      }
    }
    ++*(_DWORD *)(a1 + 40);
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v7,
      a1,
      1);
    if ( *(_QWORD *)(a2 + 8) != a1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      v8 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = a1;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    for ( j = a2 + 64; j != a2 + 80; j += 8LL )
    {
      if ( !*(_BYTE *)(j + 4) )
      {
        *(_DWORD *)j = 1;
        *(_BYTE *)(j + 4) = 1;
        break;
      }
    }
    ++*(_DWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 56) = 1;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
