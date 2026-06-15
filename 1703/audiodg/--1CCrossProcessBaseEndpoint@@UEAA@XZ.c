/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140019260
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140018A88 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140050480 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140050930 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400193F4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x1400550A4 (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x1400599E0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdx
  ULONGLONG TickCount64; // rax
  __int64 v6; // rdx
  CSLock *v7; // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  LPVOID Context; // [rsp+58h] [rbp+10h] BYREF
  char *v10; // [rsp+60h] [rbp+18h]

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
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context) )
    v4 = Context;
  else
    v4 = 0LL;
  AERTFree(*((void **)this + 9), v4);
  *((_QWORD *)this + 9) = 0LL;
  Context = (char *)this + 184;
  *((_QWORD *)this + 23) = &CCrossProcessEndpointTraceLogger::`vftable';
  v10 = (char *)this + 288;
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
  *((_QWORD *)this + 36) = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( *((_BYTE *)this + 304) )
  {
    LOBYTE(v6) = 1;
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
      (char *)this + 288,
      v6);
  }
  v7 = (CSLock *)*((_QWORD *)this + 39);
  if ( v7 )
  {
    CSLock::`scalar deleting destructor'(v7, v6);
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_BYTE *)this + 305) )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 37);
    if ( v8 )
    {
      (**v8)(v8, 1LL);
      *((_QWORD *)this + 37) = 0LL;
    }
  }
  *((_QWORD *)this + 26) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
