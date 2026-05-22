/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180097464
 * Callers:
 *     _lambda_a8e9d8c2878d8636ab767a000decf001_::operator() @ 0x180093A88 (_lambda_a8e9d8c2878d8636ab767a000decf001_--operator().c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v7; // rax
  __int64 i; // rax
  __int64 **v9; // rcx
  __int64 **v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 *v15; // rcx
  void **v16; // rax
  char v17; // cl
  bool j; // zf
  __int64 *v19; // r11
  __int64 *v20; // rcx
  __int64 **v21; // rcx
  __int64 **v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 *v32; // r9
  __int64 **v33; // rax
  __int64 v34; // rax
  __int64 **v35; // rax
  volatile signed __int32 *v36; // rdi
  __int64 v37; // rax
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
      do
      {
        v3 = v7;
        v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
  }
  v9 = (__int64 **)*a3;
  if ( *(_BYTE *)(*a3 + 25) )
  {
    v10 = (__int64 **)a3[2];
LABEL_15:
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
    if ( *(__int64 **)*a1 == a3 )
    {
      if ( *((_BYTE *)v10 + 25) )
      {
        v12 = v11;
      }
      else
      {
        v13 = *v10;
        v12 = v10;
        while ( !*((_BYTE *)v13 + 25) )
        {
          v12 = v13;
          v13 = (__int64 *)*v13;
        }
      }
      *(_QWORD *)*a1 = v12;
    }
    if ( *(__int64 **)(*a1 + 16LL) == a3 )
    {
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = (__int64 **)v11;
      }
      else
      {
        v15 = v10[2];
        v14 = v10;
        while ( !*((_BYTE *)v15 + 25) )
        {
          v14 = (__int64 **)v15;
          v15 = (__int64 *)v15[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    v10 = (__int64 **)*a3;
    goto LABEL_15;
  }
  v10 = (__int64 **)v3[2];
  if ( v3 == a3 )
    goto LABEL_15;
  v9[1] = v3;
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
    v16 = (void **)a3[1];
    if ( *v16 == a3 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  v3[1] = a3[1];
  v17 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v17;
LABEL_47:
  if ( *((_BYTE *)a3 + 24) == 1 )
  {
    for ( j = v10 == *(__int64 ***)(*a1 + 8LL); ; j = v19 == *(__int64 **)(*a1 + 8LL) )
    {
      if ( j || (v19 = v11, *((_BYTE *)v10 + 24) != 1) )
      {
LABEL_113:
        *((_BYTE *)v10 + 24) = 1;
        break;
      }
      v20 = (__int64 *)*v11;
      if ( v10 == (__int64 **)*v11 )
      {
        v20 = (__int64 *)v11[2];
        if ( !*((_BYTE *)v20 + 24) )
        {
          *((_BYTE *)v20 + 24) = 1;
          v21 = (__int64 **)v11[2];
          *((_BYTE *)v11 + 24) = 0;
          v11[2] = (__int64)*v21;
          if ( !*((_BYTE *)*v21 + 25) )
            (*v21)[1] = (__int64)v11;
          v21[1] = (__int64 *)v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v21;
          }
          else
          {
            v22 = (__int64 **)v11[1];
            if ( v11 == *v22 )
              *v22 = (__int64 *)v21;
            else
              v22[2] = (__int64 *)v21;
          }
          *v21 = v11;
          v11[1] = (__int64)v21;
          v20 = (__int64 *)v11[2];
        }
        if ( !*((_BYTE *)v20 + 25) )
        {
          if ( *(_BYTE *)(*v20 + 24) != 1 || *(_BYTE *)(v20[2] + 24) != 1 )
          {
            if ( *(_BYTE *)(v20[2] + 24) == 1 )
            {
              *(_BYTE *)(*v20 + 24) = 1;
              v23 = *v20;
              *((_BYTE *)v20 + 24) = 0;
              *v20 = *(_QWORD *)(v23 + 16);
              v24 = *(_QWORD *)(v23 + 16);
              if ( !*(_BYTE *)(v24 + 25) )
                *(_QWORD *)(v24 + 8) = v20;
              *(_QWORD *)(v23 + 8) = v20[1];
              if ( v20 == *(__int64 **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v23;
              }
              else
              {
                v29 = (_QWORD *)v20[1];
                if ( v20 == (__int64 *)v29[2] )
                  v29[2] = v23;
                else
                  *v29 = v23;
              }
              *(_QWORD *)(v23 + 16) = v20;
              v20[1] = v23;
              v20 = (__int64 *)v11[2];
            }
            *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
            *((_BYTE *)v11 + 24) = 1;
            *(_BYTE *)(v20[2] + 24) = 1;
            v30 = (__int64 *)v11[2];
            v11[2] = *v30;
            if ( !*(_BYTE *)(*v30 + 25) )
              *(_QWORD *)(*v30 + 8) = v11;
            v30[1] = v11[1];
            if ( v11 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v31 = (__int64 **)v11[1];
              if ( v11 == *v31 )
                *v31 = v30;
              else
                v31[2] = v30;
            }
            *v30 = (__int64)v11;
LABEL_112:
            v11[1] = (__int64)v30;
            goto LABEL_113;
          }
LABEL_81:
          *((_BYTE *)v20 + 24) = 0;
        }
      }
      else
      {
        if ( !*((_BYTE *)v20 + 24) )
        {
          *((_BYTE *)v20 + 24) = 1;
          v25 = (__int64 *)*v11;
          *((_BYTE *)v11 + 24) = 0;
          *v11 = v25[2];
          v26 = v25[2];
          if ( !*(_BYTE *)(v26 + 25) )
            *(_QWORD *)(v26 + 8) = v11;
          v25[1] = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v25;
          }
          else
          {
            v27 = (_QWORD *)v11[1];
            if ( v11 == (__int64 *)v27[2] )
              v27[2] = v25;
            else
              *v27 = v25;
          }
          v25[2] = (__int64)v11;
          v11[1] = (__int64)v25;
          v20 = (__int64 *)*v11;
        }
        if ( !*((_BYTE *)v20 + 25) )
        {
          v28 = v20[2];
          if ( *(_BYTE *)(v28 + 24) != 1 || *(_BYTE *)(*v20 + 24) != 1 )
          {
            if ( *(_BYTE *)(*v20 + 24) == 1 )
            {
              *(_BYTE *)(v28 + 24) = 1;
              v32 = (__int64 *)v20[2];
              *((_BYTE *)v20 + 24) = 0;
              v20[2] = *v32;
              if ( !*(_BYTE *)(*v32 + 25) )
                *(_QWORD *)(*v32 + 8) = v20;
              v32[1] = v20[1];
              if ( v20 == *(__int64 **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v32;
              }
              else
              {
                v33 = (__int64 **)v20[1];
                if ( v20 == *v33 )
                  *v33 = v32;
                else
                  v33[2] = v32;
              }
              *v32 = (__int64)v20;
              v20[1] = (__int64)v32;
              v20 = (__int64 *)*v11;
            }
            *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
            *((_BYTE *)v11 + 24) = 1;
            *(_BYTE *)(*v20 + 24) = 1;
            v30 = (__int64 *)*v11;
            *v11 = *(_QWORD *)(*v11 + 16);
            v34 = v30[2];
            if ( !*(_BYTE *)(v34 + 25) )
              *(_QWORD *)(v34 + 8) = v11;
            v30[1] = v11[1];
            if ( v11 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v35 = (__int64 **)v11[1];
              if ( v11 == v35[2] )
                v35[2] = v30;
              else
                *v35 = v30;
            }
            v30[2] = (__int64)v11;
            goto LABEL_112;
          }
          goto LABEL_81;
        }
      }
      v10 = (__int64 **)v11;
      v11 = (__int64 *)v11[1];
    }
  }
  v36 = (volatile signed __int32 *)a3[6];
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64 *))v36)(v36, v11);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
    }
  }
  operator delete(a3);
  v37 = a1[1];
  if ( v37 )
    a1[1] = v37 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
