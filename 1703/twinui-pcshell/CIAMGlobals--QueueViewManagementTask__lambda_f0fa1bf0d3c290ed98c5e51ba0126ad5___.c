/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___ @ 0x180069A64
 * Callers:
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator().c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e2d3ccdf70580280905877bc39bb2bc7___ @ 0x18006A96C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e2d3ccdf70580280905877bc39bb2bc7___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___(
        __int64 a1,
        __int64 a2)
{
  PSRWLOCK v3; // rsi
  PVOID Ptr; // rbx
  unsigned int v5; // edi
  int v6; // edi
  IUnknown **v7; // rax
  __int64 v8; // rcx
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  PVOID v12; // [rsp+70h] [rbp+18h]

  v11 = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v12 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10[0] = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10[1] = a2;
    v6 = (int)v3[13].Ptr;
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e2d3ccdf70580280905877bc39bb2bc7___(
                        &v11,
                        v10);
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v6, 0, *v7, 0LL);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  }
  else
  {
    v5 = -2147023728;
  }
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v5;
}
