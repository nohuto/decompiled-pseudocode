/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001A060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 52) = -1073741823;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
