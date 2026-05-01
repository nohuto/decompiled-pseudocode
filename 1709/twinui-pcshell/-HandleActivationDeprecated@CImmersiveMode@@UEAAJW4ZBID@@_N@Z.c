/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180032650
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r13d
  int v8; // edi
  IUnknown *v9; // rbx
  __int64 *v10; // rax
  bool v11; // bl
  IUnknown *v12; // rcx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rcx
  _DWORD v18[6]; // [rsp+38h] [rbp-18h] BYREF
  IUnknown *punk; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A0h] [rbp+50h]
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  v20 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)96));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v8 = -1;
  if ( a2 == 1 )
  {
    v8 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v8 = 1;
  }
  v21 = 0LL;
  punk = 0LL;
  v20 = 1;
  (*(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL))(
    a1 - 14,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v9 = punk;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
  v11 = IUnknown_QueryService(
          v9,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          (void **)v10) >= 0;
  v12 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  if ( v11 )
  {
    if ( v8 == -1 || (v13 = v8, !a3) )
      v13 = a1[69];
    v14 = a1[40];
    v15 = a1[62];
    v18[0] = a1[69];
    v18[1] = v13;
    v18[2] = v15;
    v18[3] = v14;
    v18[4] = a2;
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 24LL))(v21, v18);
  }
  if ( a3 && v8 != -1 && v8 != a1[69] )
    a1[69] = v8;
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
