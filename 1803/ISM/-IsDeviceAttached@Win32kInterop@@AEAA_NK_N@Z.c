/*
 * XREFs of ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180013BD8
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x180013CB8 (-ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x180013EC8 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180014018 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18001420C (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x180014AA8 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 *     std::_Func_impl_no_alloc__lambda_bb3e1d5ee85c457275ba85e88647bcb6__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x180016AC0 (std--_Func_impl_no_alloc__lambda_bb3e1d5ee85c457275ba85e88647bcb6__void__MIT_KEYBOA_ea_180016AC0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Win32kInterop::IsDeviceAttached(Win32kInterop *this, unsigned int a2, char a3)
{
  unsigned int v4; // r9d
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 != *((_DWORD *)this + 20) )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      while ( *(_DWORD *)(16LL * v4 + *((_QWORD *)this + 8)) != a2 )
      {
        if ( ++v4 >= *((_DWORD *)this + 18) )
          goto LABEL_5;
      }
      return 1;
    }
  }
LABEL_5:
  if ( !a3 )
    return 0;
  v10 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_b9402cea_5976_45e1_baa3_22754843b1af,
         &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v10 + 24LL))(v10, a2, &v11);
  v7 = v10;
  if ( v6 < 0 )
  {
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0;
  }
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 1;
}
