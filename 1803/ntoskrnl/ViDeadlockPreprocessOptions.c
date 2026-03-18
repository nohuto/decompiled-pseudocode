/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x140829F6C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140828F58 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14082A1CC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14082A368 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
      result = 4LL;
    else
      result = *(unsigned int *)&ViDeadlockDefaultActions[2 * v9];
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    ViDeadlockIssue = a3;
    qword_1403A4E68 = a4;
    qword_1403A4E70 = a5;
    qword_1403A4E78 = a6;
    VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** ");
    if ( a2 )
      DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
