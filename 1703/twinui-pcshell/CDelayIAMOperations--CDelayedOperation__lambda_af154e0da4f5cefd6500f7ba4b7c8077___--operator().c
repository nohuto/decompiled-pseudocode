/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___::operator() @ 0x180019970
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___::operator()(
        __int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+70h] [rbp+28h] BYREF
  __int64 v8; // [rsp+78h] [rbp+30h] BYREF
  int v9; // [rsp+80h] [rbp+38h] BYREF
  int v10; // [rsp+84h] [rbp+3Ch]
  __int64 v11; // [rsp+88h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 496LL))(*(_QWORD *)(a1 + 24), &v8) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v11) >= 0 )
  {
    v7 = 0LL;
    v2 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 496LL);
    v3 = *v2;
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v7);
    if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, GUID *, __int64 *))(v3 + 88))(
           v2,
           v11,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           v4) >= 0 )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 760LL);
      v10 = 0;
      (*(void (__fastcall **)(_QWORD, __int64, int *, _QWORD))(**(_QWORD **)(a1 + 24) + 456LL))(
        *(_QWORD *)(a1 + 24),
        v7,
        &v9,
        0LL);
    }
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
