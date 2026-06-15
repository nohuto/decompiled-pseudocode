/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x18001C880
 * Callers:
 *     <none>
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Delete_this @ 0x18001FCC0 (std--_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this @ 0x180045C80 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Delete_this.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<std::function<void (void)>>::_Destroy(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  __int64 (__fastcall *v4)(void *); // rax

  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 72);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(void *))(*v3 + 32LL);
    if ( v4 == std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Delete_this(v3);
    }
    else if ( v4 == std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this(v3);
    }
    else
    {
      LOBYTE(a2) = v3 != v2;
      ((void (__fastcall *)(_QWORD *, __int64))v4)(v3, a2);
    }
    v2[7] = 0LL;
  }
}
