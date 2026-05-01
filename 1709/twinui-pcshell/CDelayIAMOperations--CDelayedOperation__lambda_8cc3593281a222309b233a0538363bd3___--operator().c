/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3___::operator() @ 0x18001AA10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8bbfadf2e685d49e62efb1365d07c1d5___ @ 0x18001BCE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8bbfadf2e685d49e62efb1365d07c1d5___.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3___::operator()(
        __int64 a1)
{
  __int64 v2; // rcx
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-20h]
  PVOID v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+28h]
  PVOID v15; // [rsp+70h] [rbp+30h]

  v9 = -2;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 16);
  v13 = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v2 = v13;
  }
  v14 = &v13;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v15 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = v13;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_8bbfadf2e685d49e62efb1365d07c1d5___(
           v7,
           v6,
           LODWORD(v3[13].Ptr),
           &v10,
           -2LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    if ( v2 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v5 = -2147023728;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x1138,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v5,
      v9);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), (unsigned int)v5);
  }
}
