/*
 * XREFs of ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180097760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800970C8 (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180097DDC (-clear@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

__int64 __fastcall CDeviceGraphStore::GetSubmixesForApplication(__int64 a1, __int64 a2, int a3, __int64 **a4)
{
  unsigned int SubmixHelper; // ebx
  const char *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  __int64 result; // rax
  __int128 v10; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v15; // [rsp+B8h] [rbp+10h] BYREF
  int v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  try
  {
    std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::clear(a4);
    *(_QWORD *)&v10 = &v16;
    *((_QWORD *)&v10 + 1) = &v15;
    v11 = off_1800F4458;
    v12 = v10;
    v13 = &v11;
    SubmixHelper = CDeviceGraphStore::GetSubmixHelper(a1, a4, (__int64)&v11);
    if ( v13 )
    {
      v8 = &v11;
      LOBYTE(v8) = v13 != &v11;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v13)[4])(v13, v8);
    }
    result = SubmixHelper;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27F,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v7);
  }
  return result;
}
