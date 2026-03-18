/*
 * XREFs of KiUmsExit @ 0x140192A80
 * Callers:
 *     NtContinue @ 0x1401819B0 (NtContinue.c)
 *     NtRaiseException @ 0x140181C50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KxStartUserThread @ 0x1401889D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140189960 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14018F800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192340 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
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
