/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@0@Z @ 0x180253EBC
 * Callers:
 *     ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180251810 (--_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x180253E48 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUH.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x180253F88 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U_ea_180253F88.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *i; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (_QWORD *)**a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Erase(
      (__int64)a1,
      (char *)v8[1]);
    (*a1)[1] = *a1;
    **a1 = *a1;
    (*a1)[2] = *a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v10 = v5[2];
        if ( *(_BYTE *)(v10 + 25) )
        {
          for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v5 = i;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v10);
        }
        v5 = i;
      }
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::erase(
        a1,
        &v13,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
