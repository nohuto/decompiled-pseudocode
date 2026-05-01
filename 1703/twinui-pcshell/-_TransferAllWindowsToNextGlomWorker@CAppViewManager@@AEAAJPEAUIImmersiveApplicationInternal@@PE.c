/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180041B4C
 * Callers:
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x18003F41C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180041A90 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___ @ 0x1800436FC (wil--details--ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___--_ScopeExitFn__lambda_beb7.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  __int64 (__fastcall **v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v18; // [rsp+80h] [rbp+30h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  if ( a3 )
  {
    v8 = *a3;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v15);
    v10 = (*v8)(a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 112) + 104LL))(
            *(_QWORD *)(a1 + 112),
            a2,
            v15);
  }
  if ( v10 < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15[0] + 232LL))(v15[0], &v18) < 0
    || (v18 & 1) != 0
    || (v16[0] = 0LL,
        v16[1] = a4 == 1,
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 112) + 96LL))(
                *(_QWORD *)(a1 + 112),
                a2,
                v15[0],
                v16),
        v12 = v11,
        v11 >= 0) )
  {
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8B5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  v13 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
