/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x1407A936C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]
  _QWORD *v10; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 736);
  v7[0] = a1;
  v7[1] = a2;
  v8 = v4;
  v10 = v7;
  v12 = 0;
  v11 = 24;
  v9 = a4;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  return EtwTraceSiloKernelEvent(ProcessServerSilo, (int)&v10, 1, 0x20008000u, 610, 5249282);
}
