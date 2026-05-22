/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x18000868C
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007AB0 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAV?$function@$$A6AX_N@Z@std@@PEAV12@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180008C84 (--$_Uninitialized_copy_al_unchecked@PEAV-$function@$$A6AX_N@Z@std@@PEAV12@V-$allocator@V-$functi.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, unsigned __int64); // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  char *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, char *); // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-58h]
  _QWORD *v27; // [rsp+A0h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (__int64)(v5 - *a1) >> 6;
    v26 = v7;
    if ( v7 == 0x3FFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = (__int64)(v4 - *a1) >> 6;
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
    v12 = std::_Allocate(v11, 0x40uLL);
    v13 = v12;
    v27 = v12;
    try
    {
      v14 = (char *)&v12[8 * v7];
      if ( v14 )
      {
        *((_QWORD *)v14 + 7) = 0LL;
        v15 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
        if ( v15 )
          *((_QWORD *)v14 + 7) = (**v15)(v15, v14);
      }
      std::_Uninitialized_copy_al_unchecked<std::function<void (bool)> *,std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v23 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v27[8 * v26]);
      std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(v24, v23);
      std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::deallocate(v25, v27, v11);
      throw;
    }
    v17 = *a1;
    if ( !*a1 )
      goto LABEL_31;
    v18 = a1[1];
    while ( v17 != v18 )
    {
      v19 = *(_QWORD *)(v17 + 56);
      if ( v19 )
      {
        LOBYTE(v16) = v19 != v17;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v16);
        *(_QWORD *)(v17 + 56) = 0LL;
      }
      v17 += 64LL;
    }
    v20 = *a1;
    v21 = (__int64)(a1[2] - *a1) >> 6;
    if ( v21 <= 0x3FFFFFFFFFFFFFFLL )
    {
      if ( v21 << 6 < 0x1000 )
      {
LABEL_29:
        operator delete((void *)v20);
LABEL_31:
        *a1 = (unsigned __int64)v13;
        a1[1] = (unsigned __int64)&v13[8 * v8];
        a1[2] = (unsigned __int64)&v13[8 * v11];
        return;
      }
      if ( (v20 & 0x1F) == 0 )
      {
        v22 = *(_QWORD *)(v20 - 8);
        if ( v22 < v20 )
        {
          v20 = v20 - v22 - 8;
          if ( v20 <= 0x1F )
          {
            v20 = v22;
            goto LABEL_29;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v20);
    __debugbreak();
  }
  if ( v5 )
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    v6 = *(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(a2 + 56);
    if ( v6 )
      *(_QWORD *)(v5 + 56) = (**v6)(v6, v5);
  }
  a1[1] += 64LL;
}
