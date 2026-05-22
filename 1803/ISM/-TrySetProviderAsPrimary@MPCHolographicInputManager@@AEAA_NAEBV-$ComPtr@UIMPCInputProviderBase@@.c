/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004ED20
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18004FF78 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180050738 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_ @ 0x180050E90 (std--_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v6; // rax
  char v7; // r14
  struct IMPCInputProviderBase *v8; // rdi
  int v9; // ebx
  char result; // al
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  struct IMPCInputProviderBase *v14; // r8
  _QWORD *v15; // r12
  _QWORD *v16; // r14
  __int64 *v17; // rdi
  struct IMPCInputProviderBase *v18; // r8
  const char *v19; // r9
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-40h] BYREF
  char *v23; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v24)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v26; // [rsp+A0h] [rbp+40h] BYREF
  struct IMPCInputProviderBase *v27; // [rsp+B0h] [rbp+50h] BYREF
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x254,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v6 = (_QWORD *)*((_QWORD *)this + 278);
  v7 = 1;
  v8 = *a2;
  v26 = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 112LL))(*v6);
  if ( v9 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 112LL))(v8)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 264LL))(*a2) )
  {
    v7 = 0;
    v22 = off_1800EE7D0;
    v23 = &v26;
    v24 = &v22;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v22);
  }
  result = v26;
  if ( v26 )
  {
    if ( !v7 )
    {
      v23 = (char *)this;
      v22 = off_1800EE8C0;
      v24 = &v22;
      MPCHolographicInputManager::ForEachActiveProvider(this, &v22);
      v11 = (__int64 *)*((_QWORD *)this + 279);
      v12 = (__int64 *)*((_QWORD *)this + 278);
      if ( v12 != v11 )
      {
        do
        {
          v13 = *v12;
          if ( *v12 )
          {
            *v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          ++v12;
        }
        while ( v12 != v11 );
        v12 = (__int64 *)*((_QWORD *)this + 278);
      }
      *((_QWORD *)this + 279) = v12;
    }
    v14 = *a2;
    v27 = v14;
    if ( v14 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = (_QWORD *)*((_QWORD *)this + 247);
    v16 = (_QWORD *)*((_QWORD *)this + 246);
    v17 = *(__int64 **)std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_(&v28, &v27);
    if ( v16 != v15 )
    {
      do
      {
        v20 = *v16;
        if ( *v16 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*v16);
        v21 = *v17;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 == v20 )
          break;
        ++v16;
      }
      while ( v16 != v15 );
      v18 = v27;
    }
    if ( v18 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v16 == *((_QWORD **)this + 247) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x27B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v19);
      JUMPOUT(0x18004EF41LL);
    }
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v26;
  }
  return result;
}
