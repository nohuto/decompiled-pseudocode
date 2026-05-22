/*
 * XREFs of ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B6B0C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800B70B0 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@XZ @ 0x1800B86E8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$al.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ComboButtonProcessor::Create(struct ComboButtonProcessor **a1)
{
  unsigned int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rcx

  v2 = 0;
  if ( a1 )
  {
    v3 = (__int64 *)malloc(0x128uLL);
    v4 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x128uLL);
    if ( v4 )
    {
      memset_0(v4, 0, 0x128uLL);
      v4[1] = (__int64)&RefCountedObject::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *v4 = (__int64)&ComboButtonProcessor::`vftable'{for `IContextualProcessor'};
      v4[1] = (__int64)&ComboButtonProcessor::`vftable'{for `RefCountedObject'};
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
      v4[6] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      v5 = v4 + 3;
      v6 = v4[3];
      if ( v6 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( (int)CoreUICreate(v4 + 3) >= 0 )
      {
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          v4 + 4,
          *v5);
        v7 = v4[6];
        if ( v7 )
        {
          v4[6] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v8 = (char *)malloc(0xD0uLL);
        v9 = v8;
        if ( v8 )
          memset_0(v8, 0, 0xD0uLL);
        if ( v9 )
        {
          memset_0(v9, 0, 0xD0uLL);
          *(_QWORD *)v9 = &RefCountedObject::`vftable';
          *((_DWORD *)v9 + 2) = 1;
          *(_QWORD *)v9 = &ButtonRecognizer::`vftable';
          *((_QWORD *)v9 + 4) = 0LL;
          *((_QWORD *)v9 + 5) = 0LL;
          *((_QWORD *)v9 + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Buyheadnode(v10);
          *((_QWORD *)v9 + 6) = 0LL;
          *((_QWORD *)v9 + 7) = 0LL;
          *((_QWORD *)v9 + 8) = 0LL;
          *((_DWORD *)v9 + 18) = 0;
          memset_0(v9 + 80, 0, 0x48uLL);
          *((_QWORD *)v9 + 11) = 0LL;
          *((_QWORD *)v9 + 12) = 0LL;
          *((_QWORD *)v9 + 13) = 0LL;
          *((_QWORD *)v9 + 19) = 0LL;
          *((_QWORD *)v9 + 20) = 0LL;
          *((_QWORD *)v9 + 21) = 0LL;
          *((_QWORD *)v9 + 22) = 0LL;
          *((_QWORD *)v9 + 23) = 0LL;
          *((_QWORD *)v9 + 24) = 0LL;
          *((_QWORD *)v9 + 25) = 0LL;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          if ( (int)ButtonRecognizer::Initialize((ButtonRecognizer *)v9) < 0 )
            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
          else
            v4[6] = (__int64)v9;
        }
      }
      *a1 = (struct ComboButtonProcessor *)v4;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
