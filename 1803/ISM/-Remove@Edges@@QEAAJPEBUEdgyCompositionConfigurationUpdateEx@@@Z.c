/*
 * XREFs of ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800685F0
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180067B80 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?FindEdge@Edges@@AEAAHIPEBG@Z @ 0x1800689E8 (-FindEdge@Edges@@AEAAHIPEBG@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180069120 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  int Edge; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12[4]; // [rsp+28h] [rbp-30h] BYREF

  Edge = Edges::FindEdge(this, *((_DWORD *)a2 + 4), (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
    return 2147942487LL;
  v4 = *(_QWORD *)this;
  v5 = 3LL * Edge;
  v6 = 0;
  v7 = 32 * v5;
  if ( *(_QWORD *)(*(_QWORD *)this + v7 + 24) )
  {
    v8 = *(_QWORD *)(v4 + v7 + 40);
    v6 = v8 != 0;
    if ( *(_DWORD *)(v4 + v7 + 64) )
      v6 = (v8 != 0) + 2;
  }
  if ( (v6 & 1) != 0 )
  {
    *(_DWORD *)(v4 + v7 + 64) = 0;
  }
  else
  {
    v9 = (_QWORD *)(v7 + v4 + 8);
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    std::wstring::wstring(v12, v9);
    std::vector<Edge>::erase(this, v11, v7 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate(v12);
  }
  return 0LL;
}
