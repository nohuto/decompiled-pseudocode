/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18000EB98
 * Callers:
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x18000C550 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18000C760 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18000C8F0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18000CA90 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180016C04 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rsi
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  PVOID v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, char *); // rcx
  PVOID v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v2 = this + 11;
  AcquireSRWLockShared(this + 11);
  Ptr = this[10].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v2);
    if ( !this[10].Ptr )
    {
      v15 = 0LL;
      string = 0LL;
      v6 = WindowsCreateStringReference(
             L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
             0x47u,
             &hstringHeader,
             &string);
      if ( v6 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
        JUMPOUT(0x18000ED35LL);
      }
      v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
             string,
             &v15);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 486LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v7);
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v11)[2])(v11);
        }
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        return v8;
      }
      v10 = this[10].Ptr;
      if ( v10 )
      {
        this[10].Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v7 = (**v15)(v15, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, (char *)&this[10]);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 487LL;
        goto LABEL_12;
      }
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v13)[2])(v13);
      }
    }
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  v14 = this[10].Ptr;
  if ( v14 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 8LL))(v14);
  *a2 = this[10].Ptr;
  return 0LL;
}
