/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180256BCC
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180256950 (--$_Insert_hint@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@1@Z @ 0x1802567B0 (--$_Insert_at@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_no.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_nohint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        char **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char *a5)
{
  char *v8; // rax
  char *v9; // r9
  char v10; // r10
  char *v11; // rbx
  __int64 result; // rax
  char *v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  char *v17; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v8 = (char *)*((_QWORD *)*a1 + 1);
    v9 = *a1;
    v10 = 1;
    while ( !v8[25] )
    {
      v9 = v8;
      if ( *a4 >= *((_QWORD *)v8 + 4) )
      {
        v10 = 0;
        v8 = (char *)*((_QWORD *)v8 + 2);
      }
      else
      {
        v10 = 1;
        v8 = *(char **)v8;
      }
    }
    v11 = v9;
    if ( v10 )
    {
      if ( v9 == *(char **)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
                           a1,
                           &v17,
                           1,
                           (char **)v9,
                           v16,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( v9[25] )
      {
        v11 = (char *)*((_QWORD *)v9 + 2);
      }
      else
      {
        v13 = *(char **)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v14 = *((_QWORD *)v9 + 1);
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v15 = v9;
            do
            {
              if ( v15 != *(char **)v14 )
                break;
              v11 = (char *)v14;
              v14 = *(_QWORD *)(v14 + 8);
              v15 = v11;
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
          if ( !v11[25] )
            v11 = (char *)v14;
        }
        else
        {
          do
          {
            v11 = v13;
            v13 = (char *)*((_QWORD *)v13 + 2);
          }
          while ( !v13[25] );
        }
      }
    }
    if ( *((_QWORD *)v11 + 4) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x38uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
                         a1,
                         &v17,
                         v10,
                         (char **)v9,
                         v16,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate(a5, 1uLL, 0x38uLL);
    throw;
  }
  return result;
}
