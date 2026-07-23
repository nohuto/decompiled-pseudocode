/*
 * XREFs of LdrpMapDllSearchPath @ 0x18004F618
 * Callers:
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpFindExistingModule @ 0x180020C4C (LdrpFindExistingModule.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18004DE54 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     LdrpAppCompatRedirect @ 0x180052E80 (LdrpAppCompatRedirect.c)
 *     LdrpHashUnicodeString @ 0x180053000 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D1BE0 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // eax
  int ExistingModule; // ebx
  int v9; // eax
  _UNICODE_STRING v10; // xmm1
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *v17[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v21; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v4 = 0;
  v15 = 0LL;
  v18.Buffer = v19;
  v12 = 0;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  v13 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(
      *(_QWORD *)(v1 + 80),
      v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1,
      (__int64 *)Path);
    v6 = Path;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (const UNICODE_STRING *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v17,
           &v18,
           (__int64)&String1,
           &v14,
           &v12,
           (__int64)&v13);
    ExistingModule = v7;
    if ( v12 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v14, (unsigned int)&String1, (unsigned int)&v18, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v13 |= 1u;
      v9 = LdrpHashUnicodeString(&String1);
      *(_DWORD *)(v2 + 264) = v9;
      ExistingModule = LdrpFindExistingModule(&String1, &v14, *(_DWORD *)(a1 + 32), v9, (__int64)&v15);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v10 = String1;
    *(_UNICODE_STRING *)(v2 + 72) = v14;
    *(_UNICODE_STRING *)(v2 + 88) = v10;
    *(_QWORD *)&v14.Length = 0LL;
    v14.Buffer = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v18);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v19 != v18.Buffer )
      NtdllpFreeStringRoutine(v18.Buffer);
    *(_DWORD *)&v18.Length = 0x1000000;
    v18.Buffer = v19;
    v19[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v15 )
  {
    LdrpLoadContextReplaceModule(a1, v15);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v13, a1);
  }
  if ( v19 != v18.Buffer )
    NtdllpFreeStringRoutine(v18.Buffer);
  *(_DWORD *)&v18.Length = 0x1000000;
  v18.Buffer = v19;
  v19[0] = 0;
  LdrpFreeUnicodeString(&v14);
  if ( v21 )
    RtlReleasePath(Path[0]);
  return (unsigned int)ExistingModule;
}
