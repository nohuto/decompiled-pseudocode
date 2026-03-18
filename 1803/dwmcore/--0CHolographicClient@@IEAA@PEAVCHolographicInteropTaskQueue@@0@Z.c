/*
 * XREFs of ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x1801FEC1C
 * Callers:
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801FEEC4 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CHolographicClient *__fastcall CHolographicClient::CHolographicClient(
        CHolographicClient *this,
        struct CHolographicInteropTaskQueue *a2,
        struct CHolographicInteropTaskQueue *a3)
{
  *(_QWORD *)this = &CHolographicClient::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CHolographicClient::`vftable'{for `IHolographicCompositorHost'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 176) = 0;
  *((_DWORD *)this + 43) = 1065353216;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 30) = a2;
  (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))a2)(a2);
  *((_QWORD *)this + 31) = a3;
  (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))a3)(a3);
  return this;
}
