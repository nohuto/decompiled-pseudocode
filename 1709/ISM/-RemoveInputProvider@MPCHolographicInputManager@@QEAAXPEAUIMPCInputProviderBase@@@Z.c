/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800568F4
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180060330 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180056B1C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800598FC (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rdi
  char *v3; // r14
  struct IMPCInputProviderBase **i; // r15
  struct IMPCInputProviderBase *v7; // rbx
  const char *v8; // r9
  char *v9; // rdi
  char *v10; // rbx
  struct IMPCInputProviderBase *v11; // rdx
  __int64 v12; // rcx
  struct IMPCInputProviderBase **v13; // rdi
  struct IMPCInputProviderBase **v14; // r14
  struct IMPCInputProviderBase *v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 386);
  v3 = (char *)this + 3080;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 385); i != v2; ++i )
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
  if ( i != *((struct IMPCInputProviderBase ***)this + 386) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 240LL))(a2) )
    {
      v9 = (char *)*((_QWORD *)this + 418);
      v10 = (char *)*((_QWORD *)this + 417);
      if ( ((v9 - v10) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v11 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 390);
        if ( v11 )
        {
          MPCHolographicInputManager::SetProviderPrimary(this, v11);
        }
        else
        {
          while ( v10 != v9 )
          {
            v12 = *(_QWORD *)v10;
            if ( *(_QWORD *)v10 )
            {
              *(_QWORD *)v10 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
            v10 += 8;
          }
          *((_QWORD *)this + 418) = *((_QWORD *)this + 417);
        }
      }
      else
      {
        v13 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 418);
        v14 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 417);
        if ( v10 != (char *)v13 )
        {
          do
          {
            v15 = *v14;
            if ( *v14 )
              (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 8LL))(*v14);
            if ( v15 )
              (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 16LL))(v15);
            if ( a2 == v15 )
              break;
            ++v14;
          }
          while ( v14 != v13 );
        }
        if ( v14 == *((struct IMPCInputProviderBase ***)this + 418) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xEA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v8);
          __debugbreak();
        }
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 3336, &v22, v14);
        v3 = (char *)this + 3080;
      }
    }
    v16 = (__int64 *)*((_QWORD *)this + 393);
    if ( v16 )
    {
      v17 = *v16;
      v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v17 + 96))(v16, v18);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xF2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v22, i);
  }
  if ( a2 == *((struct IMPCInputProviderBase **)this + 390) )
  {
    v20 = *((_QWORD *)this + 390);
    if ( v20 )
    {
      *((_QWORD *)this + 390) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
}
