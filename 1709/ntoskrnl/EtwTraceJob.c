/*
 * XREFs of EtwTraceJob @ 0x1407458D4
 * Callers:
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     NtTerminateJobObject @ 0x140591C10 (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140591C84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x140717204 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x140746620 (EtwpCopyJobGuidSafe.c)
 *     EtwpPsProvTraceJob @ 0x140747058 (EtwpPsProvTraceJob.c)
 */

void __fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // r10d
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+44h] [rbp-34h]
  unsigned int v12; // [rsp+48h] [rbp-30h]
  _BYTE *v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v9, a1);
  if ( v5 )
    v10 = *(_DWORD *)(v5 + 1220);
  else
    v10 = 0;
  v15 = 0;
  v11 = v6;
  v12 = v8;
  v13 = v9;
  v14 = 28;
  if ( v7 && EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 0x80000) != 0 )
    EtwpPsProvTraceJob(v7, v8, a4);
  EtwTraceKernelEvent((__int64)&v13, 1u, 0x80000u, a4, 0x501904u);
}
