/*
 * XREFs of ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x18008AC28
 * Callers:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x18008AD60 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18008AEB0 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x1800284DC (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x18008AAD8 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     _Init_thread_footer @ 0x1800B4038 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800B4098 (_Init_thread_header.c)
 */

char __fastcall CreativeFramework::Policy::ShouldUseInternal(CreativeFramework::Policy *this)
{
  char v1; // bl
  ContentDeliveryManager::AccountTokens *v2; // rcx
  const unsigned __int16 *v4; // r9
  int SettingValue; // eax
  unsigned int *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(&stru_18015DDC0);
  v1 = 0;
  if ( !byte_18015DD2C )
  {
    ReleaseSRWLockShared(&stru_18015DDC0);
    AcquireSRWLockExclusive(&stru_18015DDC0);
    if ( byte_18015DD2C )
    {
      v1 = byte_18015DD2D;
LABEL_10:
      ReleaseSRWLockExclusive(&stru_18015DDC0);
      return v1;
    }
    v2 = (ContentDeliveryManager::AccountTokens *)(unsigned int)tls_index;
    if ( __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL)
      || (Init_thread_header(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA),
          __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA != -1) )
    {
LABEL_5:
      if ( !`CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled
        && ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUserCached(v2) )
      {
        v1 = 1;
      }
      byte_18015DD2D = v1;
      byte_18015DD2C = 1;
      goto LABEL_10;
    }
    SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                     (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                     (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                     L"ContentDeliveryAllowedOverride",
                     v4,
                     &v8,
                     v6);
    if ( SettingValue >= 0 )
    {
      if ( v8 )
      {
        `CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled = 1;
        if ( v8 != 1 )
          goto LABEL_18;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)SettingValue);
    }
    `CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled = 0;
LABEL_18:
    Init_thread_footer(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA);
    goto LABEL_5;
  }
  v1 = byte_18015DD2D;
  ReleaseSRWLockShared(&stru_18015DDC0);
  return v1;
}
