/*
 * XREFs of ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002DB18
 * Callers:
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002DC90 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002DE80 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18002E1D0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180028748 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x180028870 (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x180028938 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 */

__int64 __fastcall ContentManagement::GetExistingStringSettingRemoveOnFailure(
        const WCHAR *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  int DoesSettingExist; // ebx
  __int64 v7; // rdx
  int StringSetting; // eax
  const unsigned __int16 *v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)a3 = 0LL;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       this,
                       L"LastCreativeBatchId",
                       (unsigned __int16 *)&v12,
                       (bool *)a4);
  if ( DoesSettingExist < 0 )
  {
    v7 = 622LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    return (unsigned int)DoesSettingExist;
  }
  if ( !(_BYTE)v12 )
  {
    DoesSettingExist = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)0x80070490LL);
    return (unsigned int)DoesSettingExist;
  }
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    this,
                    L"LastCreativeBatchId",
                    0LL,
                    a3);
  if ( StringSetting >= 0 )
    return 0LL;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x271,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)StringSetting);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(this, L"LastCreativeBatchId", v10);
  if ( DoesSettingExist < 0 )
  {
    v7 = 629LL;
    goto LABEL_3;
  }
  return 1LL;
}
