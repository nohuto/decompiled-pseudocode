/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K0@Z @ 0x1800101F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        unsigned __int64 a5,
        HSTRING string)
{
  int v9; // esi
  HRESULT Instance; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  PCWSTR StringRawBuffer; // r15
  __int64 *v14; // rbx
  __int64 v15; // rdi
  PCWSTR v16; // r14
  PCWSTR v17; // rax
  int v18; // eax
  const char *v19; // r9
  wil::details::in1diag3 *v20; // rcx
  __int64 result; // rax
  int v22; // [rsp+90h] [rbp-48h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-40h] BYREF
  LPVOID ppv[2]; // [rsp+A0h] [rbp-38h] BYREF
  _DWORD v25[4]; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  ppv[1] = (LPVOID)-2LL;
  try
  {
    v9 = 0;
    ppv[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_0c9281f9_6da1_4006_8729_de6e6b61581c,
                 0LL,
                 0x17u,
                 &GUID_df8e9480_ca73_448e_b8f0_da000f581428,
                 ppv);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)Instance);
    }
    else
    {
      v23 = 0LL;
      v11 = (*(__int64 (__fastcall **)(LPVOID, __int64 **))(*(_QWORD *)ppv[0] + 24LL))(ppv[0], &v23);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v25[0] = 1;
        v25[1] = a5;
        StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
        v22 = 0;
        v25[2] = HIDWORD(a5);
        v14 = v23;
        v15 = *v23;
        LOBYTE(v9) = a4 != 0;
        v16 = WindowsGetStringRawBuffer(a2, 0LL);
        v17 = WindowsGetStringRawBuffer(string, 0LL);
        v18 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, PCWSTR, _QWORD, int, PCWSTR, PCWSTR, PCWSTR, _DWORD *, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, int, int *))(v15 + 64))(
                v14,
                L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                v17,
                0LL,
                1,
                v16,
                StringRawBuffer,
                StringRawBuffer,
                v25,
                0,
                0,
                0LL,
                0LL,
                0LL,
                v9,
                &v22);
        v20 = retaddr;
        if ( v18 >= 0 )
        {
          if ( v23 )
            (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
          if ( ppv[0] )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
          return 0LL;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v20,
          (void *)0x2AA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v18);
        JUMPOUT(0x18001041ALL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x291,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2AD,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                           v19);
  }
  return result;
}
