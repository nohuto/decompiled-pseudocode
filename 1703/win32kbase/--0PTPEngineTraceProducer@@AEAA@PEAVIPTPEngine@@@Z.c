/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C01390C8
 * Callers:
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01391C8 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  char *v2; // rbx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 16;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 44, 0, 0x1FCuLL);
  v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 3);
  *((_QWORD *)this + 69) = 0LL;
  (**v4)(v4, v2);
  return this;
}
