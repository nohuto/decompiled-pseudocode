/*
 * XREFs of ?ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNotification@@@Z @ 0x18000F720
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessRawInputReport(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[356]; // [rsp+38h] [rbp-C8h] BYREF

  v3 = Win32kInterop::s_pInterop;
  if ( a2 == 1 )
  {
    memset(v10, 0, sizeof(v10));
    HIDWORD(v10[0]) = *(_DWORD *)a3;
    LODWORD(v10[5]) = 2848;
    LODWORD(v10[0]) = 4;
    LODWORD(v10[1]) = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v5 = *((_QWORD *)v3 + 8);
    v10[2] = PerformanceCount.QuadPart;
    v6 = *(_QWORD *)(a3 + 16);
    v10[87] = *(_QWORD *)v6;
    LODWORD(v10[88]) = *(_DWORD *)(v6 + 8);
    BYTE3(v10[86]) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, v10);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 570, v7);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
}
