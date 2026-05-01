/*
 * XREFs of ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800EFD54
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1800EED50 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x18008C1B8 (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x1800F0130 (--$_Range_construct_or_tidy@PEBU-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocato.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801BF7E0 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateLayoutModificationXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  __int128 v9; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+50h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-60h]
  _QWORD v12[8]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = -2LL;
  try
  {
    v12[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
    v12[1] = StartLayout::Schemas::StartLayoutSchema;
    v12[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    v12[3] = StartLayout::Schemas::TaskbarLayoutSchema;
    v12[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    v12[5] = StartLayout::Schemas::FullDefaultLayoutSchema;
    v12[6] = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    v12[7] = StartLayout::Schemas::LayoutModificationSchema;
    v7 = 0LL;
    v8 = 0LL;
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Range_construct_or_tidy<std::pair<unsigned short const *,unsigned short const *> const *>(
      &v7,
      v12,
      v13);
    v9 = v7;
    v10 = v8;
    v7 = 0LL;
    v8 = 0LL;
    v3 = StartLayout::ValidateLayoutFile(&v9, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((unsigned __int64 *)&v7);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x137,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v3);
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((unsigned __int64 *)&v7);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x139,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v5);
  }
  return result;
}
