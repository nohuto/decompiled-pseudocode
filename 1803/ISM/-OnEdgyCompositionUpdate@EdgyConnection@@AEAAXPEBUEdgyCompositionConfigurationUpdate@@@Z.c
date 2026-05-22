/*
 * XREFs of ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180067B80 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180068494 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x180068998 (-FindEdge@Edges@@AEAAHI@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180069120 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall EdgyConnection::OnEdgyCompositionUpdate(
        EdgyConnection *this,
        const struct EdgyCompositionConfigurationUpdate *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // edx
  _QWORD *v6; // rdi
  int Edge; // eax
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  int v10; // eax
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *((_DWORD *)a2 + 2);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        a4);
      __debugbreak();
    }
    v6 = (_QWORD *)((char *)this + 72);
    Edge = Edges::FindEdge((EdgyConnection *)((char *)this + 72), *((_DWORD *)a2 + 7));
    if ( Edge >= 0 )
    {
      v8 = 96LL * Edge;
      v9 = (_QWORD *)(v8 + *v6 + 8LL);
      if ( v9[3] >= 8uLL )
        v9 = (_QWORD *)*v9;
      std::wstring::wstring(v12, v9);
      std::vector<Edge>::erase(v6, v11, v8 + *v6);
      std::wstring::_Tidy_deallocate(v12);
    }
  }
  else
  {
    v10 = Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
  }
}
