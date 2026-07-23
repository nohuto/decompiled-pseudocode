/*
 * XREFs of LdrpMapDllFullPath @ 0x18004D28C
 * Callers:
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpFindExistingModule @ 0x180020C4C (LdrpFindExistingModule.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     LdrpAppCompatRedirect @ 0x180052E80 (LdrpAppCompatRedirect.c)
 *     LdrpHashUnicodeString @ 0x180053000 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v10[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v9.Buffer = v10;
  v2 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  *(_DWORD *)&v9.Length = 0x1000000;
  v10[0] = 0;
  v4 = LdrpResolveDllName(a1, &v9, v1 + 88, v1 + 72, v2);
  v5 = v4;
  if ( !*(_QWORD *)(a1 + 168)
    && (v5 = LdrpAppCompatRedirect(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v9, v4), v5 >= 0)
    && (v6 = LdrpHashUnicodeString(v1 + 88),
        *(_DWORD *)(v1 + 264) = v6,
        LdrpFindExistingModule(
          (PUNICODE_STRING)(v1 + 88),
          (PUNICODE_STRING)(v1 + 72),
          *(_DWORD *)(a1 + 32),
          v6,
          (__int64)&v8),
        v8) )
  {
    LdrpLoadContextReplaceModule(a1, v8);
  }
  else if ( v5 >= 0 )
  {
    v5 = LdrpMapDllNtFileName(a1, &v9);
    if ( v5 == 1073741838 )
      v5 = -1073741701;
  }
  if ( v10 != v9.Buffer )
    NtdllpFreeStringRoutine(v9.Buffer);
  return (unsigned int)v5;
}
