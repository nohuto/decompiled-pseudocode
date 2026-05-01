/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180114684
 * Callers:
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1801EDE32 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1801164CC (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 152) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 156) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(a1 + 24);
  std::basic_iostream<unsigned short>::~basic_iostream<unsigned short,std::char_traits<unsigned short>>(v1 - 120);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
