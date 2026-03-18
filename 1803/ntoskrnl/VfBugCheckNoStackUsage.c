/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1402AA73C
 * Callers:
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1408122EC (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x14081D4D4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14081D6C4 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140842028, qword_140842030, qword_140842038);
}
