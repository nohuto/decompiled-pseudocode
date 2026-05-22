/*
 * XREFs of ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x180022F90
 * Callers:
 *     ?RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001C2E0 (-RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayBinding@@@WRL@Microsoft@@@012@$$QEAIAEBU_GUID@@$$QEAW4Dimension@@@Z @ 0x18001F2F4 (--$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV-$.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x1800319D8 (-Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800321D0 (-Dispose@PropertyVector@Input@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DisplayBinding::RuntimeClassInitialize(__int64 a1, int a2, _OWORD *a3, int a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  void **v11; // [rsp+40h] [rbp-41h] BYREF
  struct _GUID v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  void *Block; // [rsp+60h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  void **v17; // [rsp+78h] [rbp-9h] BYREF
  struct _GUID v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int128 v20; // [rsp+98h] [rbp+17h] BYREF
  __int128 v21; // [rsp+A8h] [rbp+27h]

  *(_DWORD *)(a1 + 40) = a2;
  *(_OWORD *)(a1 + 48) = *a3;
  *(_DWORD *)(a1 + 44) = a4;
  v17 = &Input::PropertyNode::`vftable';
  v18 = DISPLAYBINDING_MONITORS;
  v19 = 0LL;
  Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v17);
  v20 = 0LL;
  v21 = 0LL;
  v17 = &Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::`vftable';
  v11 = &Input::PropertyNode::`vftable';
  v12 = DISPLAYBINDING_ORIENTATION;
  v13 = 0LL;
  Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v11);
  Block = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v11 = &Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::`vftable';
  v5 = a1 + 16;
  v6 = (a1 + 16) & -(__int64)(a1 != 0);
  if ( *((_QWORD *)&v21 + 1) != v6 )
  {
    if ( *((_QWORD *)&v21 + 1) && v6 )
    {
      LOBYTE(v7) = 87;
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 45;
LABEL_19:
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v9, v7);
        goto LABEL_20;
      }
      goto LABEL_20;
    }
    *((_QWORD *)&v21 + 1) = (a1 + 16) & -(__int64)(a1 != 0);
  }
  v7 = Input::PropertyMap::Insert((Input::PropertyMap *)(a1 + 64));
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v16 != v6 )
    {
      if ( v16 && v6 )
      {
        LOBYTE(v7) = 87;
        v8 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 49;
          goto LABEL_19;
        }
        goto LABEL_20;
      }
      v16 = (a1 + 16) & -(__int64)(a1 != 0);
    }
    v7 = Input::PropertyMap::Insert((Input::PropertyMap *)(a1 + 64));
    v8 = v7;
    if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 50;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 46;
    goto LABEL_19;
  }
LABEL_20:
  v11 = &Input::Property::`vftable';
  operator delete(Block);
  Block = 0LL;
  v15 = 0LL;
  operator delete(0LL);
  Block = 0LL;
  v15 = 0LL;
  v11 = &Input::PropertyNode::`vftable';
  v17 = &Input::PropertyVector::`vftable';
  Input::PropertyVector::Dispose((Input::PropertyVector *)&v17);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)&v20);
  return v8;
}
