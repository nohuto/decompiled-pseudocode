/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBHUCursorGlyphInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@@Z @ 0x180029C04
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@@Z @ 0x1800296EC (--$_Insert_hint@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGly.c)
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@1@Z @ 0x180029980 (--$_Insert_at@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGlyph.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_nohint<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        unsigned __int64 *Block)
{
  unsigned __int64 *v8; // rsi
  __int64 **v9; // rdx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r9
  char v12; // r8
  int v13; // ecx
  unsigned __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned __int64 *v17; // rax
  unsigned __int64 i; // rax
  __int64 v19; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v20; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v8 = Block;
    v9 = *a1;
    v10 = (unsigned __int64 *)(*a1)[1];
    v11 = (unsigned __int64 *)*a1;
    v12 = 1;
    if ( !*((_BYTE *)v10 + 25) )
    {
      v13 = *a4;
      do
      {
        v11 = v10;
        v12 = v13 < *((_DWORD *)v10 + 8);
        if ( v13 >= *((_DWORD *)v10 + 8) )
          v10 = (unsigned __int64 *)v10[2];
        else
          v10 = (unsigned __int64 *)*v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
    }
    v14 = v11;
    if ( v12 )
    {
      if ( v11 == (unsigned __int64 *)*v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_at<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
                           a1,
                           &v20,
                           1,
                           (unsigned __int64 **)v11,
                           v19,
                           Block);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v11 + 25) )
      {
        v14 = (unsigned __int64 *)v11[2];
      }
      else
      {
        v17 = (unsigned __int64 *)*v11;
        if ( *(_BYTE *)(*v11 + 25) )
        {
          for ( i = v11[1]; !*(_BYTE *)(i + 25) && v14 == *(unsigned __int64 **)i; i = *(_QWORD *)(i + 8) )
            v14 = (unsigned __int64 *)i;
          if ( !*((_BYTE *)v14 + 25) )
            v14 = (unsigned __int64 *)i;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (unsigned __int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v14 + 8) >= *a4 )
    {
      std::string::~string(Block + 5);
      operator delete(v8);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_at<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
                         a1,
                         &v20,
                         v12,
                         (unsigned __int64 **)v11,
                         v19,
                         Block);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Destroy_if_not_nil(
      v15,
      Block);
    throw;
  }
  return result;
}
