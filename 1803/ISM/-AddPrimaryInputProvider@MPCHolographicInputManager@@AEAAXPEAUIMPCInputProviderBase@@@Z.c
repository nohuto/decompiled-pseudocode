/*
 * XREFs of ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180050738
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180049778 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004DD00 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004ED20 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800509F4 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z @ 0x1800514E8 (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  unsigned int v4; // ebx
  char *v5; // r14
  _QWORD *v6; // rcx
  MPCManager *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  int v12; // eax
  __int64 **v13; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  unsigned int v18; // esi
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = (char *)this + 2224;
  v6 = (_QWORD *)*((_QWORD *)this + 278);
  if ( v6 != *((_QWORD **)v5 + 1) && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 320LL))(*v6) == 1 )
    v4 = 2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a2 + 312LL))(a2, v4);
  v22 = a2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
    (__int64 **)v5,
    (__int64 *)&v22);
  if ( v22 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v22 + 16LL))(v22);
  MPCHolographicInputManager::UpdateDoubleClickValues(this);
  v7 = MPCManager::s_instance;
  v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 96LL))(a2);
  v10 = (__int64 *)*((_QWORD *)v7 + 8);
  v11 = (__int64 *)*v10;
  while ( v11 != v10 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11[5] + 40LL))(v11[5], v9, v8);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12);
    if ( !*((_BYTE *)v11 + 25) )
    {
      v13 = (__int64 **)v11[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v11 = i;
        v11 = i;
      }
      else
      {
        v11 = (__int64 *)v11[2];
        for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v11 = j;
      }
    }
  }
  v16 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v17 = (__int64)(*((_QWORD *)v5 + 1) - *(_QWORD *)v5) >> 3;
  v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v19 )
  {
    if ( *v19 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(v20, v18, v17 - 1, v16);
    }
  }
}
