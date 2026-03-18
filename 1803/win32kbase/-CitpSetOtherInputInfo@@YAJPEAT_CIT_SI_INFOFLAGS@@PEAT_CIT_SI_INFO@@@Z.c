/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0164334
 * Callers:
 *     CitSetInfo @ 0x1C003B590 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C003FAAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v3 = qword_1C01A16B0;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *((_QWORD *)qword_1C01A16B0 + 15);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process != *((_QWORD *)v3 + 15) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_BYTE *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
