/*
 * XREFs of ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180066710
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4 (-FindEdge@Edges@@AEAAHPEBG@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180069120 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnDisconnected(EdgyControllerClientProxy *this)
{
  const unsigned __int16 *v1; // rdx
  __int64 v3; // rsi
  int Edge; // eax
  const char *v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (const unsigned __int16 *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  v3 = *(_QWORD *)(*((_QWORD *)this + 15) + 56LL);
  Edge = Edges::FindEdge((Edges *)(v3 + 72), v1);
  if ( Edge < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x180066861LL);
  }
  v6 = 0;
  v7 = 3LL * Edge;
  v8 = *(_QWORD *)(v3 + 72);
  v9 = 32 * v7;
  if ( *(_QWORD *)(v8 + v9 + 24) )
  {
    LOBYTE(v6) = *(_QWORD *)(v8 + v9 + 40) != 0LL;
    if ( *(_DWORD *)(v8 + v9 + 64) )
      v6 = 2;
  }
  if ( (unsigned __int8)(v6 >> 1) )
  {
    v11 = *(_QWORD *)(v8 + v9 + 40);
    if ( v11 )
    {
      *(_QWORD *)(v8 + v9 + 40) = 0LL;
      (**(void (__fastcall ***)(__int64))(v11 + 16))(v11 + 16);
    }
  }
  else
  {
    if ( this != *(EdgyControllerClientProxy **)(v8 + v9 + 40) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1B0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v5);
      __debugbreak();
    }
    v10 = (_QWORD *)(v9 + v8 + 8);
    if ( v10[3] >= 8uLL )
      v10 = (_QWORD *)*v10;
    std::wstring::wstring(v15, v10);
    std::vector<Edge>::erase(v3 + 72, v14, v9 + *(_QWORD *)(v3 + 72));
    std::wstring::_Tidy_deallocate(v15);
  }
  v12 = *((_QWORD *)this + 15);
  if ( v12 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (**(void (__fastcall ***)(__int64))(v12 + 16))(v12 + 16);
  }
  return 0LL;
}
