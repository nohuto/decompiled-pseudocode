/*
 * XREFs of ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180044B40 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800F1560 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ??1?$ComPtr@UIImmersiveApplicationArray@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8904 (--1-$ComPtr@UIImmersiveApplicationArray@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_30be9e9c460ac82db3d5a618825ec262_::__lambda_30be9e9c460ac82db3d5a618825ec262_ @ 0x1800F890C (_lambda_30be9e9c460ac82db3d5a618825ec262_--__lambda_30be9e9c460ac82db3d5a618825ec262_.c)
 *     _lambda_6363101253bf33f24c351b7ac39c5c85_::__lambda_6363101253bf33f24c351b7ac39c5c85_ @ 0x180104268 (_lambda_6363101253bf33f24c351b7ac39c5c85_--__lambda_6363101253bf33f24c351b7ac39c5c85_.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180107140 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180107880 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180114EA0 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     _lambda_497cdd3be1990e13318bbe793e150545_::__lambda_497cdd3be1990e13318bbe793e150545_ @ 0x1801156FC (_lambda_497cdd3be1990e13318bbe793e150545_--__lambda_497cdd3be1990e13318bbe793e150545_.c)
 *     ??_E?$CTaskWrapper@V_lambda_497cdd3be1990e13318bbe793e150545_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180115B40 (--_E-$CTaskWrapper@V_lambda_497cdd3be1990e13318bbe793e150545_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801162B0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x180116700 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180080970.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v3);
    else
      return v4();
  }
  return result;
}
