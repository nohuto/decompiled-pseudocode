/*
 * XREFs of ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140063000
 * Callers:
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140014260 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x14001B510 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x14001B6C0 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140046E34 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140046EF4 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140047058 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140047118 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140047278 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140047388 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_MEMORY(
        __int64 a1,
        void *a2,
        unsigned __int8 a3,
        char a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 a11)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-61h] BYREF
  void *v14; // [rsp+60h] [rbp-21h]
  unsigned __int64 v15; // [rsp+68h] [rbp-19h]
  unsigned __int64 v16; // [rsp+70h] [rbp-11h]
  unsigned __int64 v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+7h]
  unsigned __int64 v20; // [rsp+90h] [rbp+Fh]

  if ( g_u32AEWMILogLevel >= a3 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_QWORD *)&EventTrace[48] = 0LL;
    strcpy(EventTrace, "x");
    v14 = a5;
    v15 = a6;
    v17 = a8;
    v16 = a7;
    *(_DWORD *)&EventTrace[56] = 0;
    v18 = 0LL;
    v19 = 0LL;
    v20 = a11;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_MEMORY;
    EventTrace[5] = a3;
    EventTrace[4] = a4;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
