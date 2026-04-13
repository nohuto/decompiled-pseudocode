/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@1@@Z @ 0x180096E10
 * Callers:
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x180096650 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180038F04 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x18003BCB0 (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@1@1@Z @ 0x180097088 (--$_Insert_at@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>> &,std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>,void *> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        void *a5)
{
  __int64 *v8; // rdi
  char v9; // r15
  __int64 *v10; // rbx
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 *i; // rax
  void *v16; // rdi
  char v17; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    v8 = *(__int64 **)a1;
    v10 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
    v9 = 1;
    while ( !*((_BYTE *)v10 + 25) )
    {
      v8 = v10;
      v9 = std::less<std::wstring>::operator()(a1, a4, v10 + 4);
      if ( v9 )
        v10 = (__int64 *)*v10;
      else
        v10 = (__int64 *)v10[2];
    }
    v11 = v8;
    if ( v9 )
    {
      if ( v8 == **(__int64 ***)a1 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Insert_at<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>> &,std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>,void *> *>(
                                     a1,
                                     (unsigned int)&v17,
                                     1,
                                     (_DWORD)v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v11 = (__int64 *)v8[2];
      }
      else
      {
        v14 = (__int64 *)*v8;
        if ( *(_BYTE *)(*v8 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)*i; i = (__int64 *)i[1] )
            v11 = i;
          if ( !*((_BYTE *)v11 + 25) )
            v11 = i;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
    }
    if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, v11 + 4, a4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Insert_at<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>> &,std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>,void *> *>(
                                   a1,
                                   (unsigned int)&v17,
                                   v9,
                                   (_DWORD)v8);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      v16 = a5;
      std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>((__int64)a5 + 32);
      operator delete(v16);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Destroy_if_not_nil(
      v12,
      a5);
    throw;
  }
  return result;
}
