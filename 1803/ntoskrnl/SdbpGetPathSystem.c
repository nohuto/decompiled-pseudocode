/*
 * XREFs of SdbpGetPathSystem @ 0x1407D8420
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1407DBED4 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  int v9; // r8d
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures((char *)v12 + 4, v12, a4);
  v7 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v8 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v9 = 1040;
LABEL_5:
    LODWORD(v11) = ProcessHostGuestArchitectures;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathSystem", v9, (_DWORD)v8, v11);
    return v7;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)v12);
  v7 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v8 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v9 = 1046;
    goto LABEL_5;
  }
  return v7;
}
