/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180224840
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180224640 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetExperienceManager(
        const unsigned __int16 *a1,
        struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **a2)
{
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  UAPViewWrapper *v12; // [rsp+30h] [rbp-9h] BYREF
  __int64 v13; // [rsp+38h] [rbp-1h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp+7h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp+17h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *a2 = 0LL;
  ppv[0] = 0LL;
  v15 = L"Windows.Internal.ShellExperience.VirtualTouchpad";
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               ppv);
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v13 = 0LL;
    v5 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v6 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &v13);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v6);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      goto LABEL_13;
    }
    v12 = 0LL;
    v7 = v13;
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, &v15);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, UAPViewWrapper **))(*(_QWORD *)v7 + 48LL))(
           v7,
           *(_QWORD *)(v8 + 24),
           &v12);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **))v12)(
             v12,
             &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414,
             a2);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v10 = 99LL;
    }
    else
    {
      v10 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)Instance);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v4;
}
