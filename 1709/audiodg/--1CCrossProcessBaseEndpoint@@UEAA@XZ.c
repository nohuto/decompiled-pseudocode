/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140017C58
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140016FAC (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x1400516B0 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140051B40 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140017184 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140017EDC (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140017F5C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140017FDC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    AERTDestroyZoneHeap(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    AERTUnlockMemory(v3, *(unsigned int *)(*((_QWORD *)this + 9) + 148LL));
    UnmapViewOfFile(*((LPCVOID *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 9), v4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 23) = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((char *)this + 288);
  *((_QWORD *)this + 26) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
