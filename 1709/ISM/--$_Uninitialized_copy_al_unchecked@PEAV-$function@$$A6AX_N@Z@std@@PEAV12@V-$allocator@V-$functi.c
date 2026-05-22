/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked@PEAV?$function@$$A6AX_N@Z@std@@PEAV12@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180008C84
 * Callers:
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x18000868C (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Uninitialized_copy_al_unchecked<std::function<void (bool)> *,std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD *); // rcx
  _QWORD *v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( v3 )
      {
        v3[7] = 0LL;
        v6 = *(__int64 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 56);
        if ( v6 )
          v3[7] = (**v6)(v6, v3);
      }
      v3 += 8;
      v8 = v3;
      a1 += 64LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>,std::function<void (bool)> *>(a3, v8);
    throw;
  }
  return v3;
}
