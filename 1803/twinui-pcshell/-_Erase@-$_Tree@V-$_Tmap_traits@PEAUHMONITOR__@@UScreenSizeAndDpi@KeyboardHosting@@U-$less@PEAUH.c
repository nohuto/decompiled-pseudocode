/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x180253E48
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x180253E48 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUH.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@2@0@Z @ 0x180253EBC (-erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUHM.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x180253E48 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUH.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Erase(
        __int64 a1,
        char *a2)
{
  char *v2; // rbx
  char *i; // rdi

  v2 = a2;
  for ( i = a2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    i = *(char **)i;
    std::_Deallocate(v2, 1uLL, 0x38uLL);
  }
}
