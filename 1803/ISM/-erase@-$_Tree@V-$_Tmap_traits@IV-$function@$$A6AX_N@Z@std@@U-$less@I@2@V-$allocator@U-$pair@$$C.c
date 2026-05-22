/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18000809C
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005DCF4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800083A0 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocato_ea_1800083A0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
        __int64 ***a1,
        unsigned int *a2)
{
  __int64 **v2; // r10
  __int64 **v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // ecx
  __int64 **v10; // rdx
  __int64 *j; // rax
  __int64 v12; // rbx
  __int64 **v13; // rcx
  __int64 *v14; // rdx
  __int64 *i; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = *a1;
  v6 = (*a1)[1];
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *((_DWORD *)v7 + 8) >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *((_DWORD *)v7 + 8) )
          v5 = (__int64 **)v7;
        v2 = (__int64 **)v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v9 = *((_DWORD *)v6 + 8);
    v10 = (__int64 **)v6;
    if ( *a2 >= v9 )
      v6 = (__int64 *)v6[2];
    else
      v6 = (__int64 *)*v6;
    if ( *a2 >= v9 )
      v10 = v5;
    v5 = v10;
  }
  j = (__int64 *)v2;
  v12 = 0LL;
  if ( v2 != v5 )
  {
    do
    {
      ++v12;
      if ( !*((_BYTE *)j + 25) )
      {
        v13 = (__int64 **)j[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v14 = *v13;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
            j = v14;
        }
      }
    }
    while ( j != (__int64 *)v5 );
  }
  std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
    a1,
    &v17,
    v2);
  return v12;
}
