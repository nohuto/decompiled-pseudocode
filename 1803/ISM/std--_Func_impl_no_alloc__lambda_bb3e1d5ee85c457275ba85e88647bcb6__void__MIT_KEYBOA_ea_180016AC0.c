/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb3e1d5ee85c457275ba85e88647bcb6__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x180016AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bb3e1d5ee85c457275ba85e88647bcb6__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  Win32kInterop *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v8; // [rsp+40h] [rbp-C0h]
  int v9; // [rsp+48h] [rbp-B8h]
  char v10; // [rsp+231h] [rbp+131h]
  __int16 v11; // [rsp+238h] [rbp+138h]
  __int16 v12; // [rsp+23Ah] [rbp+13Ah]
  __int16 v13; // [rsp+23Ch] [rbp+13Ch]
  int v14; // [rsp+240h] [rbp+140h]

  v2 = *a2;
  v3 = *(Win32kInterop **)(a1 + 8);
  memset_0(v7, 0, 0x6C8uLL);
  v9 = 1736;
  v4 = *(_DWORD *)v2;
  if ( Win32kInterop::IsDeviceAttached(v3, *(_DWORD *)v2, 0) )
  {
    v7[1] = v4;
    v7[0] = 4;
    v7[2] = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v5 = *((_QWORD *)v3 + 7);
    v8 = PerformanceCount;
    v11 = *(_WORD *)(v2 + 8);
    v12 = *(_WORD *)(v2 + 10);
    v13 = *(_WORD *)(v2 + 12);
    v14 = *(_DWORD *)(v2 + 16);
    v10 = 1;
    if ( (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 24LL))(v5, v7) < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
}
