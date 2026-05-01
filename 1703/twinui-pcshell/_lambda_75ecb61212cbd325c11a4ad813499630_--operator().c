/*
 * XREFs of _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x180067490
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x18006B7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75ecb61212cbd325c11a4ad813499630_::operator()(_QWORD *a1)
{
  bool v2; // di
  char v3; // bl
  __int64 result; // rax
  __int64 *Ptr; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v12 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v11 = 0;
  v8 = 0;
  v2 = 0;
  v3 = 0;
  v9 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(*a1, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v9) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 32LL))(v9, &v10);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 48LL))(v9, &v8);
    v2 = v10 == 4;
    if ( v10 != 3 || (v3 = 1, (v8 & 1) == 0) )
      v3 = 0;
    if ( v10 == 4 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 40LL))(v9, &v11);
    }
    else if ( !v3 )
    {
      goto LABEL_9;
    }
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v9 + 24LL))(v9, &rc);
  }
LABEL_9:
  result = (unsigned int)~v8;
  if ( (v8 & 1) == 0 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 112LL) + 32LL))(
               *(_QWORD *)(a1[1] + 112LL),
               *a1);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(PVOID, _QWORD, RECT *, _QWORD, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                           + 24LL))(
               CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
               *(_QWORD *)(a1[1] + 120LL),
               &rc,
               0LL,
               v11);
  }
  else if ( v3 )
  {
    Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr;
    v6 = *Ptr;
    IsRectEmpty(&rc);
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v6 + 32))(Ptr, *(_QWORD *)(a1[1] + 120LL), 5LL);
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
