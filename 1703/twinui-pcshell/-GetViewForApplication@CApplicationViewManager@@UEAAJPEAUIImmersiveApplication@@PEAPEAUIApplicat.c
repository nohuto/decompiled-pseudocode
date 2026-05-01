/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180072830
 * Callers:
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800741C0 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___::Invoke @ 0x180075EE0 (CAsyncCallbackWithLambda__lambda_73af3bb2f3d5c91ade250b7343a71e20___--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  struct IApplicationView *v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r15d
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *Ptr; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v6 = this + 45;
  AcquireSRWLockShared(this + 45);
  *a3 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  do
  {
    if ( v8 >= this[47].Ptr )
      break;
    v18 = 0LL;
    v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[46].Ptr + (_QWORD)v8);
    if ( (**v10)(v10, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v18) >= 0 )
    {
      v17 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v17) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v17 + 104LL))(
             v17,
             a2,
             &v16) >= 0
        && v16 )
      {
        Ptr = this[46].Ptr;
        v12 = Ptr[(_QWORD)v8];
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v7 = (struct IApplicationView *)Ptr[(_QWORD)v8];
        v9 = 0;
      }
      v13 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v8 = (char *)v8 + 1;
  }
  while ( !v7 );
  *a3 = v7;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
