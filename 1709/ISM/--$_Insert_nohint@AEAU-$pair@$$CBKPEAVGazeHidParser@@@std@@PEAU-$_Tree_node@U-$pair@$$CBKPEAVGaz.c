/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KPEAVGazeHidParser@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKPEAVGazeHidParser@@@1@PEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@1@@Z @ 0x18009C2B0
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KPEAVGazeHidParser@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@1@AEAU?$pair@$$CBKPEAVGazeHidParser@@@1@1@Z @ 0x18008C7CC (--$_Insert_at@AEAU-$pair@$$CBKPEAVGazeHidParser@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKPEAVGazeHid.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Insert_nohint<std::pair<unsigned long const,GazeHidParser *> &,std::_Tree_node<std::pair<unsigned long const,GazeHidParser *>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *Block)
{
  __int64 *v7; // rax
  __int64 *v8; // r9
  char v9; // r10
  unsigned int v10; // r8d
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 *i; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v7 = (__int64 *)(*a1)[1];
    v8 = *a1;
    v9 = 1;
    if ( !*((_BYTE *)v7 + 25) )
    {
      v10 = *a4;
      do
      {
        v8 = v7;
        v9 = v10 < *((_DWORD *)v7 + 8);
        if ( v10 >= *((_DWORD *)v7 + 8) )
          v7 = (__int64 *)v7[2];
        else
          v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
    v11 = v8;
    if ( v9 )
    {
      if ( v8 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Insert_at<std::pair<unsigned long const,GazeHidParser *> &,std::_Tree_node<std::pair<unsigned long const,GazeHidParser *>,void *> *>(
                           a1,
                           &v17,
                           1,
                           v8,
                           v16,
                           Block);
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
    if ( *((_DWORD *)v11 + 8) >= *a4 )
    {
      operator delete(Block);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Insert_at<std::pair<unsigned long const,GazeHidParser *> &,std::_Tree_node<std::pair<unsigned long const,GazeHidParser *>,void *> *>(
                         a1,
                         &v17,
                         v9,
                         v8,
                         v16,
                         Block);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v12,
      Block);
    throw;
  }
  return result;
}
