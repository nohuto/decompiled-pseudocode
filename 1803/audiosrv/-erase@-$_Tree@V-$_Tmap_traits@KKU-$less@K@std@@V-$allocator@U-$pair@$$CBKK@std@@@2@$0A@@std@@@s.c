/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18001F980
 * Callers:
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB50 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001EDF0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001F1A0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18009980C (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_18009980C.c)
 * Callees:
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CB65C (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800D51D4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v7; // rcx
  __int64 i; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  HANDLE ProcessHeap; // rax
  __int64 *v16; // rax
  __int64 v18; // rdx
  void **v19; // rax
  char v20; // cl
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = a3[2];
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v3 != *(_QWORD **)(i + 16) )
          break;
        v3 = (_QWORD *)i;
      }
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v7, a2, a3);
    }
    v3 = (_QWORD *)i;
  }
  v9 = a3[2];
  if ( *(_BYTE *)(*a3 + 25LL) )
    goto LABEL_6;
  if ( *(_BYTE *)(v9 + 25) )
  {
    v9 = *a3;
LABEL_6:
    v10 = a3[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( (_QWORD *)(*a1)[1] == a3 )
    {
      (*a1)[1] = v9;
    }
    else if ( *(_QWORD **)v10 == a3 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    v11 = *a1;
    v12 = *a1;
    if ( (_QWORD *)**a1 == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v13 = v10;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v9, a2, v11);
      *v11 = v13;
      v11 = *a1;
      v12 = *a1;
    }
    if ( (_QWORD *)v12[2] == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v14 = v10;
      }
      else
      {
        v18 = *(_QWORD *)(v9 + 16);
        v14 = v9;
        if ( !*(_BYTE *)(v18 + 25) )
        {
          do
          {
            v14 = v18;
            v18 = *(_QWORD *)(v18 + 16);
          }
          while ( !*(_BYTE *)(v18 + 25) );
          v12 = v11;
        }
      }
      v12[2] = v14;
    }
    goto LABEL_18;
  }
  v9 = v3[2];
  if ( v3 == a3 )
    goto LABEL_6;
  *(_QWORD *)(*a3 + 8LL) = v3;
  *v3 = *a3;
  if ( v3 == (_QWORD *)a3[2] )
  {
    v10 = (__int64)v3;
  }
  else
  {
    v10 = v3[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    v3[2] = a3[2];
    *(_QWORD *)(a3[2] + 8LL) = v3;
  }
  if ( (_QWORD *)(*a1)[1] == a3 )
  {
    (*a1)[1] = (__int64)v3;
  }
  else
  {
    v19 = (void **)a3[1];
    if ( *v19 == a3 )
      *v19 = v3;
    else
      v19[2] = v3;
  }
  v3[1] = a3[1];
  v20 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v20;
LABEL_18:
  if ( *((_BYTE *)a3 + 24) != 1 )
    goto LABEL_21;
  if ( v9 != (*a1)[1] )
  {
    do
    {
      v21 = v10;
      if ( *(_BYTE *)(v9 + 24) != 1 )
        break;
      v22 = *(_QWORD *)v10;
      if ( v9 == *(_QWORD *)v10 )
      {
        v22 = *(_QWORD *)(v10 + 16);
        if ( !*(_BYTE *)(v22 + 24) )
        {
          *(_BYTE *)(v22 + 24) = 1;
          *(_BYTE *)(v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
            a1,
            v10);
          v22 = *(_QWORD *)(v10 + 16);
        }
        if ( *(_BYTE *)(v22 + 25) )
          goto LABEL_65;
        if ( *(_BYTE *)(*(_QWORD *)v22 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v22 + 24LL) = 1;
            *(_BYTE *)(v22 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(a1);
            v22 = *(_QWORD *)(v10 + 16);
          }
          *(_BYTE *)(v22 + 24) = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
            a1,
            v10);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v22 + 24) )
        {
          *(_BYTE *)(v22 + 24) = 1;
          *(_BYTE *)(v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(a1);
          v22 = *(_QWORD *)v10;
        }
        if ( *(_BYTE *)(v22 + 25) )
          goto LABEL_65;
        v23 = *(_QWORD *)(v22 + 16);
        if ( *(_BYTE *)(v23 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v22 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v22 + 24LL) == 1 )
          {
            *(_BYTE *)(v23 + 24) = 1;
            *(_BYTE *)(v22 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              a1,
              v22);
            v22 = *(_QWORD *)v10;
          }
          *(_BYTE *)(v22 + 24) = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v22 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(a1);
          break;
        }
      }
      *(_BYTE *)(v22 + 24) = 0;
LABEL_65:
      v9 = v21;
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v21 != (*a1)[1] );
  }
  *(_BYTE *)(v9 + 24) = 1;
LABEL_21:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a3);
  v16 = a1[1];
  *a2 = v3;
  if ( v16 )
    a1[1] = (__int64 *)((char *)v16 - 1);
  return a2;
}
