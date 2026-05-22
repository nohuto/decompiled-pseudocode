/*
 * XREFs of ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x180010034
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessRawInputMessage(__int64 a1, int a2, _DWORD *a3)
{
  Win32kInterop *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[16]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v12[356]; // [rsp+58h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B88h] [rbp+A88h]

  if ( !a2 )
  {
    v10[1] = -2LL;
    v4 = Win32kInterop::s_pInterop;
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[5]) = 2848;
    LODWORD(v12[0]) = 4096;
    HIDWORD(v12[0]) = a3[56];
    LODWORD(v12[1]) = a3[54];
    v10[0] = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 7) + 80LL))(*((_QWORD *)v4 + 7), v10);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v9 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10[0] + 48LL))(
           v10[0],
           HIDWORD(v12[0]),
           0LL,
           &v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x411,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    *(_OWORD *)&v12[81] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 40LL))(v9, v11);
    HIDWORD(v12[88]) = a3[51];
    LODWORD(v12[89]) = a3[52];
    LODWORD(v12[88]) = a3[50];
    HIDWORD(v12[89]) = a3[53];
    (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD *))(**((_QWORD **)v4 + 7) + 112LL))(*((_QWORD *)v4 + 7), a3, v12);
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
