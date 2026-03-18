/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0155A4C
 * Callers:
 *     CitSetInfo @ 0x1C00242D0 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0022F64 (-CitpLastInputUpdate@@YAXEI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v4 = qword_1C0193750;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *((_QWORD *)qword_1C0193750 + 15);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
    if ( CurrentProcessWin32Process != *((_QWORD *)v4 + 15) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_BYTE *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
