/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180195084
 * Callers:
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180053610 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800571D4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18005A660 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005ACCC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18005F828 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180195010 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
