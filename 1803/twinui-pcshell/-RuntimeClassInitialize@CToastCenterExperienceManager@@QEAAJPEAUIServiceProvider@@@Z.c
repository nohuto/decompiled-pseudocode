/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180166278
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180161854 (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180162830 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180169C38 (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180306F94 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180307E30 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803092EC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  int ready; // eax
  __int64 v12; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v13; // r8
  __int64 v14; // rax
  __int64 v16[2]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v18; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER v19; // [rsp+68h] [rbp-9h] BYREF
  HSTRING v20; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v16[1] = -2LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v19,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CToastCenterExperienceManager *)((char *)this + 96),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v20,
         v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v6 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 424);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 272LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_33;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 53) + 32LL))(
         *((_QWORD *)this + 53),
         -(__int64)(this != 0LL) & ((unsigned __int64)this + 24),
         (char *)this + 432);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 273LL;
    goto LABEL_21;
  }
  v9 = *((_QWORD *)this + 55);
  if ( v9 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 440);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 275LL;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (char *)this + 488);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 277LL;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 61) + 24LL))(
         *((_QWORD *)this + 61),
         -(__int64)(this != 0LL) & ((unsigned __int64)this + 40),
         (char *)this + 464);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 278LL;
    goto LABEL_21;
  }
  v10 = (_QWORD *)((char *)this + 480);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 480);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 282LL;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
         *v10,
         0LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
         (char *)this + 456);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 284LL;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
         *v10,
         26LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
         (char *)this + 460);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 285LL;
    goto LABEL_21;
  }
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
  ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IRealmActivationHistory,
            &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
            (char *)this + 504);
  v5 = ready;
  if ( ready >= 0 )
  {
    ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
    v5 = ready;
    if ( ready >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
      ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                (ExperienceManagerUtils *)a2,
                (struct IServiceProvider *)this + 11,
                v13);
      v5 = ready;
      if ( ready >= 0 )
      {
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&v19,
                (const WCHAR **)&off_18034C418);
        ready = CSingleViewShellExperience::AddTestAumid(
                  (CToastCenterExperienceManager *)((char *)this + 96),
                  *(HSTRING *)(v14 + 24));
        v5 = ready;
        if ( ready >= 0 )
        {
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 59, (__int64)a2);
          v6 = 0;
          v5 = 0;
          goto LABEL_32;
        }
        v12 = 294LL;
      }
      else
      {
        v12 = 292LL;
      }
    }
    else
    {
      v12 = 290LL;
    }
  }
  else
  {
    v12 = 288LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)ready);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
LABEL_33:
  if ( v6 )
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
  return v5;
}
