/*
 * XREFs of _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x18017A340
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_417362b0a1391b76000680eec230619f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017A9B0 (--_G-$CTaskWrapper@V_lambda_417362b0a1391b76000680eec230619f_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18017AB4C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$9 @ 0x18017AF67 (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$9.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A50C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
