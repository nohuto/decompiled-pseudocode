/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004DAB8
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004DD00 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180050D6C (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_ @ 0x180050E90 (std--_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rdi
  char *v3; // rsi
  struct IMPCInputProviderBase **i; // r14
  struct IMPCInputProviderBase *v7; // rbx
  char *v8; // rbx
  char *v9; // rsi
  struct IMPCInputProviderBase *v10; // rdx
  __int64 v11; // rcx
  char *v12; // r8
  __int64 v13; // rdi
  const char *v14; // r9
  char *v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 *v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  struct IMPCInputProviderBase *v22; // rcx
  int v23[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v25; // [rsp+70h] [rbp+8h] BYREF
  char v26; // [rsp+78h] [rbp+10h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 247);
  v3 = (char *)this + 1968;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 246); i != v2; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a2 == v7 )
      break;
  }
  if ( i != *((struct IMPCInputProviderBase ***)this + 247) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 248LL))(a2) )
    {
      v8 = (char *)*((_QWORD *)this + 279);
      v9 = (char *)*((_QWORD *)this + 278);
      if ( ((v8 - v9) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v10 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 250);
        if ( v10 )
        {
          MPCHolographicInputManager::SetProviderPrimary(this, v10);
        }
        else
        {
          if ( v9 != v8 )
          {
            do
            {
              v11 = *(_QWORD *)v9;
              if ( *(_QWORD *)v9 )
              {
                *(_QWORD *)v9 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
              }
              v9 += 8;
            }
            while ( v9 != v8 );
            v9 = (char *)*((_QWORD *)this + 278);
          }
          *((_QWORD *)this + 279) = v9;
        }
      }
      else
      {
        v12 = (char *)*((_QWORD *)this + 279);
        *(_QWORD *)v23 = this;
        *(_QWORD *)&v23[2] = a2;
        v25 = v12;
        v13 = *(_QWORD *)std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_(&v26, v23);
        if ( v9 != v15 )
        {
          do
          {
            v16 = *(_QWORD *)v9;
            if ( *(_QWORD *)v9 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)v9);
            v17 = *(_QWORD *)(v13 + 8);
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            if ( v17 == v16 )
              break;
            v9 += 8;
          }
          while ( v9 != v25 );
        }
        if ( v9 == *((char **)this + 279) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xEA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v14);
          __debugbreak();
        }
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 2224, &v25, v9);
      }
      v3 = (char *)this + 1968;
    }
    v18 = (__int64 *)*((_QWORD *)this + 253);
    if ( v18 )
    {
      v19 = *v18;
      v20 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v19 + 104))(v18, v20);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v21);
        JUMPOUT(0x18004DCFCLL);
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v25, i);
  }
  v22 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 250);
  if ( a2 == v22 )
  {
    if ( v22 )
    {
      *((_QWORD *)this + 250) = 0LL;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
}
