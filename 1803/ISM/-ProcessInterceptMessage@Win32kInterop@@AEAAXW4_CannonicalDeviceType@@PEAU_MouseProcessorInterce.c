/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180014018
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180013600 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessInterceptMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char v8; // al
  const char *v9; // r9
  bool v10; // zf
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER v13; // [rsp+48h] [rbp-C0h]
  int v14; // [rsp+50h] [rbp-B8h]
  int v15; // [rsp+228h] [rbp+120h]
  char v16; // [rsp+239h] [rbp+131h]
  __int16 v17; // [rsp+242h] [rbp+13Ah]
  __int16 v18; // [rsp+244h] [rbp+13Ch]
  __int16 v19; // [rsp+246h] [rbp+13Eh]
  int v20; // [rsp+24Ch] [rbp+144h]
  int v21; // [rsp+250h] [rbp+148h]
  char v22; // [rsp+6F0h] [rbp+5E8h]
  int v23; // [rsp+6F4h] [rbp+5ECh]
  char v24; // [rsp+6F8h] [rbp+5F0h]
  char v25; // [rsp+6FAh] [rbp+5F2h]
  char v26; // [rsp+6FBh] [rbp+5F3h]
  wil::details::in1diag3 *retaddr; // [rsp+720h] [rbp+618h]

  v3 = Win32kInterop::s_pInterop;
  memset_0(v12, 0, 0x6C8uLL);
  v14 = 1736;
  if ( !a2 )
  {
    v6 = *(_DWORD *)a3;
    InputETW::Win32kInterop::ReceivedInterceptMessage(*(_DWORD *)a3);
    if ( Win32kInterop::IsDeviceAttached(v3, v6, 0) )
    {
      v14 = 1736;
      v12[0] = 2;
      v12[1] = v6;
      v12[2] = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      v7 = *((_QWORD *)v3 + 7);
      v13 = PerformanceCount;
      v17 = *(_WORD *)(a3 + 24);
      v18 = *(_WORD *)(a3 + 26);
      v19 = *(_WORD *)(a3 + 28);
      v20 = *(_DWORD *)(a3 + 32);
      v21 = *(_DWORD *)(a3 + 36);
      v8 = *(_BYTE *)(a3 + 40) & 1;
      v16 = 1;
      v22 = v8;
      v23 = 4;
      if ( (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 24LL))(v7, v12) >= 0 )
      {
        switch ( v23 )
        {
          case 1:
            *(_DWORD *)(a3 + 48) = 0;
            break;
          case 2:
            v10 = v25 == 0;
            *(_DWORD *)(a3 + 48) = 2;
            if ( !v10 )
              *(_DWORD *)(a3 + 68) = 16;
            v10 = v24 == 0;
            *(_WORD *)(a3 + 60) = v17;
            *(_DWORD *)(a3 + 52) = v20;
            *(_DWORD *)(a3 + 56) = v21;
            *(_DWORD *)(a3 + 64) = v15;
            if ( !v10 )
              *(_DWORD *)(a3 + 68) |= 0x20u;
            if ( v26 )
              *(_DWORD *)(a3 + 68) |= 0x40u;
            break;
          case 4:
            *(_DWORD *)(a3 + 48) = 1;
            break;
          default:
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x248,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
              v9);
            JUMPOUT(0x180014208LL);
        }
      }
      else
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
  }
}
