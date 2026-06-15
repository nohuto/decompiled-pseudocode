/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058CA4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x140059E8C (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A0AC (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BF0C (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D334 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  const GUID *v7; // r8
  unsigned __int64 u32ValidFrameCount; // rbp
  char CPFlags; // cl
  __int64 v10; // rax
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  int ObjectsAvailableForProcessing; // eax
  unsigned int v15; // ecx
  unsigned __int8 v16; // r8

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
  CPFlags = CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)v3);
  v10 = *((_QWORD *)this - 117);
  *((_BYTE *)this + 73) = (CPFlags & 0x10) != 0;
  v11 = u32ValidFrameCount * *(unsigned __int16 *)(v10 + 12);
  (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v3,
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
        273,
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
    AEWMILOG_DATA(v12, v3, v13, 0x17u, 0LL, u32ValidFrameCount, 0x65uLL);
    a2->u32BufferFlags = BUFFER_SILENT;
    *((_DWORD *)this + 19) = 0;
  }
  a2->pBuffer = *((_QWORD *)this - 125);
  AEWMILOG_DATA(v15, v3, v16, 6u, v11, v11, 0LL);
}
