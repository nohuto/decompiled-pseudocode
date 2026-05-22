/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180057AF0
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180058BA8 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18005934C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v6; // rax
  char v7; // si
  struct IMPCInputProviderBase *v8; // rdi
  int v9; // ebx
  const char *v10; // r9
  char result; // al
  __int64 *v12; // rdi
  __int64 *i; // rbx
  __int64 v14; // rcx
  struct IMPCInputProviderBase *v15; // rbx
  struct IMPCInputProviderBase **v16; // rsi
  struct IMPCInputProviderBase **j; // r15
  struct IMPCInputProviderBase *v18; // rdi
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-40h] BYREF
  char *v20; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v21)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v23; // [rsp+90h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x247,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v6 = (_QWORD *)*((_QWORD *)this + 417);
  v7 = 1;
  v8 = *a2;
  v23 = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 112LL))(*v6);
  if ( v9 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 112LL))(v8)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 256LL))(*a2) )
  {
    v7 = 0;
    v19 = off_1800D62F8;
    v20 = &v23;
    v21 = &v19;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v19);
  }
  result = v23;
  if ( v23 )
  {
    if ( !v7 )
    {
      v20 = (char *)this;
      v19 = off_1800D6328;
      v21 = &v19;
      MPCHolographicInputManager::ForEachActiveProvider(this, &v19);
      v12 = (__int64 *)*((_QWORD *)this + 418);
      for ( i = (__int64 *)*((_QWORD *)this + 417); i != v12; ++i )
      {
        v14 = *i;
        if ( *i )
        {
          *i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      *((_QWORD *)this + 418) = *((_QWORD *)this + 417);
    }
    v15 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 8LL))(*a2);
    v16 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 386);
    for ( j = (struct IMPCInputProviderBase **)*((_QWORD *)this + 385); j != v16; ++j )
    {
      v18 = *j;
      if ( *j )
      {
        (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 8LL))(*j);
        (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v15 == v18 )
        break;
    }
    if ( v15 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( j == *((struct IMPCInputProviderBase ***)this + 386) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x26E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v10);
      JUMPOUT(0x180057CE9LL);
    }
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v23;
  }
  return result;
}
