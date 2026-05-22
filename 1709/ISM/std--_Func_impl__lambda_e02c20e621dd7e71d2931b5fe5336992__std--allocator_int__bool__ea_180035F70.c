/*
 * XREFs of std::_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std::allocator_int__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call @ 0x180035F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180035B70 (-FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std::allocator_int__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  bool v4; // bl
  _QWORD v6[10]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF

  v2 = *a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v6[0] = off_1800D4B70;
  v6[1] = v3;
  v6[7] = v6;
  v4 = (int)ViewHelper::FindWindowA(v2, (__int64)v6, &v7) >= 0;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
