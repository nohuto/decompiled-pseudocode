/*
 * XREFs of EtwTraceJob @ 0x14070AA40
 * Callers:
 *     NtTerminateJobObject @ 0x14045A7BC (NtTerminateJobObject.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x1406E0F04 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x14070B4FC (EtwpCopyJobGuidSafe.c)
 *     EtwpPsProvTraceJob @ 0x14070BDD8 (EtwpPsProvTraceJob.c)
 */

void *__fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // r10d
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  unsigned int v13; // [rsp+48h] [rbp-30h]
  _BYTE *v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v10, a1);
  if ( v5 )
    v11 = *(_DWORD *)(v5 + 1220);
  else
    v11 = 0;
  v16 = 0;
  v12 = v6;
  v13 = v8;
  v14 = v10;
  v15 = 28;
  if ( (dword_140345000 & 0x80000) != 0 )
    EtwpPsProvTraceJob(v7, v8, a4);
  return EtwTraceKernelEvent((int)&v14, 1, 0x80000u, a4, 5249284);
}
