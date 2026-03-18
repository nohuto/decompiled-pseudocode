/*
 * XREFs of ViCiPreprocessOptions @ 0x1408154A0
 * Callers:
 *     VfCheckImageCompliance @ 0x140814F64 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140815260 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 */

__int64 ViCiPreprocessOptions(_DWORD *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // r8

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xF;
    if ( v9 >= 6 )
      result = 4LL;
    else
      result = *((unsigned int *)&ViCiDefaultActions + v9);
    *a1 = result;
  }
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
