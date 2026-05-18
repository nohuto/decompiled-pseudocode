/*
 * XREFs of ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001E9C
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003C6C (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180006270 (__security_check_cookie.c)
 *     memset_0 @ 0x1800072D8 (memset_0.c)
 */

__int64 __fastcall LogonDwmAccountAndSetTokenIntegrityLevel(void **a1)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  unsigned int v5; // edx
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  PSID v8; // rax
  PSID v9; // rax
  signed int LastError; // eax
  signed int v11; // eax
  DWORD LengthSid; // eax
  signed int v13; // eax
  signed int v14; // eax
  HANDLE v15; // rax
  HANDLE TokenHandle; // [rsp+68h] [rbp-98h] BYREF
  void *NewTokenHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID pSid; // [rsp+78h] [rbp-88h] BYREF
  PSID v20; // [rsp+80h] [rbp-80h] BYREF
  PSID Sid; // [rsp+88h] [rbp-78h] BYREF
  PSID TokenInformation; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp-60h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v25; // [rsp+A8h] [rbp-58h] BYREF
  _LUID_AND_ATTRIBUTES PrivilegesToDelete; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+BCh] [rbp-44h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D4h] [rbp-2Ch]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+ECh] [rbp-14h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+104h] [rbp+4h]
  __int64 v34; // [rsp+110h] [rbp+10h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  pSid = 0LL;
  TokenInformation = 0LL;
  v23 = 0LL;
  TokenHandle = 0LL;
  NewTokenHandle = 0LL;
  v2 = 0;
  Sid = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v25.Value = 0;
  *(_WORD *)&v25.Value[4] = 512;
  memset_0(&PrivilegesToDelete, 0, 0x6CuLL);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 < 0 )
  {
    v5 = 724;
LABEL_3:
    v2 = v4 | 0x10000000;
LABEL_4:
    DoStackCapture(v2, v5);
    goto LABEL_34;
  }
  v4 = RtlAllocateAndInitializeSid(&v25, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v20);
  if ( v4 < 0 )
  {
    v5 = 737;
    goto LABEL_3;
  }
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v3 = v7;
  if ( !v7 )
  {
    v2 = -2147024882;
    v5 = 743;
    goto LABEL_4;
  }
  *v7 = 2;
  v8 = Sid;
  v3[4] = 7;
  *((_QWORD *)v3 + 1) = v8;
  v9 = v20;
  v3[8] = 7;
  *((_QWORD *)v3 + 3) = v9;
  SetLastError(0);
  if ( !(unsigned int)LogonUserExExW(
                        &gwszDwmAccountName,
                        L"Window Manager",
                        &unk_180008AF8,
                        2LL,
                        4,
                        v3,
                        &TokenHandle,
                        0LL,
                        0LL,
                        0LL,
                        0LL) )
  {
    LastError = GetLastError();
    v5 = 763;
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  SetLastError(0);
  if ( !ConvertStringSidToSidW(L"SI", &pSid) )
  {
    v11 = GetLastError();
    v5 = 765;
    v2 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v2 = v11;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  TokenInformation = pSid;
  LODWORD(v23) = 32;
  SetLastError(0);
  LengthSid = GetLengthSid(pSid);
  if ( !SetTokenInformation(TokenHandle, TokenIntegrityLevel, &TokenInformation, LengthSid + 16) )
  {
    v13 = GetLastError();
    v5 = 772;
    v2 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v2 = v13;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  PrivilegesToDelete.Luid = (LUID)3LL;
  v27 = 5LL;
  v28 = 12LL;
  v29 = 19LL;
  v30 = 29LL;
  v31 = 34LL;
  v32 = 21LL;
  v33 = 25LL;
  v34 = 36LL;
  SetLastError(0);
  if ( !CreateRestrictedToken(TokenHandle, 0, 0, 0LL, 9u, &PrivilegesToDelete, 0, 0LL, &NewTokenHandle) )
  {
    v14 = GetLastError();
    v5 = 793;
    v2 = (unsigned __int16)v14 | 0x80070000;
    if ( v14 <= 0 )
      v2 = v14;
    if ( v2 >= 0 )
      v2 = -2003304445;
    goto LABEL_4;
  }
  *a1 = NewTokenHandle;
  NewTokenHandle = 0LL;
LABEL_34:
  if ( TokenHandle )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( NewTokenHandle )
  {
    CloseHandle(NewTokenHandle);
    NewTokenHandle = 0LL;
  }
  if ( pSid )
    LocalFree(pSid);
  if ( v20 )
    RtlFreeSid(v20);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v3 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v3);
  }
  return (unsigned int)v2;
}
