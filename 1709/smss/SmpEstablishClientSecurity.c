/*
 * XREFs of SmpEstablishClientSecurity @ 0x14000C064
 * Callers:
 *     SmpApiCallback @ 0x140003BC0 (SmpApiCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpEstablishClientSecurity(__int64 a1, __int64 a2)
{
  int v4; // edi
  NTSTATUS v5; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-70h] BYREF
  __int64 ThreadInformation; // [rsp+40h] [rbp-68h] BYREF
  _BYTE TokenInformation[8]; // [rsp+48h] [rbp-60h] BYREF
  int v11; // [rsp+50h] [rbp-58h]
  int v12; // [rsp+54h] [rbp-54h]
  int v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+64h] [rbp-44h]

  v4 = 2;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    RtlAcquireSRWLockShared(a2 + 24);
    RtlReleaseSRWLockShared(a2 + 24);
  }
  v5 = NtAlpcImpersonateClientOfPort(*(_QWORD *)(a2 + 16), a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0xCu, 0, &TokenHandle);
    if ( v5 >= 0 )
    {
      v5 = NtQueryInformationToken(TokenHandle, TokenStatistics, TokenInformation, 0x38u, &ReturnLength);
      if ( v5 >= 0 && (v14 >= 2 || v13 != 2) && v11 == 999 && !v12 )
        v4 = 4;
      NtClose(TokenHandle);
    }
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  RtlAcquireSRWLockExclusive(a2 + 24);
  if ( (*(_DWORD *)a2 & 6) != 0 )
  {
    v5 = 0;
  }
  else if ( v5 >= 0 )
  {
    *(_DWORD *)a2 |= v4;
  }
  RtlReleaseSRWLockExclusive(a2 + 24);
  return (unsigned int)v5;
}
