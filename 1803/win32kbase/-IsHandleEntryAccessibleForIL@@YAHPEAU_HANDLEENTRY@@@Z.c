/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0034F30
 * Callers:
 *     ValidateHandleSecure @ 0x1C0034E70 (ValidateHandleSecure.c)
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0067454 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rdi
  __int64 CurrentProcessWin32Process; // r14
  __int16 v6; // ax
  __int64 v7; // rdi
  __int64 v9; // rdi

  v2 = gpKernelHandleTable;
  v4 = 3LL * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C01A0E28) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v6 = *((_WORD *)&unk_1C0172BBC + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v6 & 2) != 0 )
  {
    v7 = v2[v4 + 1];
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 1LL;
    v9 = v2[v4 + 1];
    if ( !v9 )
      return 1LL;
    v7 = *(_QWORD *)(v9 + 416);
  }
  if ( !v7
    || *(PVOID *)v7 == gpepCSRSS
    || CheckAccessForIntegrityLevelEx(*(_QWORD *)(CurrentProcessWin32Process + 872), *(_QWORD *)(v7 + 872), 0) )
  {
    return 1LL;
  }
  EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v7);
  UserSetLastError(5LL);
  return 0LL;
}
