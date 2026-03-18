/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0040ED8
 * Callers:
 *     ValidateHandleSecure @ 0x1C0040F90 (ValidateHandleSecure.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0071970 (EtwTraceUIPIHandleValidationError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 CurrentProcessWin32Process; // rbp
  __int16 v6; // ax
  __int64 v7; // rdi
  __int64 v9; // rdi

  v4 = (char *)gpKernelHandleTable + 16 * ((a1 - (struct _HANDLEENTRY *)qword_1C0189E38) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v6 = *((_WORD *)&unk_1C015ED5C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v6 & 2) != 0 )
  {
    v7 = *((_QWORD *)v4 + 1);
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 1LL;
    v9 = *((_QWORD *)v4 + 1);
    if ( !v9 )
      return 1LL;
    v7 = *(_QWORD *)(v9 + 376);
  }
  if ( !v7
    || *(PVOID *)v7 == gpepCSRSS
    || (unsigned int)CheckAccessForIntegrityLevelEx(
                       *(_QWORD *)(CurrentProcessWin32Process + 824),
                       *(_QWORD *)(v7 + 824),
                       0LL) )
  {
    return 1LL;
  }
  EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v7);
  UserSetLastError(5LL);
  return 0LL;
}
