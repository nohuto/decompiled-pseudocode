/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180073450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180044290 (wil--ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800735F4 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  PVOID Ptr; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  char *v12; // r8
  __int128 v14; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+38h] [rbp-28h]
  _BYTE v16[24]; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF
  int v20; // [rsp+A0h] [rbp+40h] BYREF

  v20 = a3;
  v19 = a2;
  *(_QWORD *)&v14 = &v20;
  *((_QWORD *)&v14 + 1) = &v19;
  v15 = a1 - 13;
  wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___((__int64)v16, &v14);
  AcquireSRWLockExclusive(a1 + 45);
  v4 = v19;
  v5 = v19;
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v4 = v19;
  }
  v6 = 0LL;
  Ptr = a1[47].Ptr;
  if ( Ptr )
  {
    v8 = a1[46].Ptr;
    v9 = v8;
    while ( *v9 != v5 )
    {
      ++v6;
      ++v9;
      if ( v6 >= (unsigned __int64)Ptr )
        goto LABEL_15;
    }
    if ( v6 < (unsigned __int64)Ptr )
    {
      v11 = v8[v6];
      if ( v11 )
      {
        v8[v6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v4 = v19;
      }
      v12 = (char *)a1[47].Ptr;
      if ( (char *)v6 != v12 - 1 )
      {
        memmove((char *)a1[46].Ptr + 8 * v6, (char *)a1[46].Ptr + 8 * v6 + 8, 8LL * (_QWORD)&v12[-v6] - 8);
        v4 = v19;
      }
      --a1[47].Ptr;
      v10 = 0;
    }
    else
    {
      v10 = -2147316575;
    }
  }
  else
  {
LABEL_15:
    v10 = -2147319765;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v19;
  }
  if ( v10 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged(a1, v4, 1LL);
    if ( a1 != (RTL_SRWLOCK *)-360LL )
      ReleaseSRWLockExclusive(a1 + 45);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x21A,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    if ( a1 != (RTL_SRWLOCK *)-360LL )
      ReleaseSRWLockExclusive(a1 + 45);
  }
  if ( v17 )
  {
    v17 = 0;
    lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(v16);
  }
  return (unsigned int)v10;
}
