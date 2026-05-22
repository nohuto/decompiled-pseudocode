/*
 * XREFs of ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x180014AA8
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180013560 (-ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessRawInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-9Ch]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-88h]
  __int128 v22; // [rsp+238h] [rbp+138h]
  __int16 v23; // [rsp+26Ah] [rbp+16Ah]
  int v24; // [rsp+270h] [rbp+170h]
  int v25; // [rsp+274h] [rbp+174h]
  int v26; // [rsp+278h] [rbp+178h]
  int v27; // [rsp+27Ch] [rbp+17Ch]
  wil::details::in1diag3 *retaddr; // [rsp+748h] [rbp+648h]

  if ( a2 )
    return;
  v16[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  v5 = *(_DWORD *)(a3 + 208);
  InputETW::Win32kInterop::ReceivedRawInputMessage(v5);
  if ( !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
    return;
  memset_0(&v18, 0, 0x6C8uLL);
  v21 = 1736;
  v18 = 4096;
  v19 = v5;
  v20 = *(_DWORD *)(a3 + 200);
  v16[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), v16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x422,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v16[0] + 48LL))(v16[0], v19, 0LL, &v15);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x425,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180014D38LL);
  }
  v22 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 40LL))(v15, v17);
  v23 = *(_WORD *)(a3 + 176);
  v25 = *(_DWORD *)(a3 + 188);
  v26 = *(_DWORD *)(a3 + 192);
  v24 = *(_DWORD *)(a3 + 184);
  v27 = *(_DWORD *)(a3 + 196);
  v14 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 96LL))(
    *((_QWORD *)v4 + 6),
    a3,
    *((_QWORD *)v4 + 27),
    &v14);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v18);
  v9 = *((_QWORD *)v4 + 27);
  v10 = v14;
  if ( v9 != v14 )
  {
    v11 = v14;
    if ( v14 )
    {
      (*(void (**)(void))(*(_QWORD *)v14 + 8LL))();
      v9 = *((_QWORD *)v4 + 27);
      v10 = v14;
    }
    *((_QWORD *)v4 + 27) = v11;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = v14;
    }
  }
  if ( v10 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
