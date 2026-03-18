/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x1407BCBAC
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1407BBBA0 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1407BBF00 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1407BCE14 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1407BCFB8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  unsigned __int64 v8; // rax
  __int64 result; // rax

  if ( *a1 == -1 )
  {
    v8 = a3 & 0xFFF;
    if ( v8 >= 0xC )
      *a1 = 4;
    else
      *a1 = *(_DWORD *)&ViDeadlockDefaultActions[2 * v8];
  }
  result = (unsigned int)*a1;
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    ViDeadlockIssue = a3;
    qword_140361848 = a4;
    qword_140361850 = a5;
    qword_140361858 = a6;
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
