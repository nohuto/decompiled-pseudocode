/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180169AC8
 * Callers:
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180169FB0 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
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
  __int64 *j; // rcx
  __int64 **v14; // rax
  __int64 *k; // rcx
  void **v16; // rax
  char v17; // cl
  bool m; // zf
  __int64 *v19; // r11
  __int64 **v20; // rsi
  _BYTE *v21; // rcx
  __int64 **v22; // rcx
  __int64 **v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 *v31; // rcx
  __int64 **v32; // rax
  _QWORD *v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 **v36; // rax
  volatile signed __int32 *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rax

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
        v12 = v10;
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v12 = j;
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
        v14 = v10;
        for ( k = v10[2]; !*((_BYTE *)k + 25); k = (__int64 *)k[2] )
          v14 = (__int64 **)k;
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
    for ( m = v10 == *(__int64 ***)(*a1 + 8LL); ; m = v19 == *(__int64 **)(*a1 + 8LL) )
    {
      if ( m || (v19 = v11, v20 = (__int64 **)v11, *((_BYTE *)v10 + 24) != 1) )
      {
LABEL_114:
        *((_BYTE *)v10 + 24) = 1;
        break;
      }
      v21 = (_BYTE *)*v11;
      if ( v10 == (__int64 **)*v11 )
      {
        v21 = (_BYTE *)v11[2];
        if ( !v21[24] )
        {
          v21[24] = 1;
          *((_BYTE *)v11 + 24) = 0;
          v22 = (__int64 **)v11[2];
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
          v21 = (_BYTE *)v11[2];
        }
        if ( !v21[25] )
        {
          if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
              v21[24] = 0;
              v28 = *(_QWORD *)v21;
              *(_QWORD *)v21 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
              v29 = *(_QWORD *)(v28 + 16);
              if ( !*(_BYTE *)(v29 + 25) )
                *(_QWORD *)(v29 + 8) = v21;
              *(_QWORD *)(v28 + 8) = *((_QWORD *)v21 + 1);
              if ( v21 == *(_BYTE **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v28;
              }
              else
              {
                v30 = (_QWORD *)*((_QWORD *)v21 + 1);
                if ( v21 == (_BYTE *)v30[2] )
                  v30[2] = v28;
                else
                  *v30 = v28;
              }
              *(_QWORD *)(v28 + 16) = v21;
              *((_QWORD *)v21 + 1) = v28;
              v21 = (_BYTE *)v11[2];
            }
            v21[24] = *((_BYTE *)v11 + 24);
            *((_BYTE *)v11 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) = 1;
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
LABEL_113:
            v11[1] = (__int64)v31;
            goto LABEL_114;
          }
LABEL_77:
          v21[24] = 0;
        }
      }
      else
      {
        if ( !v21[24] )
        {
          v21[24] = 1;
          *((_BYTE *)v11 + 24) = 0;
          v24 = *v11;
          *v11 = *(_QWORD *)(*v11 + 16);
          v25 = *(_QWORD *)(v24 + 16);
          if ( !*(_BYTE *)(v25 + 25) )
            *(_QWORD *)(v25 + 8) = v11;
          *(_QWORD *)(v24 + 8) = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v24;
          }
          else
          {
            v26 = (_QWORD *)v11[1];
            if ( v11 == (__int64 *)v26[2] )
              v26[2] = v24;
            else
              *v26 = v24;
          }
          *(_QWORD *)(v24 + 16) = v11;
          v11[1] = v24;
          v21 = (_BYTE *)*v11;
        }
        if ( !v21[25] )
        {
          v27 = *((_QWORD *)v21 + 2);
          if ( *(_BYTE *)(v27 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) == 1 )
            {
              *(_BYTE *)(v27 + 24) = 1;
              v21[24] = 0;
              v33 = (_QWORD *)*((_QWORD *)v21 + 2);
              *((_QWORD *)v21 + 2) = *v33;
              if ( !*(_BYTE *)(*v33 + 25LL) )
                *(_QWORD *)(*v33 + 8LL) = v21;
              v33[1] = *((_QWORD *)v21 + 1);
              if ( v21 == *(_BYTE **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v33;
              }
              else
              {
                v34 = (_QWORD *)*((_QWORD *)v21 + 1);
                if ( v21 == (_BYTE *)*v34 )
                  *v34 = v33;
                else
                  v34[2] = v33;
              }
              *v33 = v21;
              *((_QWORD *)v21 + 1) = v33;
              v21 = (_BYTE *)*v11;
            }
            v21[24] = *((_BYTE *)v11 + 24);
            *((_BYTE *)v11 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
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
            goto LABEL_113;
          }
          goto LABEL_77;
        }
      }
      v11 = (__int64 *)v11[1];
      v10 = v20;
    }
  }
  v37 = (volatile signed __int32 *)a3[6];
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64 *))v37)(v37, v11);
      if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
    }
  }
  v38 = a3[4];
  if ( v38 )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 16LL))(v38, v11);
  operator delete(a3);
  v39 = a1[1];
  if ( v39 )
    a1[1] = v39 - 1;
  *a2 = v3;
  return a2;
}
