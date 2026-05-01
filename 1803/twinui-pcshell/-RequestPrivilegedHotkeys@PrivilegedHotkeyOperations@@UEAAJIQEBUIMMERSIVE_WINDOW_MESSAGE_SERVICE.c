/*
 * XREFs of ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1801A0400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServiceProvider@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019CE6C (--$As@UIServiceProvider@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PrivilegedHotkeyOperations::RequestPrivilegedHotkeys(
        Microsoft::WRL::Details::WeakReferenceImpl **this,
        unsigned int a2,
        const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *a3,
        struct IImmersiveWindowMessageNotification *a4,
        unsigned int *a5)
{
  unsigned int *v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  RTL_SRWLOCK *v14; // rbx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v18[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IInspectable *v20; // [rsp+80h] [rbp+30h] BYREF

  v18[1] = (RTL_SRWLOCK *)-2LL;
  v9 = a5;
  *a5 = 0;
  v20 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>(this + 7, &v20);
  if ( v20 )
  {
    v17 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IInspectable>::As<IServiceProvider>(&v20, &v17);
    v10 = v11;
    if ( v11 >= 0 )
    {
      a5 = 0LL;
      v12 = v17;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      v13 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, unsigned int **))(*(_QWORD *)v12 + 24LL))(
              v12,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &a5);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v14 = (RTL_SRWLOCK *)this[6];
        v18[0] = v14;
        if ( v14 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v14);
        AcquireSRWLockExclusive(v14 + 6);
        EnableIAMAccess(v14[5].Ptr, 1LL);
        v15 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *, struct IImmersiveWindowMessageNotification *, unsigned int *))(*(_QWORD *)a5 + 56LL))(
                a5,
                a2,
                a3,
                a4,
                v9);
        v10 = v15;
        if ( v15 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F0,
            (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
            (const char *)(unsigned int)v15);
        IamAccess::SyncIamAccess::~SyncIamAccess(v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E6,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v20);
  return v10;
}
