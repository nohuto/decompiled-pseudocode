/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C00EB9F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwSyscallFilterMessage @ 0x1C00090F0 (EtwSyscallFilterMessage.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C008BBF8 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C008BCD8 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C00E5680 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     _TlgCreateSz @ 0x1C00EBC08 (_TlgCreateSz.c)
 *     _TlgWriteAgg @ 0x1C01567AC (_TlgWriteAgg.c)
 */

char __fastcall NtUserWin32kSysCallFilterStub(__int64 psz, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned __int16 *ProcessAppContainerSid; // rsi
  unsigned __int16 *ProcessCommandLine; // rdi
  unsigned int Win32KFilterSet; // eax
  __int64 v7; // r14
  const WCHAR *v8; // r12
  char v9; // r9
  const WCHAR *v10; // rax
  const char *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  int ShouldCaptureWerReport; // eax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v21; // [rsp+20h] [rbp-E0h]
  LPCWSTR pwsz; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[20]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+8h]
  int v28; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+130h] [rbp+30h] BYREF
  LPCWSTR *p_pwsz; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]

  v2 = a2;
  ProcessAppContainerSid = GetProcessAppContainerSid(psz, a2);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = PsGetWin32KFilterSet();
  v7 = Win32KFilterSet;
  v8 = &word_1C0160290;
  v9 = Win32KFilterSet;
  v10 = &word_1C0160290;
  v11 = (const char *)&unk_1C0163108;
  if ( ProcessAppContainerSid )
    v10 = ProcessAppContainerSid;
  pwsz = v10;
  if ( ProcessCommandLine )
    v8 = ProcessCommandLine;
  if ( psz )
    v11 = (const char *)psz;
  EtwSyscallFilterMessage((int)v11, (__int64)v10, (__int64)v8, v9);
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v11, ProcessImageFileName);
  LOBYTE(ShouldCaptureWerReport) = PsIsWin32KFilterAuditEnabled();
  if ( (_BYTE)ShouldCaptureWerReport )
  {
    LOBYTE(ShouldCaptureWerReport) = 2 * v7;
    if ( !HIDWORD(qword_1C018F9C8[2 * (unsigned int)v7]) )
    {
      ShouldCaptureWerReport = _ShouldCaptureWerReport(v2);
      if ( ShouldCaptureWerReport )
      {
        memset(v24, 0, 0x98uLL);
        LODWORD(v24[0]) = -1073740791;
        LODWORD(v24[3]) = 3;
        v21 = 3;
        v24[2] = v2;
        v24[4] = 41LL;
        v24[5] = v2;
        v24[6] = v7;
        LOBYTE(ShouldCaptureWerReport) = WerSubmitUserCrashReport(-2LL, v24, 0LL, 30LL);
      }
    }
    if ( dword_1C01887E0 > 5u )
    {
      LOBYTE(ShouldCaptureWerReport) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C01887E0, 0x800000000000uLL);
      if ( (_BYTE)ShouldCaptureWerReport )
      {
        v28 = 0;
        v26 = &v23;
        v23 = 1LL;
        v27 = 8;
        TlgCreateSz(&pDesc, v11);
        TlgCreateWsz(&v30, pwsz);
        TlgCreateWsz(&v31, v8);
        v34 = 0;
        p_pwsz = &pwsz;
        LODWORD(pwsz) = v7;
        v33 = 4;
        LOBYTE(ShouldCaptureWerReport) = TlgWriteAgg(v17, (int)&dword_1C016A41C, v18, v19, v21, &v25);
      }
    }
  }
  if ( ProcessAppContainerSid )
    LOBYTE(ShouldCaptureWerReport) = Win32FreePool((__int64)ProcessAppContainerSid);
  if ( ProcessCommandLine )
    LOBYTE(ShouldCaptureWerReport) = Win32FreePool((__int64)ProcessCommandLine);
  return ShouldCaptureWerReport;
}
