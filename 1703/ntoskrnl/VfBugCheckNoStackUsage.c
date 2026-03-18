/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140250DD0
 * Callers:
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140763618 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x14076E534 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14076E700 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140790038, qword_140790040, BugCheckParameter4);
}
