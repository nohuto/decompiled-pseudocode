/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x14012B0CC
 * Callers:
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void *__fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r14
  char v3; // bp
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // r15
  void *result; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER v11[3]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = 0LL;
  v5 = KiWaitNever;
  v6 = KiWaitAlways;
  v7 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      KiWaitNever ^ *(_QWORD *)(a1 + 112),
                                                                                      KiWaitNever)));
  if ( v7 )
  {
    v4 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 120), KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( v3 )
      EtwGetKernelTraceTimestamp(v11, 0x40020000u);
    v7(v4);
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
    v5 = KiWaitNever;
    v6 = KiWaitAlways;
  }
  if ( v3 )
  {
    v10[1] = v7;
    v10[2] = 0x7E35C6C7F3DD7277LL * (v5 ^ __ROR8__(a1 ^ _byteswap_uint64(v4 ^ v6), v5));
    v10[0] = 0x7E35C6C7F3DD7277LL
           * (v5 ^ __ROR8__(v6 ^ _byteswap_uint64(a1 ^ v6) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ v5, v5)), v5));
    if ( !v7 )
      EtwGetKernelTraceTimestamp(v11, 0x40020000u);
    return EtwTraceTimedEvent(3948, 0x40020000u, (__int64)v10, 24, 4197890, (__int64)v11);
  }
  return result;
}
