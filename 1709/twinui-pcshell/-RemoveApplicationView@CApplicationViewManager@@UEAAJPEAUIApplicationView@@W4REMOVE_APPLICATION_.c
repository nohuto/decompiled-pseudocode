/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180076180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180076328 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  PVOID Ptr; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  char *v13; // r8
  __int128 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF
  int v21; // [rsp+A0h] [rbp+40h] BYREF

  v21 = a3;
  v20 = a2;
  *(_QWORD *)&v15 = &v21;
  *((_QWORD *)&v15 + 1) = &v20;
  v16 = v15;
  v17 = a1 - 18;
  v18 = 1;
  v4 = a1 + 47;
  AcquireSRWLockExclusive(a1 + 47);
  v5 = v20;
  v6 = v20;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v5 = v20;
  }
  v7 = 0LL;
  Ptr = a1[49].Ptr;
  if ( Ptr )
  {
    v9 = a1[48].Ptr;
    v10 = v9;
    while ( *v10 != v6 )
    {
      ++v7;
      ++v10;
      if ( v7 >= (unsigned __int64)Ptr )
        goto LABEL_15;
    }
    if ( v7 < (unsigned __int64)Ptr )
    {
      v12 = v9[v7];
      if ( v12 )
      {
        v9[v7] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v5 = v20;
      }
      v13 = (char *)a1[49].Ptr;
      if ( (char *)v7 != v13 - 1 )
      {
        memmove((char *)a1[48].Ptr + 8 * v7, (char *)a1[48].Ptr + 8 * v7 + 8, 8LL * (_QWORD)&v13[-v7] - 8);
        v5 = v20;
      }
      --a1[49].Ptr;
      v11 = 0;
    }
    else
    {
      v11 = -2147316575;
    }
  }
  else
  {
LABEL_15:
    v11 = -2147319765;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v5 = v20;
  }
  if ( v11 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged(a1, v5, 1LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x21A,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  v18 = 0;
  lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(&v16);
  return (unsigned int)v11;
}
