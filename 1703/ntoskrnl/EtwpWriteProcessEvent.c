/*
 * XREFs of EtwpWriteProcessEvent @ 0x1404ED768
 * Callers:
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     RtlFreeAnsiString @ 0x1404ED8E0 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 */

void __fastcall EtwpWriteProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        _QWORD *a3,
        ULONG_PTR *a4,
        __int64 a5,
        _QWORD *TokenInformation)
{
  char v6; // r15
  char v11; // si
  __int64 v12; // [rsp+60h] [rbp-158h] BYREF
  _STRING AnsiString; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v14[32]; // [rsp+78h] [rbp-140h] BYREF
  $5BC46E0569261879018906DEC3127961 v15; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v16[18]; // [rsp+D0h] [rbp-E8h] BYREF

  v6 = 0;
  v11 = 1;
  if ( KeGetCurrentThread()->ApcState.Process != Process )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KiStackAttachProcess(Process, 0, (__int64)&v15);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  EtwpBuildProcessEvent(
    Process,
    a2,
    v11,
    (__int64)v14,
    a3,
    (__int64)v16,
    (unsigned int *)&v12,
    a4,
    &AnsiString,
    (unsigned __int16 *)a5,
    TokenInformation);
  if ( v6 )
  {
    KiUnstackDetachProcess(&v15, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  if ( (dword_140345000 & 1) != 0 )
    EtwpPsProvTraceProcess(Process, a2);
  EtwTraceKernelEvent((int)v16, v12, 1u, a2, 5249284);
  RtlFreeAnsiString(&AnsiString);
}
