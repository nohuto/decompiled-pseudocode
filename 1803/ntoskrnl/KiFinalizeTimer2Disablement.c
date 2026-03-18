/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1400876FC
 * Callers:
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r14
  char v3; // bp
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  void (__fastcall *v6)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD v8[3]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-40h] BYREF

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
  result = KiWaitNever;
  v6 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      KiWaitNever ^ *(_QWORD *)(a1 + 112),
                                                                                      KiWaitNever)));
  if ( v6 )
  {
    v4 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 120), KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( v3 )
      EtwGetKernelTraceTimestamp(v9, 1073872896LL);
    v6(v4);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    v8[1] = v6;
    v8[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v4 ^ KiWaitAlways), KiWaitNever));
    v8[0] = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(
                             KiWaitAlways ^ _byteswap_uint64(a1 ^ KiWaitAlways) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ KiWaitNever, KiWaitNever)),
                             KiWaitNever));
    if ( !v6 )
      EtwGetKernelTraceTimestamp(v9, 1073872896LL);
    return EtwTraceTimedEvent(3948, 1073872896, (unsigned int)v8, 24, 4197890, (__int64)v9);
  }
  return result;
}
