/*
 * XREFs of ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18005934C
 * Callers:
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180056B1C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180057AF0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z @ 0x180055A20 (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800596E0 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800599AC (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase *v2; // rsi
  unsigned int v4; // ebx
  _QWORD **v5; // r14
  MPCManager *v6; // r15
  int v7; // r12d
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _OWORD *v11; // rcx
  _OWORD *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 *v15; // rax
  __int64 i; // rax
  int v17; // edi
  __int64 v18; // rbx
  int v19; // esi
  _DWORD *v20; // rcx
  ISMTracing *v21; // rcx
  int v22; // [rsp+20h] [rbp-AA8h]
  __int64 v23; // [rsp+40h] [rbp-A88h]
  _BYTE v24[2680]; // [rsp+50h] [rbp-A78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+AC8h] [rbp+0h]
  struct IMPCInputProviderBase *v26; // [rsp+AD0h] [rbp+8h] BYREF
  struct IMPCInputProviderBase *v27; // [rsp+AD8h] [rbp+10h]
  char *v28; // [rsp+AE0h] [rbp+18h]

  v27 = a2;
  v23 = -2LL;
  v2 = a2;
  v4 = 1;
  v5 = (_QWORD **)((char *)this + 3336);
  v28 = (char *)this + 3336;
  if ( *((_QWORD *)this + 417) != *((_QWORD *)this + 418)
    && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)**v5 + 312LL))(**v5) == 1 )
  {
    v4 = 2;
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)v2 + 304LL))(v2, v4);
  v26 = v2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 8LL))(v2);
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
    v5,
    &v26);
  if ( v26 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v26 + 16LL))(v26);
  MPCHolographicInputManager::UpdateDoubleClickValues(this);
  v6 = MPCManager::s_instance;
  v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 112LL))(v2);
  v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 96LL))(v2);
  v9 = (_QWORD *)*((_QWORD *)v6 + 14);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    do
    {
      v11 = (_OWORD *)v8;
      v12 = v24;
      v13 = 20LL;
      do
      {
        *v12 = *v11;
        v12[1] = v11[1];
        v12[2] = v11[2];
        v12[3] = v11[3];
        v12[4] = v11[4];
        v12[5] = v11[5];
        v12[6] = v11[6];
        v12 += 8;
        *(v12 - 1) = v11[7];
        v11 += 8;
        --v13;
      }
      while ( v13 );
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v26 = (struct IMPCInputProviderBase *)v10[9];
      LOWORD(v22) = 2;
      v14 = CoreUICallSend(*((_QWORD *)v6 + 2), &v26, 1LL, 1LL, v22, &unk_1800E53E5, v24, v7, v23);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
          (const char *)(unsigned int)v14);
      if ( !*((_BYTE *)v10 + 25) )
      {
        v15 = (__int64 *)v10[2];
        if ( *((_BYTE *)v15 + 25) )
        {
          for ( i = v10[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v10 = (_QWORD *)i;
          v10 = (_QWORD *)i;
        }
        else
        {
          do
          {
            v10 = v15;
            v15 = (__int64 *)*v15;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
    }
    while ( v10 != v9 );
    v2 = v27;
    v5 = (_QWORD **)v28;
  }
  v17 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 112LL))(v2);
  v18 = v5[1] - *v5;
  v19 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 88LL))(v2);
  v20 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v20 )
  {
    if ( *v20 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(v21, v19, v18 - 1, v17);
    }
  }
}
