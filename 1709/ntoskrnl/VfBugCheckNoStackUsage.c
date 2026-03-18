/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140277630
 * Callers:
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407A531C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1407B0324 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407B0514 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_1407D5028, qword_1407D5030, qword_1407D5038);
}
