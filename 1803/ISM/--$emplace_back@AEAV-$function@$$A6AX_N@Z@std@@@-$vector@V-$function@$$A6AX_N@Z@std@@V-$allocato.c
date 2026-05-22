/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x180007BE8
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800079B0 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAV?$function@$$A6AX_N@Z@std@@PEAV12@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@PEAV10@00AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180008B28 (--$_Uninitialized_copy_al_unchecked@PEAV-$function@$$A6AX_N@Z@std@@PEAV12@V-$allocator@V-$functi.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r14
  size_t v13; // rcx
  void *v14; // rax
  char *v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, char *); // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // r12
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-58h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) >> 6;
    v27 = v7;
    if ( v7 == 0x3FFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = (v4 - *a1) >> 6;
    v10 = v9 >> 1;
    if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x3FFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = v11 << 6;
      if ( v11 << 6 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
          std::_Default_allocate_traits<1>::_Fail();
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = (char *)&v12[8 * v7];
      *((_QWORD *)v15 + 7) = 0LL;
      v16 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
      if ( v16 )
        *((_QWORD *)v15 + 7) = (**v16)(v16, v15);
      std::_Uninitialized_copy_al_unchecked<std::function<void (bool)> *,std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v24 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[8 * v27]);
      std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(
        v25,
        v24);
      std::allocator<std::function<void (bool)>>::deallocate(v26, v12, v11);
      throw;
    }
    v18 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_33;
    v19 = (_QWORD *)a1[1];
    if ( v18 != v19 )
    {
      do
      {
        v20 = (_QWORD *)v18[7];
        if ( v20 )
        {
          LOBYTE(v17) = v20 != v18;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v20 + 32LL))(v20, v17);
          v18[7] = 0LL;
        }
        v18 += 8;
      }
      while ( v18 != v19 );
      v18 = (_QWORD *)*a1;
    }
    v21 = (__int64)(a1[2] - (_QWORD)v18) >> 6;
    if ( v21 <= 0x3FFFFFFFFFFFFFFLL )
    {
      if ( v21 << 6 < 0x1000 )
      {
LABEL_32:
        operator delete(v18);
LABEL_33:
        *a1 = v12;
        a1[1] = &v12[8 * v8];
        a1[2] = &v12[8 * v11];
        return a1[1] - 64LL;
      }
      if ( ((unsigned __int8)v18 & 0x1F) == 0 )
      {
        v22 = *(v18 - 1);
        if ( v22 < (unsigned __int64)v18 && (unsigned __int64)v18 - v22 - 8 <= 0x1F )
        {
          v18 = (_QWORD *)*(v18 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x3FFFFFFFFFFFFFFLL, v17);
    __debugbreak();
  }
  *(_QWORD *)(v5 + 56) = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v6 )
    *(_QWORD *)(v5 + 56) = (**v6)(v6, v5);
  a1[1] += 64LL;
  return a1[1] - 64LL;
}
