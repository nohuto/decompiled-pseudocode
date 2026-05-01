/*
 * XREFs of ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x1801B6648
 * Callers:
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18012FEB8 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rbx
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(a1 + 8);
  v5 = a1 + 64;
  result = v5 + 16;
  while ( v5 != result )
  {
    if ( !*(_BYTE *)(v5 + 4) )
    {
      *(_DWORD *)v5 = a3;
      *(_BYTE *)(v5 + 4) = 1;
      return result;
    }
    v5 += 8LL;
  }
  return result;
}
