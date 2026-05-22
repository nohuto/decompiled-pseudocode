/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x18000F838
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::ProcessInterceptMessage(__int64 a1, int a2, int *a3)
{
  Win32kInterop *v3; // rsi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  const char *v11; // r9
  bool v12; // zf
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v14[356]; // [rsp+40h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B70h] [rbp+A68h]

  v3 = Win32kInterop::s_pInterop;
  result = (__int64)memset(v14, 0, sizeof(v14));
  if ( !a2 )
  {
    v7 = *a3;
    LODWORD(v14[0]) = 2;
    LODWORD(v14[5]) = 2848;
    HIDWORD(v14[0]) = v7;
    LODWORD(v14[1]) = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v8 = *((_QWORD *)v3 + 8);
    v14[2] = PerformanceCount.QuadPart;
    *(_DWORD *)((char *)&v14[87] + 2) = a3[6];
    HIWORD(v14[87]) = *((_WORD *)a3 + 14);
    HIDWORD(v14[88]) = a3[8];
    LODWORD(v14[89]) = a3[9];
    v9 = a3[10] & 1;
    BYTE3(v14[86]) = 1;
    LOBYTE(v14[345]) = v9;
    HIDWORD(v14[345]) = 4;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, v14);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 623, result);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    switch ( HIDWORD(v14[345]) )
    {
      case 1:
        a3[12] = 0;
        break;
      case 2:
        v12 = BYTE2(v14[346]) == 0;
        a3[12] = 2;
        if ( !v12 )
          a3[17] = 16;
        v12 = LOBYTE(v14[346]) == 0;
        *((_WORD *)a3 + 30) = WORD1(v14[87]);
        a3[13] = HIDWORD(v14[88]);
        a3[14] = v14[89];
        result = LODWORD(v14[84]);
        a3[16] = v14[84];
        if ( !v12 )
          a3[17] |= 0x20u;
        if ( BYTE3(v14[346]) )
          a3[17] |= 0x40u;
        break;
      case 4:
        a3[12] = 1;
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x296,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          v11);
        __debugbreak();
    }
  }
  return result;
}
