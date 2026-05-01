/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180090FE0
 * Callers:
 *     ??_GUAPViewWrapper@@UEAAPEAXI@Z @ 0x18005AC20 (--_GUAPViewWrapper@@UEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180091078 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x1800EFD58 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??1?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAB4C (--1-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801C713C (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 *     _lambda_0b65209c995f1ff64cab6d619e0087d7_::__lambda_0b65209c995f1ff64cab6d619e0087d7_ @ 0x1801C83B4 (_lambda_0b65209c995f1ff64cab6d619e0087d7_--__lambda_0b65209c995f1ff64cab6d619e0087d7_.c)
 *     ??1ViewManagerBridge@@UEAA@XZ @ 0x1801C8C9C (--1ViewManagerBridge@@UEAA@XZ.c)
 *     _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x1801C9698 (_lambda_c3441874af9188b8377da12ab0198c01_--operator().c)
 *     ??_E?$CTaskWrapper@V_lambda_0b65209c995f1ff64cab6d619e0087d7_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801C98B0 (--_E-$CTaskWrapper@V_lambda_0b65209c995f1ff64cab6d619e0087d7_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1801DCDB0 (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(__int64 *a1, volatile int *a2)
{
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rax
  unsigned int v5; // edi
  signed __int64 v6; // rtt

  v2 = *a1;
  v3 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    v4 = *(_QWORD *)(v2 + 272);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 == 0x7FFFFFFF )
        return 2147483646;
      v5 = v4 - 1;
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 272), v4 - 1, v4);
      if ( v6 == v4 )
        goto LABEL_9;
    }
    v5 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_9:
    if ( !v5 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 120) + 64LL))(v2 + 120, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v5;
  }
  return v3;
}
