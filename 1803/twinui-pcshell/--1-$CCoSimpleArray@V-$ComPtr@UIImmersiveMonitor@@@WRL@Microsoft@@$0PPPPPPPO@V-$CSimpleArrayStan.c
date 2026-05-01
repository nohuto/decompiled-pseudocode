/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1800F8828
 * Callers:
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x1800B0DE8 (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$6 @ 0x1800B3514 (_CApplicationManager--_HandleActivation2_--_1_--dtor$6.c)
 *     _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$0 @ 0x1801111A4 (_CApplicationManager--_PerformDesktopActivationCallouts_--_1_--dtor$0.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1801C8928 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1801CC0A0 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * v3++));
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
