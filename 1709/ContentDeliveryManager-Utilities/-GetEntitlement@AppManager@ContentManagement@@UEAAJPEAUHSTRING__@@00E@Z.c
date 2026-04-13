/*
 * XREFs of ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x18000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000DFD8 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@00EPEAPEAUIAppData@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::GetEntitlement(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 a5)
{
  int EntitlementInternal; // eax
  unsigned int v6; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *v8[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *)-2LL;
  v8[0] = 0LL;
  EntitlementInternal = ContentManagement::AppManager::GetEntitlementInternal(this, a2, a3, a4, a5, v8);
  v6 = EntitlementInternal;
  if ( EntitlementInternal >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)EntitlementInternal);
  if ( v8[0] )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppData *))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  return v6;
}
