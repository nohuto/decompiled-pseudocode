/*
 * XREFs of ??$destroy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@1@@Z @ 0x180076CD8
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x180076BA8 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_180076BA8.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180076D9C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHol.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x180076C00 (-_Erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>,void *>>>::destroy<std::pair<std::wstring const,Windows::Internal::Holographic::HolographicDisplaySnapshot>>(
        __int64 a1,
        unsigned __int64 *a2)
{
  void **v3; // r14
  unsigned __int64 *v4; // rbx
  unsigned __int64 *i; // rdi

  `eh vector destructor iterator'(
    a2 + 27,
    0x158uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty);
  v3 = (void **)(a2 + 9);
  v4 = *(unsigned __int64 **)(a2[9] + 8);
  for ( i = v4; !*((_BYTE *)i + 25); v4 = i )
  {
    std::_Tree<std::_Tset_traits<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,std::less<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,std::allocator<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,0>>::_Erase(
      (__int64)(a2 + 9),
      (unsigned __int64 *)i[2]);
    i = (unsigned __int64 *)*i;
    std::wstring::_Tidy_deallocate(v4 + 4);
    operator delete(v4);
  }
  *((_QWORD *)*v3 + 1) = *v3;
  *(_QWORD *)*v3 = *v3;
  *((_QWORD *)*v3 + 2) = *v3;
  a2[10] = 0LL;
  operator delete(*v3);
  std::wstring::_Tidy_deallocate(a2 + 4);
  return std::wstring::_Tidy_deallocate(a2);
}
