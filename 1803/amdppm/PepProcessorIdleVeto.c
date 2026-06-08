/*
 * XREFs of PepProcessorIdleVeto @ 0x1C000A690
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C00096E0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall PepProcessorIdleVeto(__int64 a1, __int64 *a2)
{
  ULONG v3; // ecx
  NTSTATUS result; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-24h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  if ( !*(_QWORD *)(a1 + 680) || !*(_QWORD *)(a1 + 1120) && (*(_QWORD *)(a1 + 264) & 0x100000000000LL) == 0 )
    return -1073741637;
  v3 = *(_DWORD *)(a1 + 56);
  ProcNumber = 0;
  v5 = 56;
  v7 = 0LL;
  v8 = 0;
  result = KeGetProcessorNumberFromIndex(v3, &ProcNumber);
  if ( result >= 0 )
  {
    v7 = *a2;
    LOBYTE(v8) = *((_BYTE *)a2 + 8);
    return ((__int64 (__fastcall *)(int *))qword_1C0011668)(&v5);
  }
  return result;
}
