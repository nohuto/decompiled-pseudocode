/*
 * XREFs of wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180026024
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180025CE0 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1800F550C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 * Callees:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180026130 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802B5BA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B5C08 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  int v4; // eax
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 *v11; // rax
  _DWORD *v12; // r9
  wil **v13; // rdi
  wil *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-38h]
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v21; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v21 = *(unsigned int **)a1[1];
    v3 = *a1;
    v18[0] = &v21;
    v18[1] = v3;
    v4 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(v18);
    v5 = (unsigned int)v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v4,
        v17);
    else
      v5 = 0LL;
    if ( (v5 & 0x80000000) != 0LL )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x241,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v5,
        v17);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1[1] + 24LL))(*(_QWORD *)a1[1], &v20);
      v9 = retaddr;
      if ( v6 >= 0 )
      {
        v1 = *a1;
        v10 = *(_QWORD *)(*a1 + 136);
        v11 = *(__int64 **)(v10 + 8);
        v5 = v10;
        if ( *((_BYTE *)v11 + 25) )
          goto LABEL_22;
        v7 = v20;
        do
        {
          v12 = v11;
          if ( *((_DWORD *)v11 + 8) < (unsigned int)v7 )
          {
LABEL_21:
            LOBYTE(v8) = 1;
            v11 = (__int64 *)v11[2];
          }
          else
          {
            LOBYTE(v8) = 0;
            v11 = (__int64 *)*v11;
          }
          if ( !(_BYTE)v8 )
            v5 = (unsigned __int64)v12;
        }
        while ( !*((_BYTE *)v11 + 25) );
        if ( v5 == v10 || (unsigned int)v7 < *(_DWORD *)(v5 + 32) )
        {
LABEL_22:
          v21 = &v20;
          v16 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                  v1 + 136,
                  v7,
                  &v21);
          std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
            v1 + 136,
            (unsigned int)&v21,
            v5,
            v16 + 32,
            v16);
          v5 = (unsigned __int64)v21;
        }
        v13 = *(wil ***)a1[2];
        v14 = *(wil **)(v5 + 40);
        if ( v14 )
        {
          (*(void (__fastcall **)(wil *, __int64, __int64, _DWORD *))(*(_QWORD *)v14 + 8LL))(v14, v7, v8, v12);
          v14 = *(wil **)(v5 + 40);
        }
        *v13 = v14;
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x245,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6,
      v17);
    goto LABEL_21;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v14);
  }
  return result;
}
