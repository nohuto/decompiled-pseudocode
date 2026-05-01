/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___ @ 0x18030AF5C
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x18030AC64 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int8 (__fastcall ***v4)(_QWORD, __int64); // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-18h] BYREF
  void **v10; // [rsp+50h] [rbp+8h] BYREF
  void **v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v3 = v8;
  v11 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v8[0] = &v10;
  v8[1] = &v11;
  while ( 1 )
  {
    v4 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))*v3;
    v5 = *(_DWORD **)a2;
    v6 = *(_QWORD *)(a2 + 8);
    if ( *v5 <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3) )
    {
      if ( (**v4)(v4, v6) )
        break;
    }
    if ( ++v3 == (_QWORD *)&v9 )
      return 0;
  }
  return 1;
}
