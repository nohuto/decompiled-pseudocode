/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000EF40
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18000F0D0 (--$_Insert_nohint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-.c)
 *     ??$_Buynode@U?$pair@KH@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x18000F204 (--$_Buynode@U-$pair@KH@std@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // rax
  void *v6; // rax
  ATL::CAtlException *v8; // rbx
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v11; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+64h] [rbp+Ch]

  v2 = (char *)this + 40;
  v3 = (__int64 *)*((_QWORD *)this + 5);
  v4 = (__int64 *)v3[1];
  v5 = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 7) >= a2 )
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( v5 == v3 || a2 < *((_DWORD *)v5 + 7) )
    v5 = v3;
  if ( v5 == v3 )
  {
    try
    {
      v13 = a2;
      v14 = 1;
      v6 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode<std::pair<unsigned long,int>>(
                     v2,
                     &v13);
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        (int)v2,
        v6);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v8 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v13 = *(_DWORD *)v8;
      v9 = v13;
      if ( v13 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x70,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13,
        v10);
      return v9;
    }
  }
  else
  {
    ++*((_DWORD *)v5 + 8);
  }
  return 0LL;
}
