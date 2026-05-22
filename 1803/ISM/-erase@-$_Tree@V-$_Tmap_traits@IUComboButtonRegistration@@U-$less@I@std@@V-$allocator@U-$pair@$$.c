/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@0@Z @ 0x1800B80E4
 * Callers:
 *     ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1800B6E70 (--_GButtonRecognizer@@MEAAPEAXI@Z.c)
 *     ?Thunk_UnregisterComboButton_9@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800B8990 (-Thunk_UnregisterComboButton_9@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@2@@Z @ 0x1800B81F8 (-erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocat_ea_1800B81F8.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@Z @ 0x1800B8690 (-_Erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 **v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 *v11; // r8
  __int64 **v12; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == **a1 && a4 == (__int64 *)v8 )
  {
    v9 = v8[1];
    v10 = v9;
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase(
          a1,
          v10[2]);
        v10 = (__int64 *)*v10;
        std::vector<enum _Button>::_Tidy((unsigned __int64 *)v9 + 6);
        operator delete(v9);
        v9 = v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
      v8 = *a1;
    }
    v8[1] = (__int64 *)v8;
    **a1 = (__int64 *)*a1;
    (*a1)[2] = (__int64 *)*a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v11 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v12 = (__int64 **)v5[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (__int64 *)v5[2];
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::erase(
        a1,
        &v16,
        v11);
    }
    *a2 = v5;
  }
  return a2;
}
