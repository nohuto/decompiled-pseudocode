/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9__&___ptr64__1_long_::Invoke @ 0x180046A30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180043E3C (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9______ptr64__1_long_::Invoke(
        __int64 a1)
{
  int Glom; // eax
  unsigned int v2; // ebx

  Glom = CAppViewManager::_TransferAllWindowsToNextGlom(
           *(_QWORD *)(a1 + 16),
           *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
           *(_QWORD *)(a1 + 32),
           0xFFFFFFFE);
  v2 = Glom;
  if ( Glom < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)Glom);
  return v2;
}
