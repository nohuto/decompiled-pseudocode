/*
 * XREFs of ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x180014FD0
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18001B970 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18001BC40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18001515C (--$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(
        __int64 **a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 *v8; // rcx
  __int64 v9; // r14
  unsigned __int64 *v10; // r15
  bool v11; // r13
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char *v18; // r15
  char *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  __int64 *v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 *v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  _QWORD *v30; // [rsp+30h] [rbp-58h]
  char *v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  unsigned __int64 v33; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp+18h]

  v8 = *a1;
  v9 = ((char *)a3 - (char *)v8) >> 3;
  v10 = (unsigned __int64 *)a1[1];
  v11 = a3 == v10;
  v12 = (unsigned __int64 *)a1[2];
  if ( v12 == v10 )
  {
    v15 = ((char *)v10 - (char *)v8) >> 3;
    if ( v15 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v32 = v15 + 1;
    v16 = ((char *)v12 - (char *)v8) >> 3;
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL - (v16 >> 1) || (v17 = (v16 >> 1) + v16, v33 = v17, v17 < v15 + 1) )
    {
      v17 = v15 + 1;
      v33 = v15 + 1;
    }
    v34 = v17;
    v18 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v17, 8LL);
    v19 = &v18[8 * v9];
    v30 = v19 + 8;
    try
    {
      v20 = *a4;
      *(_QWORD *)v19 = *a4;
      if ( v20 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 8LL))(v20);
        v19 = &v18[8 * v9];
      }
      v31 = v19;
      v21 = *a1;
      if ( v11 )
      {
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v21,
          a1[1],
          v18);
      }
      else
      {
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v21,
          a3,
          v18);
        v31 = v18;
        std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          a3,
          a1[1],
          v30);
      }
    }
    catch ( ... )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v22, v31, v30);
      std::_Deallocate(v18, v34, 8uLL);
      throw;
    }
    v23 = *a1;
    if ( *a1 )
    {
      v24 = a1[1];
      if ( v23 != v24 )
      {
        do
        {
          v25 = *v23;
          if ( *v23 )
          {
            *v23 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          ++v23;
        }
        while ( v23 != v24 );
        v23 = *a1;
      }
      std::_Deallocate(v23, a1[2] - v23, 8uLL);
    }
    *a1 = (__int64 *)v18;
    a1[1] = (__int64 *)&v18[8 * v32];
    a1[2] = (__int64 *)&v18[8 * v33];
  }
  else
  {
    v13 = *a4;
    if ( a3 == v10 )
    {
      *v10 = v13;
      if ( v13 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++a1[1];
    }
    else
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(*a4);
        v10 = (unsigned __int64 *)a1[1];
      }
      v26 = v10 - 1;
      *v10 = 0LL;
      *v10 = *(v10 - 1);
      *(v10 - 1) = 0LL;
      ++a1[1];
      if ( a3 != v10 - 1 )
      {
        do
        {
          --v26;
          --v10;
          v27 = 0LL;
          if ( &v33 != v26 )
          {
            v27 = *v26;
            *v26 = 0LL;
          }
          v28 = *v10;
          *v10 = v27;
          if ( v28 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        while ( v26 != a3 );
      }
      v29 = *a3;
      *a3 = v13;
      if ( v29 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  *a2 = &(*a1)[v9];
  return a2;
}
