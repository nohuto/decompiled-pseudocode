/*
 * XREFs of SdbpGetStandardDatabasePath @ 0x14072DA0C
 * Callers:
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SdbGetAppPatchDirEx @ 0x14072D598 (SdbGetAppPatchDirEx.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetStandardDatabasePath(__int64 a1, int a2, __int64 a3, wchar_t *a4, int a5)
{
  int v7; // r9d
  unsigned int v8; // eax
  const wchar_t *v9; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  size_t pcchRemaining[2]; // [rsp+40h] [rbp-248h] BYREF
  wchar_t v16[264]; // [rsp+50h] [rbp-238h] BYREF

  v16[0] = 0;
  if ( a2 == -2145386496 || a2 == -2147221504 || (v7 = 1, a2 == -2147352576) )
    v7 = 0;
  SdbGetAppPatchDirEx(a1, v16, 0x104u, v7);
  if ( a2 >= 0 )
    return 0LL;
  v8 = a2 & 0xF02F0000;
  if ( (a2 & 0xF02F0000) == 0x80020000 )
  {
    v9 = L"msimain.sdb";
  }
  else
  {
    switch ( v8 )
    {
      case 0x80030000:
        v9 = L"sysmain.sdb";
        break;
      case 0x80040000:
        v9 = L"drvmain.sdb";
        break;
      case 0x80200000:
        v9 = L"acres.dll";
        break;
      default:
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetStandardDatabasePath",
          1223,
          (unsigned int)"Cannot get the path for database type 0x%lx");
        return 0LL;
    }
  }
  if ( !a4 )
    goto LABEL_21;
  if ( RtlStringCchPrintfExW(a4, a5, 0LL, pcchRemaining, 0, L"%s\\%s", v16, v9) < 0 )
    return 0LL;
  v11 = a5 - LODWORD(pcchRemaining[0]);
  if ( a5 - LODWORD(pcchRemaining[0]) < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetStandardDatabasePath", 1246, (unsigned int)"Path is too long");
LABEL_21:
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( v9[v13] );
    while ( v16[++v12] != 0 )
      ;
    return (unsigned int)(v13 + v12 + 2);
  }
  return v11;
}
