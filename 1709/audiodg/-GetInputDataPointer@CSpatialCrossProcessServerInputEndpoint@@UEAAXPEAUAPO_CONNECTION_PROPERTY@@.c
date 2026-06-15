/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400620F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x14005BB60 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x14005CD04 (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005CF20 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005ED60 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060104 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140063254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  const GUID *v7; // r8
  unsigned __int64 u32ValidFrameCount; // rbp
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned int v11; // ecx
  unsigned __int8 v12; // r8
  int ObjectsAvailableForProcessing; // eax
  unsigned int v14; // ecx
  unsigned __int8 v15; // r8

  v3 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1088);
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 1088,
    (unsigned __int8)a3,
    5u,
    a2->u32ValidFrameCount,
    a2->u32BufferFlags,
    0LL);
  LOBYTE(v7) = CSpatialCrossProcessBaseEndpoint::IsRunning(v3);
  CSpatialCrossProcessEndpointTraceLogger::LogGetInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 704),
    a2,
    v7);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( (_DWORD)u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 26) + 52LL), u32ValidFrameCount);
  *((_BYTE *)this + 73) = (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)v3) & 0x10) != 0;
  v9 = u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this - 117) + 12LL);
  (*(void (__fastcall **)(__int64, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v10,
    a3,
    (unsigned int)u32ValidFrameCount);
  if ( (_DWORD)u32ValidFrameCount && CSpatialCrossProcessBaseEndpoint::IsRunning(v3) )
  {
    a2->u32BufferFlags = BUFFER_VALID;
    ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                      (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)v3,
                                      (unsigned int *)this + 16,
                                      (unsigned int *)this + 17);
    *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
    if ( ObjectsAvailableForProcessing < 0 )
    {
      SpatialCPTraceLoggingErrorHelper(
        "CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer",
        305,
        ObjectsAvailableForProcessing);
    }
    else
    {
      CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 704),
        "Server",
        *((_DWORD *)this + 16),
        *((_DWORD *)this + 17));
      *((_BYTE *)this + 72) = 1;
    }
  }
  else
  {
    AEWMILOG_DATA(v11, v3, v12, 0x17u, 0LL, u32ValidFrameCount, 0x65uLL);
    a2->u32BufferFlags = BUFFER_SILENT;
    *((_DWORD *)this + 19) = 0;
  }
  a2->pBuffer = *((_QWORD *)this - 125);
  AEWMILOG_DATA(v14, v3, v15, 6u, v9, v9, 0LL);
}
