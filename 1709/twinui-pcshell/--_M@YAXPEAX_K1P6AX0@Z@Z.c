/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801E3068
 * Callers:
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1800559F0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x180059998 (--1-$CAutoMemPtr@VChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Win.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18005CFF0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D6AC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x18005E950 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___--Run.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800612A0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180061328 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     _dynamic_atexit_destructor_for__CApplicationManager::s_rgTrustedComponentRegMap__ @ 0x1801F7FA0 (_dynamic_atexit_destructor_for__CApplicationManager--s_rgTrustedComponentRegMap__.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1801E30D4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
