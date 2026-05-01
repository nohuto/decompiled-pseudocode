/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x18003B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x18003BB4C (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  signed int v6; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h]
  _QWORD *v9; // [rsp+60h] [rbp+18h]

  if ( WaitForSingleObject(*(HANDLE *)(a1 + 24), 0x1B7740u) == 258 )
    CAppManagerTelemetry::RotationManagerSuppressionTimeout();
  v2 = *(_QWORD *)(a1 + 16);
  v7 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = 0LL;
  v8 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[2] = 0LL;
    if ( v5 + 2 != &v7 )
    {
      v5[2] = v2;
      v2 = 0LL;
    }
    *v5 = off_1801FBFE0;
    v3 = v5;
  }
  v9 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 152LL) + 64LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL),
           v3,
           0LL);
  if ( v6 < 0 )
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) = 0;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
}
