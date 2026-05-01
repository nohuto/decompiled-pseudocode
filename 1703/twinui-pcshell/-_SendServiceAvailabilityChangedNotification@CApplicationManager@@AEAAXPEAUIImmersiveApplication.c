/*
 * XREFs of ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800159F8
 * Callers:
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x180015800 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x180019800 (CDelayIAMOperations--CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___--operator().c)
 * Callees:
 *     ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x1800194EC (--$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObje.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d190757c23000f52f2ae5d43357c90b2___ @ 0x18001AE08 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d190757c23000f52f2ae5d43357c90b2___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1801976BE (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        int a5)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  unsigned int Ptr; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h]
  void *Block; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF

  v17[1] = -2LL;
  v6 = a3;
  v23 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 192) + 24LL))(a1 + 192, &v23) >= 0 )
  {
    v8 = v23;
    v18 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v19 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v20 = a5;
    Block = 0LL;
    v22 = 0;
    if ( (_DWORD)v6 )
    {
      v9 = 16 * v6;
      if ( !is_mul_ok(v6, 0x10uLL) )
        v9 = -1LL;
      v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
      Block = v10;
      if ( v10 )
      {
        memcpy_0(v10, a4, 16 * v6);
        v22 = v6;
      }
    }
    CreateRefCountedObj<SERVICE_AVAILABILITY_CHANGED_DATA,SERVICE_AVAILABILITY_CHANGED_DATA>(v17, &v18);
    v11 = v17[0];
    if ( v17[0] )
    {
      v16 = v17[0];
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 8LL))(v17[0]);
      Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
      Windows::Internal::ComTaskPool::WrapWithTask__lambda_d190757c23000f52f2ae5d43357c90b2___(&v15, &v16);
      Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, Ptr, 0LL);
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    operator delete(Block);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
