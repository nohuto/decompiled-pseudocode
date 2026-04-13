/*
 * XREFs of ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1800551AC
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x180053174 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 *     _lambda_745238b28a452f34781447bba762a765_::operator() @ 0x180053624 (_lambda_745238b28a452f34781447bba762a765_--operator().c)
 *     _lambda_8a7c874b555d933b8350e794aef54fb5_::operator() @ 0x1800539F8 (_lambda_8a7c874b555d933b8350e794aef54fb5_--operator().c)
 *     _lambda_507b8746d9d21652e67ea22c8df447bd_::operator() @ 0x180053DC8 (_lambda_507b8746d9d21652e67ea22c8df447bd_--operator().c)
 *     _lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator() @ 0x180054274 (_lambda_ad70acd571a7801377b6a8c4f9458fc2_--operator().c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x18003C730 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180047A48 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@@-$_.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x1800558CC (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::map<std::wstring,std::wstring>::operator[](__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+38h] [rbp-49h] BYREF
  void *v10[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v11; // [rsp+58h] [rbp-29h]
  unsigned __int64 v12; // [rsp+60h] [rbp-21h]
  void *v13; // [rsp+68h] [rbp-19h] BYREF
  __int64 v14; // [rsp+78h] [rbp-9h]
  unsigned __int64 v15; // [rsp+80h] [rbp-1h]
  void *v16[3]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v17; // [rsp+A0h] [rbp+1Fh]

  v9[1] = -2LL;
  v4 = *(__int64 **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = *(__int64 **)a1;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, v5 + 4, a2) )
      {
        v5 = (__int64 *)v5[2];
      }
      else
      {
        v4 = v5;
        v5 = (__int64 *)*v5;
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
    v6 = *(__int64 **)a1;
  }
  if ( v4 == v6 || (unsigned __int8)std::less<std::wstring>::operator()(a1, a2, v4 + 4) )
  {
    v17 = 7LL;
    v16[2] = 0LL;
    LOWORD(v16[0]) = 0;
    v12 = 7LL;
    v11 = 0LL;
    LOWORD(v10[0]) = 0;
    std::wstring::_Assign_rv(v10, a2);
    v15 = 7LL;
    v14 = 0LL;
    LOWORD(v13) = 0;
    std::wstring::_Assign_rv(&v13, v16);
    v7 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
           a1,
           v10);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_hint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      a1,
      (unsigned int)v9,
      (_DWORD)v4,
      (_DWORD)v7 + 32,
      (__int64)v7);
    v4 = (__int64 *)v9[0];
    if ( v15 >= 8 )
      operator delete(v13);
    v15 = 7LL;
    v14 = 0LL;
    LOWORD(v13) = 0;
    if ( v12 >= 8 )
      operator delete(v10[0]);
    v12 = 7LL;
    v11 = 0LL;
    LOWORD(v10[0]) = 0;
    if ( v17 >= 8 )
      operator delete(v16[0]);
  }
  return v4 + 8;
}
