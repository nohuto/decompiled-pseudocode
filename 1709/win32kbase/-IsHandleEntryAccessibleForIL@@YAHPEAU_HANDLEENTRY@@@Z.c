/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C003E3D0
 * Callers:
 *     ValidateHandleSecure @ 0x1C003E310 (ValidateHandleSecure.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C008A4F8 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // r14
  __int16 v5; // ax
  __int64 v6; // rdi
  __int64 v8; // rdi

  v1 = gpKernelHandleTable;
  v3 = 3LL * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C018E9B8) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v5 = *((_WORD *)&unk_1C015EA5C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v5 & 2) != 0 )
  {
    v6 = v1[v3 + 1];
  }
  else
  {
    if ( (v5 & 1) == 0 )
      return 1LL;
    v8 = v1[v3 + 1];
    if ( !v8 )
      return 1LL;
    v6 = *(_QWORD *)(v8 + 400);
  }
  if ( !v6
    || *(PVOID *)v6 == gpepCSRSS
    || (unsigned int)CheckAccessForIntegrityLevelEx(
                       *(_QWORD *)(CurrentProcessWin32Process + 832),
                       *(_QWORD *)(v6 + 832),
                       0LL) )
  {
    return 1LL;
  }
  EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v6);
  UserSetLastError(5LL);
  return 0LL;
}
