/*
 * XREFs of ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800CCDD8
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1800CBEF0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x180089CB4 (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008A600 (--$_Uninitialized_copy_al_unchecked1@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPE.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180173E70 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::ValidateDefaultLayoutXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  __int128 v7; // [rsp+38h] [rbp-80h] BYREF
  __int64 v8; // [rsp+48h] [rbp-70h]
  __int128 v9; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+60h] [rbp-58h]
  __int64 v11; // [rsp+68h] [rbp-50h]
  __int128 v12; // [rsp+70h] [rbp-48h] BYREF
  const wchar_t *v13; // [rsp+80h] [rbp-38h]
  unsigned __int16 *v14; // [rsp+88h] [rbp-30h]
  const wchar_t *v15; // [rsp+90h] [rbp-28h]
  unsigned __int16 *v16; // [rsp+98h] [rbp-20h]
  __int128 v17; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = -2LL;
  try
  {
    *(_QWORD *)&v12 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
    *((_QWORD *)&v12 + 1) = StartLayout::Schemas::StartLayoutSchema;
    v13 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    v14 = StartLayout::Schemas::TaskbarLayoutSchema;
    v15 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    v16 = StartLayout::Schemas::FullDefaultLayoutSchema;
    v7 = 0LL;
    v8 = 0LL;
    if ( std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(&v7, 3uLL) )
      *((_QWORD *)&v7 + 1) = std::_Uninitialized_copy_al_unchecked1<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
                               &v12,
                               &v17,
                               (_OWORD *)v7);
    v9 = v7;
    v10 = v8;
    v7 = 0LL;
    v8 = 0LL;
    v3 = StartLayout::ValidateLayoutFile(&v9, a2);
    v5 = v3;
    if ( v3 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x125,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x127,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v4);
  }
  return result;
}
