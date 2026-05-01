/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18000C304
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1801CC4F0 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(*a1 + 8 * a2));
  v4 = a1[1];
  if ( a2 != v4 - 1 )
  {
    memmove((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v4 - a2) - 8);
    v4 = a1[1];
  }
  a1[1] = v4 - 1;
  return 0LL;
}
