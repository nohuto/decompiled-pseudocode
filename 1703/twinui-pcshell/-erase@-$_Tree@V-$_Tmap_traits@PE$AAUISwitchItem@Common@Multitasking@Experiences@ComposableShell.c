/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@23456@V?$allocator@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18013E48C
 * Callers:
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180133AFC (-RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::_Tree<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * const,std::shared_ptr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  char *v3; // rbx
  char *v7; // rax
  __int64 i; // rax
  __int64 **v9; // rcx
  __int64 **v10; // r8
  char *v11; // rdx
  char *v12; // rax
  char *j; // rcx
  char *v14; // rax
  __int64 *k; // rcx
  char **v16; // rax
  char v17; // cl
  bool m; // zf
  char *v19; // r10
  char *v20; // r11
  _BYTE *v21; // rcx
  char **v22; // rcx
  char **v23; // rax
  _BYTE *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  char **v30; // rcx
  char **v31; // rax
  _QWORD *v32; // r9
  _QWORD *v33; // rax
  char *v34; // rax
  char ***v35; // rax
  volatile signed __int32 *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax

  v3 = a3;
  if ( !a3[25] )
  {
    v7 = (char *)*((_QWORD *)a3 + 2);
    if ( v7[25] )
    {
      for ( i = *((_QWORD *)a3 + 1); !*(_BYTE *)(i + 25) && v3 == *(char **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (char *)i;
      v3 = (char *)i;
    }
    else
    {
      do
      {
        v3 = v7;
        v7 = *(char **)v7;
      }
      while ( !v7[25] );
    }
  }
  v9 = *(__int64 ***)a3;
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
  {
    v10 = (__int64 **)*((_QWORD *)a3 + 2);
LABEL_15:
    v11 = (char *)*((_QWORD *)a3 + 1);
    if ( !*((_BYTE *)v10 + 25) )
      v10[1] = (__int64 *)v11;
    if ( *(char **)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v10;
    }
    else if ( *(char **)v11 == a3 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *((_QWORD *)v11 + 2) = v10;
    }
    if ( *(char **)*a1 == a3 )
    {
      if ( *((_BYTE *)v10 + 25) )
      {
        v12 = v11;
      }
      else
      {
        v12 = (char *)v10;
        for ( j = (char *)*v10; !j[25]; j = *(char **)j )
          v12 = j;
      }
      *(_QWORD *)*a1 = v12;
    }
    if ( *(char **)(*a1 + 16LL) == a3 )
    {
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = v11;
      }
      else
      {
        v14 = (char *)v10;
        for ( k = v10[2]; !*((_BYTE *)k + 25); k = (__int64 *)k[2] )
          v14 = (char *)k;
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 2) + 25LL) )
  {
    v10 = *(__int64 ***)a3;
    goto LABEL_15;
  }
  v10 = (__int64 **)*((_QWORD *)v3 + 2);
  if ( v3 == a3 )
    goto LABEL_15;
  v9[1] = (__int64 *)v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *((char **)a3 + 2) )
  {
    v11 = v3;
  }
  else
  {
    v11 = (char *)*((_QWORD *)v3 + 1);
    if ( !*((_BYTE *)v10 + 25) )
      v10[1] = (__int64 *)v11;
    *(_QWORD *)v11 = v10;
    *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
    *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL) = v3;
  }
  if ( *(char **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v16 = (char **)*((_QWORD *)a3 + 1);
    if ( *v16 == a3 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  *((_QWORD *)v3 + 1) = *((_QWORD *)a3 + 1);
  v17 = v3[24];
  v3[24] = a3[24];
  a3[24] = v17;
LABEL_47:
  if ( a3[24] == 1 )
  {
    for ( m = v10 == *(__int64 ***)(*a1 + 8LL); ; m = v19 == *(char **)(*a1 + 8LL) )
    {
      if ( m || (v19 = v11, v20 = v11, *((_BYTE *)v10 + 24) != 1) )
      {
LABEL_114:
        *((_BYTE *)v10 + 24) = 1;
        break;
      }
      v21 = *(_BYTE **)v11;
      if ( v10 == *(__int64 ***)v11 )
      {
        v21 = (_BYTE *)*((_QWORD *)v11 + 2);
        if ( !v21[24] )
        {
          v21[24] = 1;
          v11[24] = 0;
          v22 = (char **)*((_QWORD *)v11 + 2);
          *((_QWORD *)v11 + 2) = *v22;
          if ( !(*v22)[25] )
            *((_QWORD *)*v22 + 1) = v11;
          v22[1] = (char *)*((_QWORD *)v11 + 1);
          if ( v11 == *(char **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v22;
          }
          else
          {
            v23 = (char **)*((_QWORD *)v11 + 1);
            if ( v11 == *v23 )
              *v23 = (char *)v22;
            else
              v23[2] = (char *)v22;
          }
          *v22 = v11;
          *((_QWORD *)v11 + 1) = v22;
          v21 = (_BYTE *)*((_QWORD *)v11 + 2);
        }
        if ( !v21[25] )
        {
          if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
              v21[24] = 0;
              v27 = *(_QWORD *)v21;
              *(_QWORD *)v21 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
              v28 = *(_QWORD *)(v27 + 16);
              if ( !*(_BYTE *)(v28 + 25) )
                *(_QWORD *)(v28 + 8) = v21;
              *(_QWORD *)(v27 + 8) = *((_QWORD *)v21 + 1);
              if ( v21 == *(_BYTE **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v27;
              }
              else
              {
                v29 = (_QWORD *)*((_QWORD *)v21 + 1);
                if ( v21 == (_BYTE *)v29[2] )
                  v29[2] = v27;
                else
                  *v29 = v27;
              }
              *(_QWORD *)(v27 + 16) = v21;
              *((_QWORD *)v21 + 1) = v27;
              v21 = (_BYTE *)*((_QWORD *)v11 + 2);
            }
            v21[24] = v11[24];
            v11[24] = 1;
            *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) = 1;
            v30 = (char **)*((_QWORD *)v11 + 2);
            *((_QWORD *)v11 + 2) = *v30;
            if ( !(*v30)[25] )
              *((_QWORD *)*v30 + 1) = v11;
            v30[1] = (char *)*((_QWORD *)v11 + 1);
            if ( v11 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v31 = (char **)*((_QWORD *)v11 + 1);
              if ( v11 == *v31 )
                *v31 = (char *)v30;
              else
                v31[2] = (char *)v30;
            }
            *v30 = v11;
LABEL_113:
            *((_QWORD *)v11 + 1) = v30;
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
          v11[24] = 0;
          v24 = *(_BYTE **)v11;
          *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
          v25 = *((_QWORD *)v24 + 2);
          if ( !*(_BYTE *)(v25 + 25) )
            *(_QWORD *)(v25 + 8) = v11;
          *((_QWORD *)v24 + 1) = *((_QWORD *)v11 + 1);
          if ( v11 == *(char **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v24;
          }
          else
          {
            v26 = (_QWORD *)*((_QWORD *)v11 + 1);
            if ( v11 == (char *)v26[2] )
              v26[2] = v24;
            else
              *v26 = v24;
          }
          *((_QWORD *)v24 + 2) = v11;
          *((_QWORD *)v11 + 1) = v24;
          v21 = *(_BYTE **)v11;
        }
        if ( !v21[25] )
        {
          if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) == 1 )
            {
              *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) = 1;
              v21[24] = 0;
              v32 = (_QWORD *)*((_QWORD *)v21 + 2);
              *((_QWORD *)v21 + 2) = *v32;
              if ( !*(_BYTE *)(*v32 + 25LL) )
                *(_QWORD *)(*v32 + 8LL) = v21;
              v32[1] = *((_QWORD *)v21 + 1);
              if ( v21 == *(_BYTE **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v32;
              }
              else
              {
                v33 = (_QWORD *)*((_QWORD *)v21 + 1);
                if ( v21 == (_BYTE *)*v33 )
                  *v33 = v32;
                else
                  v33[2] = v32;
              }
              *v32 = v21;
              *((_QWORD *)v21 + 1) = v32;
              v21 = *(_BYTE **)v11;
            }
            v21[24] = v11[24];
            v11[24] = 1;
            *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
            v30 = *(char ***)v11;
            *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
            v34 = v30[2];
            if ( !v34[25] )
              *((_QWORD *)v34 + 1) = v11;
            v30[1] = (char *)*((_QWORD *)v11 + 1);
            if ( v11 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v35 = (char ***)*((_QWORD *)v11 + 1);
              if ( v11 == (char *)v35[2] )
                v35[2] = v30;
              else
                *v35 = v30;
            }
            v30[2] = v11;
            goto LABEL_113;
          }
          goto LABEL_77;
        }
      }
      v11 = (char *)*((_QWORD *)v11 + 1);
      v10 = (__int64 **)v20;
    }
  }
  v36 = (volatile signed __int32 *)*((_QWORD *)a3 + 6);
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, char *))v36)(v36, v11);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
    }
  }
  v37 = *((_QWORD *)a3 + 4);
  if ( v37 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 16LL))(v37, v11);
  std::_Deallocate(a3, 1uLL, 0x38uLL);
  v38 = a1[1];
  if ( v38 )
    a1[1] = v38 - 1;
  *a2 = v3;
  return a2;
}
