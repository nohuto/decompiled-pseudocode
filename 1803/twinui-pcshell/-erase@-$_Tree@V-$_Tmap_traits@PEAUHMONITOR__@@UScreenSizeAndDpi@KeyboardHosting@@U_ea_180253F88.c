/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x180253F88
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@0@Z @ 0x180253EBC (-erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUHM.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x18024FE94 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@@Z @ 0x1802B7810 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UIOcclu.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::erase(
        _QWORD *a1,
        char **a2,
        __int64 a3)
{
  char *v3; // rbx
  char *v6; // r11
  __int64 v7; // rcx
  char *i; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char **v16; // rax
  char v17; // cl
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  char **result; // rax

  v3 = (char *)a3;
  v6 = (char *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v7 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *(char **)(a3 + 8); !i[25] && v3 == *((char **)i + 2); i = (char *)*((_QWORD *)i + 1) )
        v3 = i;
    }
    else
    {
      i = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v7);
    }
    v3 = i;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v9 + 25) )
  {
    v9 = *(_QWORD *)a3;
LABEL_13:
    v10 = *(_QWORD *)(a3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(char **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( *(char **)v10 == v6 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    v11 = (_QWORD *)*a1;
    v12 = (_QWORD *)*a1;
    if ( *(char **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v13 = (_QWORD *)v10;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v9);
      *v11 = v13;
      v11 = (_QWORD *)*a1;
      v12 = (_QWORD *)*a1;
    }
    if ( (char *)v12[2] == v6 )
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
  v9 = *((_QWORD *)v3 + 2);
  if ( v3 == v6 )
    goto LABEL_13;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *(char **)(a3 + 16) )
  {
    v10 = (__int64)v3;
  }
  else
  {
    v10 = *((_QWORD *)v3 + 1);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *((_QWORD *)v3 + 2) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v3;
  }
  if ( *(char **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v16 = *(char ***)(a3 + 8);
    if ( *v16 == v6 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a3 + 8);
  v17 = v3[24];
  v3[24] = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v17;
LABEL_43:
  if ( v6[24] == 1 )
  {
    if ( v9 != *(_QWORD *)(*a1 + 8LL) )
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
              (__int64)a1,
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
              (__int64)a1,
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
                (__int64)a1,
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
      while ( v18 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  std::_Deallocate(v6, 1uLL, 0x38uLL);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
