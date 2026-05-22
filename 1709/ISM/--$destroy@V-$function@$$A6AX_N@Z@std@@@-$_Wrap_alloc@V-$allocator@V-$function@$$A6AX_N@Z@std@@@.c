/*
 * XREFs of ??$destroy@V?$function@$$A6AX_N@Z@std@@@?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV?$function@$$A6AX_N@Z@1@@Z @ 0x180008C54
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$136 @ 0x1800CC7F0 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_1800CC7F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 56);
  v3 = a2;
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return result;
}
