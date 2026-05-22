/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800569E0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180056E9C (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception__ea_180056E9C.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v7; // rax
  __int64 *v8; // r8
  __int64 i; // rax
  __int64 **v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // r10
  _QWORD *j; // r9
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  void **v17; // rax
  char v18; // cl
  bool k; // zf
  __int64 *v20; // r10
  __int64 *v21; // rcx
  __int64 **v22; // rcx
  __int64 **v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // rcx
  __int64 **v32; // rax
  __int64 *v33; // r9
  __int64 **v34; // rax
  __int64 v35; // rax
  __int64 **v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 **result; // rax

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (__int64 *)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (__int64 *)i;
      v3 = (__int64 *)i;
    }
    else
    {
      v8 = (__int64 *)*v7;
      v3 = v7;
      if ( !*(_BYTE *)(*v7 + 25) )
      {
        do
        {
          v3 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v10 = (__int64 **)a3[2];
  if ( !*(_BYTE *)(*a3 + 25) )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v10 = (__int64 **)*a3;
    }
    else
    {
      v10 = (__int64 **)v3[2];
      if ( v3 != a3 )
      {
        *(_QWORD *)(*a3 + 8) = v3;
        *v3 = *a3;
        if ( v3 == (__int64 *)a3[2] )
        {
          v11 = v3;
        }
        else
        {
          v11 = (__int64 *)v3[1];
          if ( !*((_BYTE *)v10 + 25) )
            v10[1] = v11;
          *v11 = (__int64)v10;
          v3[2] = a3[2];
          *(_QWORD *)(a3[2] + 8) = v3;
        }
        if ( *(__int64 **)(*a1 + 8LL) == a3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v3;
        }
        else
        {
          v17 = (void **)a3[1];
          if ( *v17 == a3 )
            *v17 = v3;
          else
            v17[2] = v3;
        }
        v3[1] = a3[1];
        v18 = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
        *((_BYTE *)a3 + 24) = v18;
        goto LABEL_46;
      }
    }
  }
  v11 = (__int64 *)a3[1];
  if ( !*((_BYTE *)v10 + 25) )
    v10[1] = v11;
  if ( *(__int64 **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
  }
  else if ( (__int64 *)*v11 == a3 )
  {
    *v11 = (__int64)v10;
  }
  else
  {
    v11[2] = (__int64)v10;
  }
  v12 = (_QWORD *)*a1;
  if ( *(__int64 **)*a1 == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      j = v11;
    }
    else
    {
      v14 = *v10;
      for ( j = v10; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
        j = v14;
    }
    *v12 = j;
  }
  if ( *(__int64 **)(*a1 + 16LL) == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v15 = (__int64 **)v11;
    }
    else
    {
      v16 = v10[2];
      v15 = v10;
      while ( !*((_BYTE *)v16 + 25) )
      {
        v15 = (__int64 **)v16;
        v16 = (__int64 *)v16[2];
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v15;
  }
LABEL_46:
  if ( *((_BYTE *)a3 + 24) != 1 )
    goto LABEL_113;
  for ( k = v10 == *(__int64 ***)(*a1 + 8LL); !k; k = v20 == *(__int64 **)(*a1 + 8LL) )
  {
    v20 = v11;
    if ( *((_BYTE *)v10 + 24) != 1 )
      break;
    v21 = (__int64 *)*v11;
    if ( v10 == (__int64 **)*v11 )
    {
      v21 = (__int64 *)v11[2];
      if ( !*((_BYTE *)v21 + 24) )
      {
        *((_BYTE *)v21 + 24) = 1;
        v22 = (__int64 **)v11[2];
        *((_BYTE *)v11 + 24) = 0;
        v11[2] = (__int64)*v22;
        if ( !*((_BYTE *)*v22 + 25) )
          (*v22)[1] = (__int64)v11;
        v22[1] = (__int64 *)v11[1];
        if ( v11 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v22;
        }
        else
        {
          v23 = (__int64 **)v11[1];
          if ( v11 == *v23 )
            *v23 = (__int64 *)v22;
          else
            v23[2] = (__int64 *)v22;
        }
        *v22 = v11;
        v11[1] = (__int64)v22;
        v21 = (__int64 *)v11[2];
      }
      if ( !*((_BYTE *)v21 + 25) )
      {
        if ( *(_BYTE *)(*v21 + 24) != 1 || *(_BYTE *)(v21[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v21[2] + 24) == 1 )
          {
            *(_BYTE *)(*v21 + 24) = 1;
            v24 = *v21;
            *((_BYTE *)v21 + 24) = 0;
            *v21 = *(_QWORD *)(v24 + 16);
            v25 = *(_QWORD *)(v24 + 16);
            if ( !*(_BYTE *)(v25 + 25) )
              *(_QWORD *)(v25 + 8) = v21;
            *(_QWORD *)(v24 + 8) = v21[1];
            if ( v21 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v24;
            }
            else
            {
              v30 = (_QWORD *)v21[1];
              if ( v21 == (__int64 *)v30[2] )
                v30[2] = v24;
              else
                *v30 = v24;
            }
            *(_QWORD *)(v24 + 16) = v21;
            v21[1] = v24;
            v21 = (__int64 *)v11[2];
          }
          *((_BYTE *)v21 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(v21[2] + 24) = 1;
          v31 = (__int64 *)v11[2];
          v11[2] = *v31;
          if ( !*(_BYTE *)(*v31 + 25) )
            *(_QWORD *)(*v31 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v31;
          }
          else
          {
            v32 = (__int64 **)v11[1];
            if ( v11 == *v32 )
              *v32 = v31;
            else
              v32[2] = v31;
          }
          *v31 = (__int64)v11;
LABEL_111:
          v11[1] = (__int64)v31;
          break;
        }
LABEL_80:
        *((_BYTE *)v21 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v21 + 24) )
      {
        *((_BYTE *)v21 + 24) = 1;
        v26 = (__int64 *)*v11;
        *((_BYTE *)v11 + 24) = 0;
        *v11 = v26[2];
        v27 = v26[2];
        if ( !*(_BYTE *)(v27 + 25) )
          *(_QWORD *)(v27 + 8) = v11;
        v26[1] = v11[1];
        if ( v11 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v26;
        }
        else
        {
          v28 = (_QWORD *)v11[1];
          if ( v11 == (__int64 *)v28[2] )
            v28[2] = v26;
          else
            *v28 = v26;
        }
        v26[2] = (__int64)v11;
        v11[1] = (__int64)v26;
        v21 = (__int64 *)*v11;
      }
      if ( !*((_BYTE *)v21 + 25) )
      {
        v29 = v21[2];
        if ( *(_BYTE *)(v29 + 24) != 1 || *(_BYTE *)(*v21 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v21 + 24) == 1 )
          {
            *(_BYTE *)(v29 + 24) = 1;
            v33 = (__int64 *)v21[2];
            *((_BYTE *)v21 + 24) = 0;
            v21[2] = *v33;
            if ( !*(_BYTE *)(*v33 + 25) )
              *(_QWORD *)(*v33 + 8) = v21;
            v33[1] = v21[1];
            if ( v21 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v33;
            }
            else
            {
              v34 = (__int64 **)v21[1];
              if ( v21 == *v34 )
                *v34 = v33;
              else
                v34[2] = v33;
            }
            *v33 = (__int64)v21;
            v21[1] = (__int64)v33;
            v21 = (__int64 *)*v11;
          }
          *((_BYTE *)v21 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*v21 + 24) = 1;
          v31 = (__int64 *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16);
          v35 = v31[2];
          if ( !*(_BYTE *)(v35 + 25) )
            *(_QWORD *)(v35 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v31;
          }
          else
          {
            v36 = (__int64 **)v11[1];
            if ( v11 == v36[2] )
              v36[2] = v31;
            else
              *v36 = v31;
          }
          v31[2] = (__int64)v11;
          goto LABEL_111;
        }
        goto LABEL_80;
      }
    }
    v10 = (__int64 **)v11;
    v11 = (__int64 *)v11[1];
  }
  *((_BYTE *)v10 + 24) = 1;
LABEL_113:
  v37 = a3[5];
  if ( v37 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 16LL))(v37, v11);
  v38 = a3[4];
  if ( v38 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 16LL))(v38, v11);
  operator delete(a3);
  v39 = a1[1];
  if ( v39 )
    a1[1] = v39 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
