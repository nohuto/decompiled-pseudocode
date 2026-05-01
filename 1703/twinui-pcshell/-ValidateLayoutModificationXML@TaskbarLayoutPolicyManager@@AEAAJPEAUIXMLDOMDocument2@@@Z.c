/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180088A38
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180086780 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180086CC0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x180089CB4 (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 *     ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x180089F98 (--$emplace_back@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGP.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008A600 (--$_Uninitialized_copy_al_unchecked1@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPE.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180173E70 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  unsigned int v4; // ebx
  __int128 v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  void *v8[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v11; // [rsp+80h] [rbp+8h]

  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  try
  {
    *(_QWORD *)&v6 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
    *((_QWORD *)&v6 + 1) = StartLayout::Schemas::StartLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      v8,
      &v6);
    *(_QWORD *)&v6 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v6 + 1) = StartLayout::Schemas::TaskbarLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      v8,
      &v6);
    *(_QWORD *)&v6 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v6 + 1) = StartLayout::Schemas::FullDefaultLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      v8,
      &v6);
    *(_QWORD *)&v6 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    *((_QWORD *)&v6 + 1) = StartLayout::Schemas::LayoutModificationSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      v8,
      &v6);
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x291,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    if ( v8[0] )
      std::_Deallocate((char *)v8[0], (signed __int64)(v9 - (unsigned __int64)v8[0]) >> 4, 0x10uLL);
    return v11;
  }
  v6 = 0LL;
  v7 = 0LL;
  if ( (unsigned __int8)std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(
                          &v6,
                          ((char *)v8[1] - (char *)v8[0]) >> 4) )
    *((_QWORD *)&v6 + 1) = std::_Uninitialized_copy_al_unchecked1<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
                             v8[0],
                             v8[1],
                             v6);
  v4 = StartLayout::ValidateLayoutFile(&v6, a2);
  if ( v8[0] )
    std::_Deallocate((char *)v8[0], (signed __int64)(v9 - (unsigned __int64)v8[0]) >> 4, 0x10uLL);
  return v4;
}
