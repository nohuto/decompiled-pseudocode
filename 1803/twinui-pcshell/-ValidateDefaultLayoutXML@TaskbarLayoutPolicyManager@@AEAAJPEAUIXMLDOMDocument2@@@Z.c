/*
 * XREFs of ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180149364
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x1801460A0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x18014560C (--$emplace_back@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGP.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801457C8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x180149960 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1802FBF88 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+28h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h]

  v8 = 0LL;
  v9 = 0LL;
  try
  {
    *(_QWORD *)&v7 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
    *((_QWORD *)&v7 + 1) = StartLayout::Schemas::StartLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      &v8,
      &v7);
    *(_QWORD *)&v7 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v7 + 1) = StartLayout::Schemas::TaskbarLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      &v8,
      &v7);
    *(_QWORD *)&v7 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v7 + 1) = StartLayout::Schemas::FullDefaultLayoutSchema;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
      &v8,
      &v7);
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2A2,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v8);
    return v11;
  }
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v7,
         &v8);
  v5 = StartLayout::ValidateLayoutFile(v4, a2);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v8);
  return v5;
}
