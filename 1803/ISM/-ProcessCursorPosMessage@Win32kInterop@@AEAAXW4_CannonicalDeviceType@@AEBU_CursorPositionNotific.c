/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18001420C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800134C0 (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, unsigned int *a3)
{
  Win32kInterop *v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v13 = a1;
  v4 = Win32kInterop::s_pInterop;
  InputETW::Win32kInterop::ReceivedCursorPosMessage(a3[2]);
  v13 = 0LL;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), &v14) < 0 )
    goto LABEL_22;
  v5 = a3[2];
  if ( v5 )
  {
    if ( !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
      goto LABEL_11;
    v11 = v14;
    v12 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, a3[2], 0LL, &v13);
  }
  else
  {
    v6 = v14;
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, &v13);
  }
  if ( v8 < 0 || (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, *a3, a3[1]) < 0 )
  {
LABEL_22:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
LABEL_11:
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
