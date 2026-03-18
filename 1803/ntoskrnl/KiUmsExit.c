/*
 * XREFs of KiUmsExit @ 0x1401BC780
 * Callers:
 *     NtContinue @ 0x1401AB600 (NtContinue.c)
 *     NtRaiseException @ 0x1401AB8A0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401AEAF0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401B2630 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401B35C0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401B6A00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401B9500 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401B9D00 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401BC040 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 */

__int64 __fastcall KiUmsExit(char a1)
{
  __int64 v1; // rbp
  _BYTE v3[80]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+50h] [rbp-158h]
  char *v5; // [rsp+58h] [rbp-150h]
  char v6; // [rsp+70h] [rbp-138h] BYREF

  _enable();
  v3[72] = a1;
  v5 = &v6;
  v4 = v1 - 128;
  return KiParkUmsThread(v3);
}
