/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x18003A5D0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___ @ 0x18003A2E0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___.c)
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x18003A8D4 (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( WaitForSingleObject(*(HANDLE *)(a1 + 24), 0x1B7740u) == 258 )
    CAppManagerTelemetry::RotationManagerSuppressionTimeout();
  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___(&v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = v5;
  if ( !v5
    || (*(int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 128LL) + 64LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL),
         v5,
         0LL) < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 112LL) = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
