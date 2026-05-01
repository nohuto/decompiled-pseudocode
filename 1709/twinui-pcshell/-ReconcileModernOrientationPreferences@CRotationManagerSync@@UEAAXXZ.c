/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18003ABE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003ACDC (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64_ @ 0x18003B62C (Microsoft--WRL--Callback_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  char *v2; // rbx
  PSRWLOCK v3; // rdi
  __int64 v4; // rdi
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  char *v7; // [rsp+58h] [rbp+10h]

  v2 = (char *)this - 80;
  v7 = (char *)this - 80;
  if ( this != (CRotationManagerSync *)80 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))((char *)this - 80);
  v5[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v5[1] = v2;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v3[9].Ptr) == GetCurrentThreadId() )
  {
    lambda_6aced788dff8c658a873d98bde52dc09_::operator()(v5);
  }
  else
  {
    Microsoft::WRL::Callback_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64_(&v6, v5);
    v4 = v6;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), v6, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
