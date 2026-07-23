/*
 * XREFs of EtwpWriteProcessEvent @ 0x1404DBBF8
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1404DBD90 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 */

void __fastcall EtwpWriteProcessEvent(
        ULONG_PTR BugCheckParameter1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        PVOID TokenInformation)
{
  char v6; // bp
  __int64 v11; // [rsp+60h] [rbp-148h] BYREF
  _STRING AnsiString; // [rsp+68h] [rbp-140h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v13; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v14[18]; // [rsp+D0h] [rbp-D8h] BYREF

  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v13);
    v6 = 1;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    a3,
    (__int64)v14,
    (__int64)&v11,
    a4,
    &AnsiString,
    (__int64)a5,
    TokenInformation);
  if ( v6 )
  {
    KiUnstackDetachProcess(&v13, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  }
  if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  EtwTraceSiloKernelEvent(*(_QWORD *)(BugCheckParameter1 + 1728), (__int64)v14, v11, 1u, a2, 0x501904u);
  RtlFreeAnsiString(&AnsiString);
}
