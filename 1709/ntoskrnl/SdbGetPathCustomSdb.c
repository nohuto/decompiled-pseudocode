/*
 * XREFs of SdbGetPathCustomSdb @ 0x1407708A0
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140770970 (SdbResolveDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SdbpGetCustomSdbFileName @ 0x140770D0C (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x14077128C (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int SystemSdbFilePath; // ebx
  const char *v10; // r9
  int v11; // r8d
  _BYTE v13[96]; // [rsp+30h] [rbp-88h] BYREF

  memset(v13, 0, 0x56uLL);
  if ( a3 && (SystemSdbFilePath = SdbpGetCustomSdbFileName(v13, v7, a3), SystemSdbFilePath < 0) )
  {
    v10 = "SdbpGetCustomSdbFileName failed [%x]";
    v11 = 1507;
  }
  else
  {
    SystemSdbFilePath = SdbpGetSystemSdbFilePath(a1, v7, 7, v8, (__int64)v13, a4);
    if ( SystemSdbFilePath >= 0 )
    {
      SystemSdbFilePath = 0;
      return SystemSdbFilePath >= 0;
    }
    v10 = "SdbpGetSystemSdbFilePath failed [%x]";
    v11 = 1519;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetPathCustomSdb", v11, (_DWORD)v10);
  return SystemSdbFilePath >= 0;
}
