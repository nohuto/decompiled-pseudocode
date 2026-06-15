/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400182D8
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004FE3C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x1400503C0 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400178C8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14001857C (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400185C8 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140059CB0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax
  ULONGLONG TickCount64; // rax
  __int64 v6; // rdx

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
  *((_QWORD *)this + 36) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *((_BYTE *)this + 320) )
  {
    *((_BYTE *)this + 320) = 0;
    if ( TickCount64 - *((_QWORD *)this + 42) > *((_QWORD *)this + 41) )
    {
      LOBYTE(v6) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        (char *)this + 288,
        v6);
    }
  }
  CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>((char *)this + 288);
  *((_QWORD *)this + 26) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
