/*
 * XREFs of _lambda_794533bae2653f5a8c11b3eb7b48e533_::_lambda_794533bae2653f5a8c11b3eb7b48e533_ @ 0x180078640
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___ @ 0x180077D4C (NotificationDispatcher--RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___.c)
 * Callees:
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18007A5C0 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_794533bae2653f5a8c11b3eb7b48e533_::_lambda_794533bae2653f5a8c11b3eb7b48e533_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  v5 = a2[2];
  *(_QWORD *)(a1 + 16) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a2[3];
  *(_QWORD *)(a1 + 24) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a2 + 4);
  *(_QWORD *)(a1 + 32) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  return a1;
}
