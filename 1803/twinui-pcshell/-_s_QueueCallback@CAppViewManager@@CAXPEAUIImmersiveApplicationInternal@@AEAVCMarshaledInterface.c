/*
 * XREFs of ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18000CDB4
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800098C4 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x180128074 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_ @ 0x18000C09C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetUniqueCallingContext@CImmersiveApp@@UEBAKXZ @ 0x1800499D0 (-GetUniqueCallingContext@CImmersiveApp@@UEBAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_ @ 0x18011CE40 (Windows--Internal--ComTaskPool--QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAppViewManager::_s_QueueCallback(
        struct IImmersiveApplicationInternal *this,
        struct CMarshaledInterface *a2,
        int a3)
{
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(CImmersiveApp *__hidden); // rax
  unsigned int UniqueCallingContext; // eax
  unsigned int v8; // ebx
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v9 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
  v10 = a3;
  if ( this )
  {
    v6 = *(unsigned int (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)this + 248LL);
    if ( v6 == CImmersiveApp::GetUniqueCallingContext )
      UniqueCallingContext = CImmersiveApp::GetUniqueCallingContext(this);
    else
      UniqueCallingContext = v6(this);
    v8 = UniqueCallingContext;
    Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_(&v11);
    Windows::Internal::ComTaskPool::RunTask(0LL, 2LL, v8);
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v11);
  }
  else
  {
    Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_(v5, &v9);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v9);
}
