/*
 * XREFs of ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019B678
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x18019A580 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x180149960 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x18019A410 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1802FBF88 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateLayoutModificationXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+30h] [rbp-88h]
  int v8[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v9; // [rsp+50h] [rbp-68h]
  __int64 v10; // [rsp+58h] [rbp-60h]
  _QWORD v11[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v10 = -2LL;
  v11[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v11[1] = StartLayout::Schemas::StartLayoutSchema;
  v11[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v11[3] = StartLayout::Schemas::TaskbarLayoutSchema;
  v11[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v11[5] = StartLayout::Schemas::FullDefaultLayoutSchema;
  v11[6] = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
  v11[7] = StartLayout::Schemas::LayoutModificationSchema;
  *(_QWORD *)v6 = v11;
  *(_QWORD *)&v6[2] = &v12;
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
    v8,
    (__int64 *)v6);
  *(_OWORD *)v6 = *(_OWORD *)v8;
  v7 = v9;
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  v3 = StartLayout::ValidateLayoutFile(v6, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v3);
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v8);
    return v4;
  }
}
