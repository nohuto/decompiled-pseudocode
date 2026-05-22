/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800CB6C8
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C8360 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *j; // rbx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 i; // rax
  __int64 **v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // r10
  _QWORD *k; // r9
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 *v16; // rcx
  void **v17; // rax
  char v18; // cl
  bool m; // zf
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
  volatile signed __int32 *v37; // rcx
  __int64 v38; // rax
  __int64 **result; // rax

  j = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (__int64 **)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (__int64 *)i;
      j = (__int64 *)i;
    }
    else
    {
      v8 = *v7;
      for ( j = (__int64 *)v7; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v10 = (__int64 **)a3[2];
  if ( *(_BYTE *)(*a3 + 25) )
    goto LABEL_15;
  if ( *((_BYTE *)v10 + 25) )
  {
    v10 = (__int64 **)*a3;
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
    v12 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == a3 )
    {
      if ( *((_BYTE *)v10 + 25) )
      {
        k = v11;
      }
      else
      {
        v14 = *v10;
        for ( k = v10; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
          k = v14;
      }
      *v12 = k;
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
    goto LABEL_46;
  }
  v10 = (__int64 **)j[2];
  if ( j == a3 )
    goto LABEL_15;
  *(_QWORD *)(*a3 + 8) = j;
  *j = *a3;
  if ( j == (__int64 *)a3[2] )
  {
    v11 = j;
  }
  else
  {
    v11 = (__int64 *)j[1];
    if ( !*((_BYTE *)v10 + 25) )
      v10[1] = v11;
    *v11 = (__int64)v10;
    j[2] = a3[2];
    *(_QWORD *)(a3[2] + 8) = j;
  }
  if ( *(__int64 **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = j;
  }
  else
  {
    v17 = (void **)a3[1];
    if ( *v17 == a3 )
      *v17 = j;
    else
      v17[2] = j;
  }
  j[1] = a3[1];
  v18 = *((_BYTE *)j + 24);
  *((_BYTE *)j + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v18;
LABEL_46:
  if ( *((_BYTE *)a3 + 24) == 1 )
  {
    for ( m = v10 == *(__int64 ***)(*a1 + 8LL); ; m = v20 == *(__int64 **)(*a1 + 8LL) )
    {
      if ( m || (v20 = v11, *((_BYTE *)v10 + 24) != 1) )
      {
LABEL_112:
        *((_BYTE *)v10 + 24) = 1;
        break;
      }
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
            goto LABEL_112;
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
  }
  v37 = (volatile signed __int32 *)a3[6];
  if ( v37 && _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64 *))(*(_QWORD *)v37 + 8LL))(v37, v11);
  WindowsDeleteString((HSTRING)a3[4]);
  a3[4] = 0LL;
  operator delete(a3);
  v38 = a1[1];
  if ( v38 )
    a1[1] = v38 - 1;
  result = a2;
  *a2 = j;
  return result;
}
