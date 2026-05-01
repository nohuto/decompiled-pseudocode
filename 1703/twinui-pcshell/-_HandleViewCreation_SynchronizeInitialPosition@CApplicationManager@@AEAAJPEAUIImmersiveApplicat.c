/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180012A2C
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18000C8F0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x180018BF4 (--$MakeAndInitialize@VCOperationWaiter@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@VCO.c)
 *     CreateAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___ @ 0x180018E54 (CreateAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___.c)
 *     CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___ @ 0x180018E90 (CDelayIAMOperations--AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002AFD8 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 v4; // rcx
  signed int v5; // edi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  HWND v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-40h]
  unsigned int v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  v19[1] = -2LL;
  v21 = 0LL;
  v23 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v21);
  if ( v5 >= 0 )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter>(&v23);
    if ( v5 >= 0 )
    {
      v6 = v23;
      v18 = v23;
      if ( v23 )
      {
        do
          v7 = *(_DWORD *)(v6 + 28);
        while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), v7 + 1, v7) );
        v6 = v18;
      }
      CreateAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426_(v19, &v18);
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
      v8 = v19[0];
      v5 = v19[0] == 0LL ? 0x8007000E : 0;
      if ( v19[0] )
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 200LL))(v21, v19[0]);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    SHProcessMessagesUntilEventsEx(v9, (void **)(v23 + 32), v10, v11, v16, v17);
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v22 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL))(
           a2,
           &v22);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 176LL))(v22, 1LL);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 68) + 88LL))(*((_QWORD *)this + 68), v22);
    }
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v5 >= 0 )
    {
      v19[2] = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      v20[0] = this;
      v20[1] = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___(*((_QWORD *)this + 91), v20);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
  v13 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v13);
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
