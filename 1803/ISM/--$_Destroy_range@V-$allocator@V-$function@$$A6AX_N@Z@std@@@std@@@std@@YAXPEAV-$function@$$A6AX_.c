/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180008A6C
 * Callers:
 *     _std::_Uninitialized_copy_al_unchecked_std::function_void___cdecl(bool)______ptr64_std::function_void___cdecl(bool)______ptr64_std::allocator_std::function_void___cdecl(bool)______::_1_::catch$10 @ 0x1800E3798 (_std--_Uninitialized_copy_al_unchecked_std--function_void___cdecl(bool)______ptr64__ea_1800E3798.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::function<void (bool)>>>(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v2 = a2;
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 56);
      if ( v4 )
      {
        LOBYTE(a2) = v4 != v3;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
        *(_QWORD *)(v3 + 56) = 0LL;
      }
      v3 += 64LL;
    }
    while ( v3 != v2 );
  }
  return result;
}
