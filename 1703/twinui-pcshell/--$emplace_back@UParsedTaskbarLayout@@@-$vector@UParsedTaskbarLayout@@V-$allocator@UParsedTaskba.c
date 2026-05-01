/*
 * XREFs of ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008CA34
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008B050 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18008CEF8 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAXPEAUParsedPenWorkspaceLayout@@$$QEAU2@@Z @ 0x18008CFFC (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedPenWorkspaceLayout.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008D274 (--$_Uninitialized_move_al_unchecked1@PEAUParsedTaskbarLayout@@PEAU1@V-$allocator@UParsedTaskbarL.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  char *v11; // rbx
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 104;
    if ( v7 == 0x276276276276276LL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v8 = (v4 - *a1) / 104;
    v9 = v8 >> 1;
    if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = 0LL;
    if ( v10 )
    {
      if ( v10 > 0x276276276276276LL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 104 * v10;
      if ( 104 * v10 < 0x1000 )
      {
        v11 = (char *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (char *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v11 - 1) = v13;
      }
    }
    try
    {
      std::_Wrap_alloc<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        v9,
        &v11[104 * v7],
        a2);
      std::_Uninitialized_move_al_unchecked1<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v11[104 * v7]);
      std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::destroy<ParsedTaskbarLayout>(v15, v14);
      std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(v16, v11, v10);
      throw;
    }
    return std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v11, v7 + 1, v10);
  }
  else
  {
    result = std::_Wrap_alloc<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
               v5,
               v5,
               a2);
    a1[1] += 104LL;
  }
  return result;
}
