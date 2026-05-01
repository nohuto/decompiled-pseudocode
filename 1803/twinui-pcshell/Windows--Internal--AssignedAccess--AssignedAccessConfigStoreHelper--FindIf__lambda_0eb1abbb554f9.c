/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___ @ 0x18030AECC
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x18030AC64 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD v6[2]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+30h] [rbp-8h] BYREF
  void **v8; // [rsp+40h] [rbp+8h] BYREF
  void **v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v3 = v6;
  v9 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v6[0] = &v8;
  v6[1] = &v9;
  while ( 1 )
  {
    v4 = *v3;
    if ( *a2 <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
        break;
    }
    if ( ++v3 == (_QWORD *)&v7 )
      return 0;
  }
  return 1;
}
