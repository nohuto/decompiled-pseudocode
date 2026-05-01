/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@Z @ 0x1801AC2B0
 * Callers:
 *     ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x1801AA450 (--_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@Z @ 0x1801AC2B0 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@NU-$less@PEAUHMONITOR__@@@std@@V-$allocator@U-$p.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@Z @ 0x1801AC2B0 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@NU-$less@PEAUHMONITOR__@@@std@@V-$allocator@U-$p.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      operator delete(v2);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
