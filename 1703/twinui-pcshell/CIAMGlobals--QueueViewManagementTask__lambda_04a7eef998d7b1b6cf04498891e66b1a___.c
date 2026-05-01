/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180018D04
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180012860 (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_67fff51ef85bdb7f782db56f669e2f17___ @ 0x18001B650 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_67fff51ef85bdb7f782db56f669e2f17___.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___(
        __int64 a1,
        _QWORD *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  __int64 v5; // rcx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]
  PVOID v17; // [rsp+80h] [rbp+18h]

  v16 = a2;
  v15 = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v17 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v13 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = *a2;
    v14 = v7;
    if ( v7 )
    {
      do
        v8 = *(_DWORD *)(v7 + 28);
      while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), v8 + 1, v8) );
      Ptr = v17;
    }
    v9 = (unsigned int)v3[13].Ptr;
    Windows::Internal::ComTaskPool::WrapWithTask__lambda_67fff51ef85bdb7f782db56f669e2f17___(&v15, &v13);
    v10 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v9, 0LL);
    v11 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
    if ( v13 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 16LL))(v13);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v12 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
    }
    return v10;
  }
  else
  {
    v5 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
    }
    return 2147943568LL;
  }
}
