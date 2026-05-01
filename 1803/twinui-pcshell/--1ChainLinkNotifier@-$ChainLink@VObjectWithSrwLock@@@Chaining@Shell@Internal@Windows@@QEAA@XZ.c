/*
 * XREFs of ??1ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1801B615C
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1801B66E0 (-AppendChainLink@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801B8DF0 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800993B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801B81D0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ChainLinkNotifier::~ChainLinkNotifier(
        __int64 a1)
{
  if ( !*(_DWORD *)a1 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ChainLinkNotifier::Notify(a1);
  `eh vector destructor iterator'(
    (char *)(a1 + 16),
    24LL,
    2LL,
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
}
