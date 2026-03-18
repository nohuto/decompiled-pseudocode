/*
 * XREFs of EtwpWriteProcessEvent @ 0x1404F8600
 * Callers:
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 */

void __fastcall EtwpWriteProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5,
        PVOID TokenInformation)
{
  char v6; // bp
  __int64 ProcessServerSilo; // rax
  __int64 v12; // [rsp+60h] [rbp-148h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-140h] BYREF
  unsigned int v14; // [rsp+98h] [rbp-110h]
  _BYTE v15[48]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v16[18]; // [rsp+D0h] [rbp-D8h] BYREF

  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != Process
    && ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
  {
    KiStackAttachProcess(Process, 0, (__int64)v15);
    v6 = 1;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  EtwpBuildProcessEvent(
    Process,
    a3,
    (__int64)v16,
    (__int64)&v12,
    (__int64)a4,
    (PANSI_STRING)&UnicodeString,
    (__int64)a5,
    TokenInformation);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v15, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  if ( EtwpHostSiloState != -4480 && (*(_DWORD *)(EtwpHostSiloState + 4480) & 1) != 0 )
    EtwpPsProvTraceProcess(Process, v14, a4, a3, a2);
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v16, v12, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
