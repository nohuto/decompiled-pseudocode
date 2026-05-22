/*
 * XREFs of std::_Func_impl__lambda_88af2656fa788d7c41029a7c257ad8ca__std::allocator_int__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call @ 0x180036010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl__lambda_88af2656fa788d7c41029a7c257ad8ca__std::allocator_int__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  char v4; // dl
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a2 + 24LL))(*a2, &v6);
  v4 = 0;
  if ( v3 >= 0 )
    return v6 == *(_QWORD *)(a1 + 8);
  return v4;
}
