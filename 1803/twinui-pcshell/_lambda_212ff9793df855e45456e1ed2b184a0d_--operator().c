/*
 * XREFs of _lambda_212ff9793df855e45456e1ed2b184a0d_::operator() @ 0x180054580
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d___::Run @ 0x1800547D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d___--Run.c)
 * Callees:
 *     ?get_HostId@ViewWrapperBase@@UEAAJPEA_K@Z @ 0x1800509F0 (-get_HostId@ViewWrapperBase@@UEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_212ff9793df855e45456e1ed2b184a0d_::operator()(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  PCWSTR StringRawBuffer; // r14
  ViewWrapperBase *v5; // rcx
  __int64 (__fastcall *v6)(ViewWrapperBase *, unsigned __int64 *); // rax
  int v7; // ecx
  int v8; // esi
  RTL_SRWLOCK *v9; // rbp
  __int64 (*v10)(void); // rax
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]
  RTL_SRWLOCK *v16; // [rsp+80h] [rbp+18h]

  result = *a1;
  v3 = *(_QWORD *)(*(_QWORD *)(*a1 + 168) + 496LL);
  v15 = v3;
  if ( !v3 )
    goto LABEL_11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 152), 0LL);
  v14 = -1LL;
  v5 = (ViewWrapperBase *)(*a1 + 8);
  v6 = *(__int64 (__fastcall **)(ViewWrapperBase *, unsigned __int64 *))(*(_QWORD *)v5 + 576LL);
  if ( v6 == ViewWrapperBase::get_HostId )
    result = ViewWrapperBase::get_HostId(v5, &v14);
  else
    result = v6(v5, &v14);
  v7 = *((_DWORD *)a1 + 6);
  v8 = 0;
  if ( !v7 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, unsigned __int64, __int64, _DWORD))(*(_QWORD *)v3 + 24LL))(
      v3,
      StringRawBuffer,
      v14,
      a1[2],
      0);
LABEL_6:
    v9 = (RTL_SRWLOCK *)(*(_QWORD *)(*a1 + 168) + 296LL);
    AcquireSRWLockShared(v9);
    v16 = v9;
    v10 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 120LL);
    if ( (char *)v10 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
      v11 = *(_DWORD *)(*a1 + 552);
    else
      v11 = v10();
    LOBYTE(v8) = (unsigned int)(v11 - 4) > 1;
    v12 = v8 + 2;
    if ( v9 )
      ReleaseSRWLockShared(v9);
    result = (*(__int64 (__fastcall **)(__int64, PCWSTR, unsigned __int64, __int64, int))(*(_QWORD *)v3 + 24LL))(
               v3,
               StringRawBuffer,
               v14,
               a1[2],
               v12);
    goto LABEL_11;
  }
  v13 = v7 - 1;
  if ( !v13 )
  {
    result = (*(__int64 (__fastcall **)(__int64, PCWSTR, unsigned __int64, __int64, int))(*(_QWORD *)v3 + 24LL))(
               v3,
               StringRawBuffer,
               v14,
               a1[2],
               1);
    goto LABEL_11;
  }
  if ( v13 == 1 )
    goto LABEL_6;
LABEL_11:
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
