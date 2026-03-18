/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C013C720
 * Callers:
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C013C818 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  char *v2; // rbx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 16;
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 40, 0, 0x218uLL);
  v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 3);
  *((_QWORD *)this + 72) = 0LL;
  (**v4)(v4, v2);
  return this;
}
