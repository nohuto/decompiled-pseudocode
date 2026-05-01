/*
 * XREFs of _lambda_4c0281b189a4f50ab192cc99e41387bc_::__lambda_4c0281b189a4f50ab192cc99e41387bc_ @ 0x1800F89B8
 * Callers:
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$31 @ 0x1800B3574 (_CApplicationManager--_HandleActivation2_--_1_--dtor$31.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec____::_1_::dtor$1 @ 0x1801030EC (_CIAMGlobals--QueueViewManagementTask__lambda_6ff91a5acb023164635626d4f2ce69ec____--_1_--dtor$1.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac____::_1_::dtor$1 @ 0x180103273 (_CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac____--_1_--dtor$1.c)
 *     _CMultitaskingViewHostBase_IAllUpViewHost_::DismissView_::_1_::dtor$4 @ 0x18020ACAB (_CMultitaskingViewHostBase_IAllUpViewHost_--DismissView_--_1_--dtor$4.c)
 *     _CMultitaskingViewHostBase_IAltTabViewHost_::DismissView_::_1_::dtor$4 @ 0x180217093 (_CMultitaskingViewHostBase_IAltTabViewHost_--DismissView_--_1_--dtor$4.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$4 @ 0x1802187A3 (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_4c0281b189a4f50ab192cc99e41387bc_::__lambda_4c0281b189a4f50ab192cc99e41387bc_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
