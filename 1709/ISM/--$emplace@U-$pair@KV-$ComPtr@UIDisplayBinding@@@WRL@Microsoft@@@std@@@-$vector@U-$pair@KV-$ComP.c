/*
 * XREFs of ??$emplace@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@$$QEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@1@@Z @ 0x18001F7CC
 * Callers:
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x18001C7BC (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@PEAU12@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800201F8 (--$_Uninitialized_move_al_unchecked@PEAU-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::emplace<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  __int64 v7; // r13
  _DWORD *v8; // r15
  _DWORD *v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 *v14; // rax
  char *v15; // rdx
  char *v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // rcx
  int *v27; // r15
  __int64 *v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rdx
  _DWORD *v32; // r15
  __int64 **v33; // r14
  __int64 *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rcx
  _QWORD *result; // rax
  __int64 v38; // rcx
  __int64 *v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+40h] [rbp-48h]
  char v41; // [rsp+48h] [rbp-40h] BYREF
  __int64 v42; // [rsp+50h] [rbp-38h]
  __int64 *v43; // [rsp+90h] [rbp+8h]
  int v44; // [rsp+90h] [rbp+8h]
  __int64 *v46; // [rsp+A0h] [rbp+18h] BYREF

  v42 = -2LL;
  v7 = (__int64)(a3 - *a1) >> 4;
  v8 = (_DWORD *)a1[1];
  v9 = (_DWORD *)a1[2];
  if ( v9 == v8 )
  {
    v10 = (__int64)((__int64)v8 - *a1) >> 4;
    if ( v10 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v40 = v10 + 1;
    v11 = (__int64)((__int64)v9 - *a1) >> 4;
    v12 = v11 >> 1;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v12 + v11;
      if ( v12 + v11 < v10 + 1 )
        v13 = v10 + 1;
    }
    else
    {
      v13 = v10 + 1;
    }
    v14 = (__int64 *)std::_Allocate(v13, 0x10uLL);
    v43 = v14;
    v15 = (char *)&v14[2 * v7];
    v46 = (__int64 *)(v15 + 16);
    try
    {
      if ( v15 )
      {
        *(_DWORD *)v15 = *a4;
        v16 = (char *)(a4 + 2);
        *((_QWORD *)v15 + 1) = 0LL;
        if ( v15 + 8 != v16 )
        {
          *((_QWORD *)v15 + 1) = *(_QWORD *)v16;
          *(_QWORD *)v16 = 0LL;
        }
      }
      v39 = &v14[2 * v7];
      v17 = *a1;
      if ( (_DWORD *)a3 == v8 )
      {
        std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>(
          v17,
          a1[1],
          v14);
        v19 = v43;
      }
      else
      {
        std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>(
          v17,
          a3,
          v14);
        v19 = v43;
        v39 = v43;
        std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>(
          a3,
          a1[1],
          v46);
      }
    }
    catch ( ... )
    {
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::_Destroy(v18, v39, v46);
      std::_Wrap_alloc<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>::deallocate(
        v38,
        v43,
        v13);
      throw;
    }
    v20 = *a1;
    if ( !*a1 )
      goto LABEL_29;
    v21 = a1[1];
    while ( v20 != v21 )
    {
      v22 = *(_QWORD *)(v20 + 8);
      if ( v22 )
      {
        *(_QWORD *)(v20 + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v20 += 16LL;
    }
    v23 = *a1;
    v24 = (__int64)(a1[2] - *a1) >> 4;
    if ( v24 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v24 < 0x1000 )
      {
LABEL_27:
        operator delete((void *)v23);
LABEL_29:
        *a1 = (unsigned __int64)v19;
        a1[1] = (unsigned __int64)&v19[2 * v40];
        a1[2] = (unsigned __int64)&v19[2 * v13];
        goto LABEL_49;
      }
      if ( (v23 & 0x1F) == 0 )
      {
        v25 = *(_QWORD *)(v23 - 8);
        if ( v25 < v23 )
        {
          v23 = v23 - v25 - 8;
          if ( v23 <= 0x1F )
          {
            v23 = v25;
            goto LABEL_27;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v23);
    __debugbreak();
  }
  if ( (_DWORD *)a3 == v8 )
  {
    if ( v8 )
    {
      *v8 = *a4;
      v26 = a4 + 2;
      v27 = v8 + 2;
      *(_QWORD *)v27 = 0LL;
      if ( v27 != a4 + 2 )
      {
        *(_QWORD *)v27 = *v26;
        *v26 = 0LL;
      }
    }
    a1[1] += 16LL;
  }
  else
  {
    v44 = *a4;
    v28 = (__int64 *)(a4 + 2);
    v29 = 0LL;
    if ( &v41 != (char *)(a4 + 2) )
    {
      v29 = *v28;
      *v28 = 0LL;
    }
    v30 = a1[1];
    if ( v30 )
    {
      *(_DWORD *)v30 = *(_DWORD *)(v30 - 16);
      v31 = (_QWORD *)(v30 - 8);
      *(_QWORD *)(v30 + 8) = 0LL;
      if ( v30 + 8 != v30 - 8 )
      {
        *(_QWORD *)(v30 + 8) = *v31;
        *v31 = 0LL;
      }
    }
    a1[1] += 16LL;
    v32 = (_DWORD *)(v30 - 16);
    if ( a3 != v30 - 16 )
    {
      v33 = (__int64 **)(v32 + 2);
      do
      {
        v32 -= 4;
        v33 -= 2;
        *((_DWORD *)v33 + 2) = *v32;
        v34 = 0LL;
        if ( &v46 != v33 )
        {
          v34 = *v33;
          *v33 = 0LL;
        }
        v35 = v33[2];
        v33[2] = v34;
        if ( v35 )
          (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
      }
      while ( v32 != (_DWORD *)a3 );
    }
    *(_DWORD *)a3 = v44;
    v36 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v29;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
LABEL_49:
  result = a2;
  *a2 = *a1 + 16 * v7;
  return result;
}
