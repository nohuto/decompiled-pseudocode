/*
 * XREFs of SdbpGetPathSystem @ 0x140771140
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407711E8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140773204 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  const char *v7; // r9
  int v8; // r8d
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures((char *)v10 + 4, v10, a4);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v7 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v8 = 1019;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathSystem", v8, (_DWORD)v7);
    return (unsigned int)ProcessHostGuestArchitectures;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)v10);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v7 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v8 = 1025;
    goto LABEL_5;
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
