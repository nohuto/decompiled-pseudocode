/*
 * XREFs of _W32ExceptionHandler @ 0x1C02267D0
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C005A350 (SfnINLPCREATESTRUCT.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     NtUserUnregisterClass @ 0x1C0072EE0 (NtUserUnregisterClass.c)
 *     NtUserConsoleControl @ 0x1C0090350 (NtUserConsoleControl.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C00EFC80 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2);
  return 1LL;
}
