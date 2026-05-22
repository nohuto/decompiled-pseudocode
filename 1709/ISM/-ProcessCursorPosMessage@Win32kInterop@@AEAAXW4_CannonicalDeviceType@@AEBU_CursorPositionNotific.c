/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18000FA1C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+50h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)Win32kInterop::s_pInterop + 7) + 80LL))(
                      *((_QWORD *)Win32kInterop::s_pInterop + 7),
                      &v12);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v6 = 685;
    goto LABEL_18;
  }
  v7 = v12;
  v8 = v11;
  if ( a3[2] )
  {
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    LODWORD(result) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(
                        v7,
                        a3[2],
                        0LL,
                        &v11);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_19;
      v6 = 693;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    LODWORD(result) = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v11);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_19;
      v6 = 689;
      goto LABEL_18;
    }
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *a3, a3[1]);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v6 = 696;
LABEL_18:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, result);
LABEL_19:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return result;
}
