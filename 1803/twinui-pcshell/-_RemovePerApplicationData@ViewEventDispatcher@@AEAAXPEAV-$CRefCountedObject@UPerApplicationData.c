/*
 * XREFs of ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x1800FAE38 (wil--details--ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___--_ScopeExitFn__lambda_a6ab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800912CC (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@M.c)
 */

unsigned __int64 __fastcall ViewEventDispatcher::_RemovePerApplicationData(__int64 a1, void *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbx
  void **i; // rcx
  __int64 v6; // rdx

  result = *(_QWORD *)(a1 + 592);
  v3 = 0LL;
  if ( result )
  {
    for ( i = *(void ***)(a1 + 584); a2 != *i; ++i )
    {
      if ( ++v3 >= result )
        return result;
    }
    if ( v3 < result )
    {
      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(i);
      v6 = *(_QWORD *)(a1 + 592);
      if ( v3 != v6 - 1 )
      {
        memmove(
          (void *)(*(_QWORD *)(a1 + 584) + 8 * v3),
          (const void *)(*(_QWORD *)(a1 + 584) + 8 * v3 + 8),
          8 * (v6 - v3) - 8);
        v6 = *(_QWORD *)(a1 + 592);
      }
      result = v6 - 1;
      *(_QWORD *)(a1 + 592) = v6 - 1;
    }
  }
  return result;
}
