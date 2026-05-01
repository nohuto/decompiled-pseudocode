/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180190A80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rdi
  const char *v9; // r9
  void *v10; // rcx
  PVOID Ptr; // rcx
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 result; // rax
  _QWORD v15[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  v15[1] = -2LL;
  try
  {
    v17 = 0LL;
    v8 = a1 + 8;
    AcquireSRWLockShared(a1 + 8);
    v15[2] = v8;
    v10 = v17;
    v17 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    Ptr = a1[9].Ptr;
    if ( Ptr )
    {
      v17 = 0LL;
      v12 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD *))(*(_QWORD *)Ptr + 24LL))(
              Ptr,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v15);
      if ( v12 >= 0 )
      {
        if ( v15[0] )
        {
          v12 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, void **))v15[0])(
                  v15[0],
                  &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                  &v17);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
        }
        else
        {
          v12 = -2147023728;
        }
      }
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v12);
      Ptr = v17;
    }
    else
    {
      v17 = 0LL;
    }
    if ( v8 )
    {
      ReleaseSRWLockShared(v8);
      Ptr = v17;
    }
    if ( Ptr )
    {
      v13 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3, a4);
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
      result = v13;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appvieweventhelpers.h",
                           v9);
  }
  return result;
}
