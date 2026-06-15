/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180026B68
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18001AF04 (--1TSSession@@QEAA@XZ.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001B3AC (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x18001E514 (--1-$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$6 @ 0x180028C48 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180026BD4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
