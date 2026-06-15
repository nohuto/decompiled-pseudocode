/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180035558
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800134F4 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x1800245F0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800350B4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
