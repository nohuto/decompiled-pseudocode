/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x1800BD734
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800B8950 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@1@Z @ 0x1800BDDB4 (--$_Insert_at@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverHan.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_nohint<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
        _QWORD **a1,
        __int64 a2,
        char a3,
        HSTRING *a4,
        HSTRING *Block)
{
  _QWORD *v8; // r14
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  int v11; // eax
  bool v12; // r12
  __int64 *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 i; // rax
  const WCHAR *v19; // rdi
  const WCHAR *v20; // rax
  HSTRING *v21; // rdi
  volatile signed __int32 *v22; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  UINT32 v25; // [rsp+30h] [rbp-58h] BYREF
  UINT32 v26; // [rsp+34h] [rbp-54h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  _QWORD *v29; // [rsp+48h] [rbp-40h]
  char v30; // [rsp+50h] [rbp-38h] BYREF
  char v31; // [rsp+58h] [rbp-30h] BYREF
  UINT32 length; // [rsp+90h] [rbp+8h] BYREF
  UINT32 v33; // [rsp+A0h] [rbp+18h] BYREF

  LOBYTE(v33) = a3;
  v28 = -2LL;
  try
  {
    v8 = *a1;
    v13 = (__int64 *)(*a1)[1];
    v12 = 1;
    while ( !*((_BYTE *)v13 + 25) )
    {
      v8 = v13;
      StringRawBuffer = WindowsGetStringRawBuffer(*a4, &length);
      v10 = WindowsGetStringRawBuffer((HSTRING)v13[4], &v33);
      v11 = CompareStringOrdinal(StringRawBuffer, length, v10, v33, 1);
      v12 = v11 == 1;
      if ( v11 == 1 )
        v13 = (__int64 *)*v13;
      else
        v13 = (__int64 *)v13[2];
    }
    v14 = v8;
    v27 = v8;
    if ( v12 )
    {
      v29 = (_QWORD *)**a1;
      if ( v8 == v29 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v30,
                                     1,
                                     (_DWORD)v8,
                                     bIgnoreCase,
                                     (__int64)Block);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v14 = (_QWORD *)v8[2];
      }
      else
      {
        v17 = *v8;
        if ( *(_BYTE *)(*v8 + 25LL) )
        {
          for ( i = v8[1]; !*(_BYTE *)(i + 25) && v14 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
            v14 = (_QWORD *)i;
          if ( !*((_BYTE *)v14 + 25) )
            v14 = (_QWORD *)i;
        }
        else
        {
          do
          {
            v14 = (_QWORD *)v17;
            v17 = *(_QWORD *)(v17 + 16);
          }
          while ( !*(_BYTE *)(v17 + 25) );
        }
      }
      v27 = v14;
    }
    v19 = WindowsGetStringRawBuffer((HSTRING)v14[4], &v26);
    v20 = WindowsGetStringRawBuffer(*a4, &v25);
    if ( CompareStringOrdinal(v19, v26, v20, v25, 1) == 1 )
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                                   (_DWORD)a1,
                                   (unsigned int)&v31,
                                   v12,
                                   (_DWORD)v8,
                                   bIgnoreCasea,
                                   (__int64)Block);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v21 = Block;
      v22 = (volatile signed __int32 *)Block[6];
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        v14 = v27;
      }
      WindowsDeleteString(v21[4]);
      v21[4] = 0LL;
      operator delete(v21);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Destroy_if_not_nil(
      v15,
      Block);
    throw;
  }
  return result;
}
