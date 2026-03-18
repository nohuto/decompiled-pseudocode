/*
 * XREFs of _W32ExceptionHandler @ 0x1C0225268
 * Callers:
 *     NtUserConsoleControl @ 0x1C001B670 (NtUserConsoleControl.c)
 *     NtUserUnregisterClass @ 0x1C0034ED0 (NtUserUnregisterClass.c)
 *     SfnINLPCREATESTRUCT @ 0x1C003A530 (SfnINLPCREATESTRUCT.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C00DEC60 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1);
  return 1LL;
}
