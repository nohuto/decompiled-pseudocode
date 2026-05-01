/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke @ 0x180129EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_324fa1dbfe6ef799244f529b16be7345___ @ 0x18012A1C0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_324fa1dbfe6ef799244f529b16be7345___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke(
        __int64 a1)
{
  volatile signed __int32 *v1; // rdi
  bool i; // zf
  signed __int32 v3; // eax
  bool j; // zf
  signed __int32 v5; // eax
  IUnknown *v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+68h] [rbp+10h]

  v1 = *(volatile signed __int32 **)(a1 + 8);
  v12 = v1;
  for ( i = v1 == 0LL; !i; i = v3 == _InterlockedCompareExchange(v1 + 9, v3 + 1, v3) )
  {
    v3 = *((_DWORD *)v1 + 9);
    if ( v3 == 0x7FFFFFFF )
      break;
  }
  v10[0] = v1;
  for ( j = v1 == 0LL; !j; j = v5 == _InterlockedCompareExchange(v1 + 9, v5 + 1, v5) )
  {
    v5 = *((_DWORD *)v1 + 9);
    if ( v5 == 0x7FFFFFFF )
      break;
  }
  v10[1] = v1;
  v6 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_324fa1dbfe6ef799244f529b16be7345___(&v11, v10);
  CurrentThreadId = GetCurrentThreadId();
  result = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v6, 0LL);
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v10[0] )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10[0]);
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
  return result;
}
