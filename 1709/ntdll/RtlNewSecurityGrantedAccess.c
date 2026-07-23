/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x1800D8080
 * Callers:
 *     <none>
 * Callees:
 *     RtlMapGenericMask @ 0x1800564C0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A2670 (ZwPrivilegeCheck.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(
        ACCESS_MASK a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        GENERIC_MAPPING *GenericMapping,
        _DWORD *a6)
{
  __int64 v8; // r14
  ACCESS_MASK v9; // eax
  NTSTATUS v10; // eax
  BOOLEAN v11; // cl
  BOOLEAN Result[8]; // [rsp+30h] [rbp-49h] BYREF
  ULONG ReturnLength[2]; // [rsp+38h] [rbp-41h] BYREF
  ACCESS_MASK AccessMask[2]; // [rsp+40h] [rbp-39h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-31h] BYREF
  _BYTE TokenInformation[56]; // [rsp+60h] [rbp-19h] BYREF

  AccessMask[0] = a1;
  Result[0] = 0;
  v8 = -5LL;
  if ( a4 )
    v8 = a4;
  NtQueryInformationToken((HANDLE)v8, 0xAu, TokenInformation, 0x38u, ReturnLength);
  RtlMapGenericMask(AccessMask, GenericMapping);
  v9 = AccessMask[0];
  *a6 = AccessMask[0];
  if ( (v9 & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    *(_QWORD *)AccessMask = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    v10 = ZwPrivilegeCheck((HANDLE)v8, &RequiredPrivileges, Result);
    v11 = Result[0];
    if ( (v10 < 0 || !Result[0]) && !Result[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v11 = Result[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    ReturnLength[1] = 0;
    if ( v11 )
    {
      *(_DWORD *)a2 = 1;
      *(_DWORD *)(a2 + 16) = 0x80000000;
      ReturnLength[0] = 8;
    }
    else
    {
      *(_DWORD *)a2 = 0;
      ReturnLength[0] = 0;
      *(_DWORD *)(a2 + 16) = 0;
    }
    *(_QWORD *)(a2 + 8) = *(_QWORD *)ReturnLength;
    return 0LL;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
}
