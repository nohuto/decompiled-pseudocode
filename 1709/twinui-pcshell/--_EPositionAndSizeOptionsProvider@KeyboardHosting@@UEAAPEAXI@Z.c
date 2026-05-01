/*
 * XREFs of ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x1801AA450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@Z @ 0x1801AC2B0 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@NU-$less@PEAUHMONITOR__@@@std@@V-$allocator@U-$p.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::`vector deleting destructor'(
        KeyboardHosting::PositionAndSizeOptionsProvider *this,
        char a2)
{
  void **v4; // r14
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  v4 = (void **)((char *)this + 16);
  v5 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL);
  for ( i = v5; !*((_BYTE *)i + 25); v5 = i )
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Erase(
      v4,
      i[2]);
    i = (_QWORD *)*i;
    operator delete(v5);
  }
  *((_QWORD *)*v4 + 1) = *v4;
  *(_QWORD *)*v4 = *v4;
  *((_QWORD *)*v4 + 2) = *v4;
  v4[1] = 0LL;
  operator delete(*v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
