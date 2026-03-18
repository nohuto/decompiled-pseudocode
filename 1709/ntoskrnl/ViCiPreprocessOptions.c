/*
 * XREFs of ViCiPreprocessOptions @ 0x1407A8474
 * Callers:
 *     VfCheckImageCompliance @ 0x1407A7DD4 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1407A8230 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1407A82D8 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 * Callees:
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 */

__int64 ViCiPreprocessOptions(_DWORD *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  unsigned __int64 v8; // r8
  __int64 result; // rax

  if ( *a1 == -1 )
  {
    v8 = a3 & 0xF;
    if ( v8 >= 7 )
      *a1 = 4;
    else
      *a1 = *((_DWORD *)&ViCiDefaultActions + v8);
  }
  result = (unsigned int)*a1;
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("*********** Verifier Detected a Code Integrity Issue ************\n");
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
