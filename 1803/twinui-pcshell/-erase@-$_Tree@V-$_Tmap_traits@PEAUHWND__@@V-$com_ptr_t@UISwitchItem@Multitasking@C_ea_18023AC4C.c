/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18023AC4C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18023AB80 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShel.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x18024FE94 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@@Z @ 0x1802B7810 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UIOcclu.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        char *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rcx
  __int64 i; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char **v16; // rax
  char v17; // cl
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 *result; // rax

  v3 = (__int64)a3;
  if ( !a3[25] )
  {
    v7 = *((_QWORD *)a3 + 2);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *((_QWORD *)a3 + 1); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min(v7, a2, a3);
    }
    v3 = i;
  }
  v9 = *((_QWORD *)a3 + 2);
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v9 + 25) )
  {
    v9 = *(_QWORD *)a3;
LABEL_13:
    v10 = *((_QWORD *)a3 + 1);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( (char *)(*a1)[1] == a3 )
    {
      (*a1)[1] = v9;
    }
    else if ( *(char **)v10 == a3 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    v11 = *a1;
    v12 = *a1;
    if ( (char *)**a1 == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v13 = v10;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min(v9, a2, v11);
      *v11 = v13;
      v11 = *a1;
      v12 = *a1;
    }
    if ( (char *)v12[2] == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v14 = v10;
      }
      else
      {
        v15 = *(_QWORD *)(v9 + 16);
        v14 = v9;
        if ( !*(_BYTE *)(v15 + 25) )
        {
          do
          {
            v14 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
          v12 = v11;
        }
      }
      v12[2] = v14;
    }
    goto LABEL_43;
  }
  v9 = *(_QWORD *)(v3 + 16);
  if ( (char *)v3 == a3 )
    goto LABEL_13;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *((_QWORD *)a3 + 2) )
  {
    v10 = v3;
  }
  else
  {
    v10 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(v3 + 16) = *((_QWORD *)a3 + 2);
    *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL) = v3;
  }
  if ( (char *)(*a1)[1] == a3 )
  {
    (*a1)[1] = v3;
  }
  else
  {
    v16 = (char **)*((_QWORD *)a3 + 1);
    if ( *v16 == a3 )
      *v16 = (char *)v3;
    else
      v16[2] = (char *)v3;
  }
  *(_QWORD *)(v3 + 8) = *((_QWORD *)a3 + 1);
  v17 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = a3[24];
  a3[24] = v17;
LABEL_43:
  if ( a3[24] == 1 )
  {
    if ( v9 != (*a1)[1] )
    {
      do
      {
        v18 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        v19 = *(_QWORD *)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          v19 = *(_QWORD *)(v10 + 16);
          if ( !*(_BYTE *)(v19 + 24) )
          {
            *(_BYTE *)(v19 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Lrotate(
              a1,
              v10);
            v19 = *(_QWORD *)(v10 + 16);
          }
          if ( *(_BYTE *)(v19 + 25) )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
              *(_BYTE *)(v19 + 24) = 0;
              std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(a1);
              v19 = *(_QWORD *)(v10 + 16);
            }
            *(_BYTE *)(v19 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v19 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Lrotate(
              a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v19 + 24) )
          {
            *(_BYTE *)(v19 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(a1);
            v19 = *(_QWORD *)v10;
          }
          if ( *(_BYTE *)(v19 + 25) )
            goto LABEL_61;
          v20 = *(_QWORD *)(v19 + 16);
          if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
            {
              *(_BYTE *)(v20 + 24) = 1;
              *(_BYTE *)(v19 + 24) = 0;
              std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Lrotate(
                a1,
                v19);
              v19 = *(_QWORD *)v10;
            }
            *(_BYTE *)(v19 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(a1);
            break;
          }
        }
        *(_BYTE *)(v19 + 24) = 0;
LABEL_61:
        v9 = v18;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v18 != (*a1)[1] );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)a3 + 5);
  std::_Deallocate(a3, 1uLL, 0x30uLL);
  v21 = a1[1];
  if ( v21 )
    a1[1] = (__int64 *)((char *)v21 - 1);
  result = a2;
  *a2 = v3;
  return result;
}
