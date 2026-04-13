/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180092BB4
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x180092A30 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // rdi
  int ActivationFactory; // eax
  __int64 v4; // rbx
  HRESULT StringReference; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  HRESULT v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  HRESULT v19; // eax
  wil::details::in1diag3 *v20; // rcx
  LPVOID v21; // rbx
  PCWSTR StringRawBuffer; // rax
  int v23; // eax
  LPVOID v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  LPVOID v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  LPVOID ppv; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v31; // [rsp+40h] [rbp-21h] BYREF
  __int64 v32; // [rsp+48h] [rbp-19h] BYREF
  __int64 v33; // [rsp+50h] [rbp-11h] BYREF
  __int64 v34; // [rsp+58h] [rbp-9h] BYREF
  int v35; // [rsp+60h] [rbp-1h] BYREF
  __int64 v36; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v37[1] = -2LL;
  v2 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
    return;
  v37[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, v37);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_36;
  }
  v33 = 0LL;
  v4 = v37[0];
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                      0x36u,
                      (HSTRING_HEADER *)&string,
                      (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( StringReference < 0 )
  {
LABEL_36:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    goto LABEL_37;
  }
  v33 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 128LL))(
         v4,
         *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
         &v33);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x17A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_38;
  }
  v32 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v8 = WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.Package",
         0x28u,
         (HSTRING_HEADER *)&string,
         (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v8 < 0 )
  {
LABEL_38:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    goto LABEL_39;
  }
  v32 = 0LL;
  v9 = RoGetActivationFactory(
         *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
         &GUID_bb7966ba_e363_4f5d_b1bf_901fabfb603b,
         &v32);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x17C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v9);
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x17E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v34 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v32 + 224LL))(v32, v33, &v34);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_40;
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v35);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  if ( !v35 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070490LL);
    goto LABEL_43;
  }
  v36 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, 0LL, &v36);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x184,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_44;
  }
  v16 = v36;
  WindowsDeleteString(0LL);
  v31 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 208LL))(v16, &v31);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x186,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x18A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  ppv = 0LL;
  v19 = CoCreateInstance(
          &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
          0LL,
          1u,
          &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
          &ppv);
  v20 = retaddr;
  if ( v19 < 0 )
    goto LABEL_45;
  v21 = ppv;
  StringRawBuffer = WindowsGetStringRawBuffer(v31, 0LL);
  v23 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v21 + 40LL))(v21, StringRawBuffer);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  v24 = ppv;
  v25 = *((_QWORD *)this + 8);
  if ( v25 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (*(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v24 + 72LL))(
          v24,
          &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
          (char *)this + 64);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = ppv;
  v28 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)v27 + 56LL))(
          v27,
          &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
          v2);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v29);
    JUMPOUT(0x18009309CLL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  WindowsDeleteString(v31);
  v31 = 0LL;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v37[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
}
