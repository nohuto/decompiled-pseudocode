/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011D34
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18000F4C0 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180030E24 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x180031318 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEN.c)
 */

__int64 *__fastcall std::map<std::wstring,ENDPOINT_REF_DATA>::_Try_emplace<std::wstring,>(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  _QWORD *v3; // rax
  __int64 *v4; // rbx
  _QWORD *v6; // rsi
  __int64 *v7; // r9
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int16 v12; // r11
  int v13; // eax
  unsigned __int16 *v15; // rcx
  __int64 *v16; // r10
  unsigned __int64 v17; // rbp
  __int64 v18; // r10
  unsigned __int16 v19; // r11
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int16 *v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD **)a1;
  v4 = (__int64 *)a2;
  v6 = *(_QWORD **)a1;
  v7 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v7 + 25) )
  {
    v15 = a3;
    if ( *((_QWORD *)a3 + 3) >= 8uLL )
      v15 = *(unsigned __int16 **)a3;
    v16 = v7 + 4;
    if ( (unsigned __int64)v7[7] >= 8 )
      v16 = (__int64 *)v7[4];
    v17 = v7[6];
    a2 = (unsigned __int16 *)v17;
    if ( *((_QWORD *)a3 + 2) < v17 )
      a2 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
    if ( a2 )
    {
      v18 = (char *)v16 - (char *)v15;
      while ( 1 )
      {
        v19 = *(unsigned __int16 *)((char *)v15 + v18);
        if ( v19 != *v15 )
          break;
        ++v15;
        a2 = (unsigned __int16 *)((char *)a2 - 1);
        if ( !a2 )
          goto LABEL_31;
      }
      v20 = v19 < *v15 ? -1 : 1;
    }
    else
    {
LABEL_31:
      v20 = 0;
    }
    if ( !v20 )
    {
      if ( v17 < *((_QWORD *)a3 + 2) )
        v20 = -1;
      else
        LOBYTE(v20) = v17 > *((_QWORD *)a3 + 2);
    }
    if ( v20 < 0 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  if ( v6 == v3 )
    goto LABEL_37;
  v8 = (unsigned __int16 *)(v6 + 4);
  if ( v6[7] >= 8uLL )
    v8 = (unsigned __int16 *)v6[4];
  a2 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a2 = *(unsigned __int16 **)a3;
  v9 = v6[6];
  v10 = *((_QWORD *)a3 + 2);
  v11 = v10;
  if ( v9 < v10 )
    v11 = v6[6];
  if ( v11 )
  {
    a2 = (unsigned __int16 *)((char *)a2 - (__int64)v8);
    while ( 1 )
    {
      v12 = *(unsigned __int16 *)((char *)v8 + (_QWORD)a2);
      if ( v12 != *v8 )
        break;
      ++v8;
      if ( !--v11 )
        goto LABEL_14;
    }
    v13 = v12 < *v8 ? -1 : 1;
  }
  else
  {
LABEL_14:
    v13 = 0;
  }
  if ( !v13 )
  {
    if ( v10 < v9 )
      v13 = -1;
    else
      LOBYTE(v13) = v10 > v9;
  }
  if ( v13 < 0 )
  {
LABEL_37:
    v22 = a3;
    v21 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
            a1,
            a2,
            &v22);
    std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Insert_hint<std::pair<std::wstring const,ENDPOINT_REF_DATA> &,std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *> *>(
      a1,
      (unsigned int)&v22,
      (_DWORD)v6,
      v21 + 32,
      v21);
    *v4 = (__int64)v22;
    *((_BYTE *)v4 + 8) = 1;
  }
  else
  {
    *v4 = (__int64)v6;
    *((_BYTE *)v4 + 8) = 0;
  }
  return v4;
}
