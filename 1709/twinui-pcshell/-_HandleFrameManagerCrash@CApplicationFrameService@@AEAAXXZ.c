/*
 * XREFs of ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x18004FB84
 * Callers:
 *     ?SimulateFrameManagerCrash@CApplicationFrameService@@UEAAXXZ @ 0x18004E980 (-SimulateFrameManagerCrash@CApplicationFrameService@@UEAAXXZ.c)
 *     CCrashDetector::CLambdaHandler__lambda_27283753ed325f6243441eb816a28818___::operator() @ 0x180050EE0 (CCrashDetector--CLambdaHandler__lambda_27283753ed325f6243441eb816a28818___--operator().c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180050280 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationFrameService::_HandleFrameManagerCrash(CApplicationFrameService *this)
{
  _DWORD *i; // r12
  HRESULT v3; // r13d
  IUnknown *v4; // rbx
  __int64 *v5; // rax
  bool v6; // bl
  IUnknown *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int CompareAddress; // [rsp+B0h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+50h] BYREF

  CompareAddress = 0;
  for ( i = (_DWORD *)((char *)this + 204); ; WaitOnAddress(i, &CompareAddress, 4uLL, 0xFFFFFFFF) )
  {
    CompareAddress = *i;
    if ( CompareAddress != 1 )
      break;
  }
  v3 = CoInitializeEx(0LL, 4u);
  if ( v3 >= 0 )
  {
    v24 = 0LL;
    punk = 0LL;
    CompareAddress = 1;
    (*(void (__fastcall **)(CApplicationFrameService *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL))(
      this,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    v4 = punk;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    v6 = IUnknown_QueryService(
           v4,
           (const GUID *const)&SID_AppCrusher,
           &GUID_55c8429b_3f9e_4736_96a2_1c56e2dfc883,
           (void **)v5) >= 0;
    v7 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
    v8 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 136LL))(*((_QWORD *)this + 22));
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)this + 23));
  v20 = 0LL;
  v10 = *((_QWORD *)this + 18);
  v11 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v18 = v10;
  v19 = v11;
  v21 = v11;
  v16 = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v12 = *((_QWORD *)this + 23);
  if ( v12 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_DWORD *)this + 50) = 0;
  if ( *((_QWORD *)this + 18) )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll((char *)this + 144);
  }
  else
  {
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll((char *)this + 112);
  }
  else
  {
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  *i = 0;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = *((_QWORD *)this + 23);
  if ( v13 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v10 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(&v18);
    v10 = v18;
  }
  else
  {
    v19 = 0LL;
    v21 = 0LL;
  }
  v15 = 0LL;
  v17 = 0LL;
  if ( v3 >= 0 )
    CoUninitialize();
  if ( v10 )
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(&v18);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
