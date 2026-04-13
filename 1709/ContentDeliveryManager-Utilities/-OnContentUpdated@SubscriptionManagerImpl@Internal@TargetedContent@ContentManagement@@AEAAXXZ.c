/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180041174
 * Callers:
 *     _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator() @ 0x180040288 (_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x1800284DC (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003DAC4 (-Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18003E148 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18003E274 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003E724 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18003EB88 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004155C (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041A5C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r12
  char *v3; // rdi
  int v4; // r13d
  const unsigned __int16 *v5; // rdx
  _QWORD *Ptr; // r15
  _QWORD *v7; // rsi
  CreativeFramework::SubscribedContentStore **v8; // rbx
  struct _FILETIME **v9; // r14
  CreativeFramework::SubscribedContentStore *v10; // rcx
  unsigned __int64 SubscriptionLastUpdated; // rax
  int v12; // eax
  const unsigned __int16 *v13; // r9
  wil::details::in1diag3 *v14; // rcx
  int SettingValue; // ebx
  struct _FILETIME *v16; // r14
  void **v17; // rdi
  void **v18; // r14
  void *v19; // rbx
  LPVOID v20; // rcx
  int v21; // eax
  LPVOID v22; // rcx
  unsigned int *v23; // [rsp+30h] [rbp-D8h]
  bool v24; // [rsp+48h] [rbp-C0h]
  LPVOID v25; // [rsp+50h] [rbp-B8h] BYREF
  bool v26[8]; // [rsp+58h] [rbp-B0h] BYREF
  char *v27; // [rsp+60h] [rbp-A8h]
  RTL_SRWLOCK *v28; // [rsp+68h] [rbp-A0h]
  LPVOID pv[7]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v31; // [rsp+C8h] [rbp-40h]
  int *v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h] BYREF
  char v35; // [rsp+E4h] [rbp-24h]
  int v36; // [rsp+108h] [rbp+0h] BYREF
  const char *v37; // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  char v39; // [rsp+120h] [rbp+18h]
  __int64 v40; // [rsp+128h] [rbp+20h]
  _BYTE v41[144]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v42; // [rsp+1C0h] [rbp+B8h]
  __int64 v43; // [rsp+1C8h] [rbp+C0h]
  __int64 v44; // [rsp+1D0h] [rbp+C8h]
  __int64 v45; // [rsp+1D8h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  pv[3] = (LPVOID)-2LL;
  v30[1] = 0LL;
  v30[2] = v30;
  v30[3] = 0LL;
  v31 = 0;
  v32 = &v36;
  v33 = &v34;
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v36 = 0;
  v37 = "SubscriptionManagerContentUpdatedActivity";
  v38 = 0LL;
  v40 = 1LL;
  v42 = 0LL;
  v43 = 0LL;
  memset_0(v41, 0, sizeof(v41));
  v44 = 0LL;
  v45 = 0LL;
  v30[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v30);
  v2 = this + 11;
  v28 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v27 = (char *)&this[11];
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  if ( this != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(this + 11);
  v3 = 0LL;
  v4 = 0;
  AcquireSRWLockShared(this + 11);
  pv[4] = &this[11];
  Ptr = this[12].Ptr;
  v7 = (_QWORD *)*Ptr;
  if ( (_QWORD *)*Ptr == Ptr )
    goto LABEL_37;
  while ( 1 )
  {
    v8 = (CreativeFramework::SubscribedContentStore **)(v7 + 2);
    v9 = (struct _FILETIME **)(v7 + 6);
    v3 += (__int64)(*(_QWORD *)(v7[6] + 16LL) - *(_QWORD *)(v7[6] + 8LL)) >> 3;
    v27 = v3;
    if ( v7[5] < 8uLL )
      v10 = (CreativeFramework::SubscribedContentStore *)(v7 + 2);
    else
      v10 = *v8;
    SubscriptionLastUpdated = (unsigned __int64)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                  v10,
                                                  v5);
    v5 = (const unsigned __int16 *)((*v9)[4].dwLowDateTime + ((unsigned __int64)(*v9)[4].dwHighDateTime << 32));
    if ( (unsigned int)SubscriptionLastUpdated + (HIDWORD(SubscriptionLastUpdated) << 32) <= (unsigned __int64)v5 )
      goto LABEL_33;
    (*v9)[4] = (struct _FILETIME)SubscriptionLastUpdated;
    if ( v7[5] >= 8uLL )
      v8 = (CreativeFramework::SubscribedContentStore **)*v8;
    LODWORD(v3) = 0;
    v25 = 0LL;
    memset(pv, 0, 24);
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)pv,
            L"%s\\%s",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
            v8);
    v14 = retaddr;
    if ( v12 < 0 )
      goto LABEL_36;
    v3 = (char *)pv[0];
    v25 = pv[0];
    v24 = 0;
    SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                     (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000001LL,
                     (const WCHAR *)pv[0],
                     L"UpdateDrivenByExpiration",
                     v13,
                     v26,
                     v23);
    if ( SettingValue >= 0 )
    {
      v24 = *(_DWORD *)v26 != 0;
      SettingValue = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg_NoOriginate(
        retaddr,
        (void *)0x124,
        (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)SettingValue,
        (__int64)"RegKey: %ws %ws",
        v3);
    }
    if ( SettingValue < 0 )
      break;
    if ( v3 )
      CoTaskMemFree(v3);
    v16 = *v9;
    v17 = (void **)v16[1];
    v18 = (void **)v16[2];
    if ( v17 != v18 )
    {
      while ( 1 )
      {
        v19 = *v17;
        pv[5] = v19;
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL))(v19);
        v20 = 0LL;
        v25 = 0LL;
        if ( !v19 )
          goto LABEL_23;
        if ( (*(int (__fastcall **)(void *, GUID *, LPVOID *))(*(_QWORD *)v19 + 24LL))(
               v19,
               &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
               &v25) >= 0 )
          break;
LABEL_26:
        v22 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
        if ( ++v17 == v18 )
        {
          v2 = v28;
          goto LABEL_32;
        }
      }
      v20 = v25;
LABEL_23:
      LOBYTE(v5) = v24;
      v21 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *))(*(_QWORD *)v20 + 48LL))(v20, v5);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v21);
      ++v4;
      goto LABEL_26;
    }
LABEL_32:
    v3 = v27;
LABEL_33:
    v7 = (_QWORD *)*v7;
    if ( v7 == Ptr )
      goto LABEL_37;
  }
  wil::details::in1diag3::_Throw_Hr(
    retaddr,
    (void *)0x1DF,
    (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
    (const char *)(unsigned int)SettingValue);
LABEL_36:
  wil::details::in1diag3::_Throw_Hr(
    v14,
    (void *)0x90,
    (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
    (const char *)(unsigned int)v12);
LABEL_37:
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v30,
    (int)v3,
    v4);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  v30[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v30);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
}
