/*
 * XREFs of _lambda_fd54a0dac248e9cf9b99375b3d19bed2_::_lambda_fd54a0dac248e9cf9b99375b3d19bed2_ @ 0x1800757F0
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___ @ 0x180075078 (NotificationDispatcher--RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172_____lambda_edabc7bfffa072f6dcb0170080417172__const_&___ptr64_ @ 0x180076440 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172_.c)
 * Callees:
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180077A00 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_fd54a0dac248e9cf9b99375b3d19bed2_::_lambda_fd54a0dac248e9cf9b99375b3d19bed2_(
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
