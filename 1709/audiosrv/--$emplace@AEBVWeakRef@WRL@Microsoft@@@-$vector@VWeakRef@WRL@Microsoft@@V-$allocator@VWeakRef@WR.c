/*
 * XREFs of ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002F638
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EC20 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EDB0 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?_Calculate_growth@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x18002F79C (-_Calculate_growth@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002F990 (--$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(
        volatile signed __int32 ***a1,
        _QWORD *a2,
        char **a3,
        char **a4)
{
  _QWORD *v6; // r13
  __int64 v8; // r12
  char **v9; // rdi
  __int64 v10; // rax
  bool v11; // r8
  char *v12; // r14
  char *v13; // r12
  char *v14; // rcx
  volatile signed __int32 **v15; // rcx
  __int64 v16; // rcx
  volatile signed __int32 **v17; // rbx
  char *v19; // rcx
  volatile signed __int32 **v20; // rdi
  volatile signed __int32 *v21; // rcx
  void (*v22)(void); // rax
  char *v23; // rdi
  volatile signed __int32 **v24; // r14
  char **v25; // r15
  char *v26; // rax
  char *v27; // rcx
  char *v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  char *v31; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+B0h] [rbp+18h]

  v32 = a2;
  v6 = a2;
  v8 = ((char *)a3 - (char *)*a1) >> 3;
  v30 = v8;
  v9 = (char **)a1[1];
  if ( a1[2] == (volatile signed __int32 **)v9 )
  {
    v10 = ((char *)v9 - (char *)*a1) >> 3;
    if ( v10 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v29 = v10 + 1;
    v33 = std::vector<Microsoft::WRL::WeakRef>::_Calculate_growth(a1, v10 + 1);
    v12 = (char *)std::_Allocate(v33, 8uLL, v11);
    v13 = &v12[8 * v8];
    try
    {
      if ( v13 )
      {
        v14 = *a4;
        *(_QWORD *)v13 = *a4;
        if ( v14 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v31 = v13;
      v15 = *a1;
      if ( a3 == v9 )
      {
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v15,
          a1[1],
          v12);
      }
      else
      {
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v15,
          a3,
          v12);
        v31 = v12;
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          a3,
          a1[1],
          v13 + 8);
      }
    }
    catch ( ... )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v16, v31, v13 + 8);
      std::_Deallocate(v12, v33, 8uLL);
      throw;
    }
    v17 = *a1;
    if ( *a1 )
    {
      v20 = a1[1];
      while ( v17 != v20 )
      {
        v21 = *v17;
        if ( *v17 )
        {
          *v17 = 0LL;
          v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
          if ( (char *)v22 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v21);
          else
            v22();
        }
        ++v17;
      }
      std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    }
    *a1 = (volatile signed __int32 **)v12;
    a1[1] = (volatile signed __int32 **)&v12[8 * v29];
    a1[2] = (volatile signed __int32 **)&v12[8 * v33];
    v8 = v30;
    v6 = v32;
  }
  else if ( a3 == v9 )
  {
    if ( v9 )
    {
      v19 = *a4;
      *v9 = *a4;
      if ( v19 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    ++a1[1];
  }
  else
  {
    v23 = *a4;
    if ( *a4 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 8LL))(*a4);
    v24 = a1[1];
    if ( v24 )
    {
      *v24 = 0LL;
      *v24 = *(v24 - 1);
      *(v24 - 1) = 0LL;
    }
    ++a1[1];
    v25 = (char **)(v24 - 1);
    if ( a3 != (char **)(v24 - 1) )
    {
      do
      {
        --v25;
        v26 = 0LL;
        if ( &v31 != v25 )
        {
          v26 = *v25;
          *v25 = 0LL;
        }
        v27 = v25[1];
        v25[1] = v26;
        if ( v27 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      while ( v25 != a3 );
    }
    v28 = *a3;
    *a3 = v23;
    if ( v28 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  *v6 = &(*a1)[v8];
  return v6;
}
