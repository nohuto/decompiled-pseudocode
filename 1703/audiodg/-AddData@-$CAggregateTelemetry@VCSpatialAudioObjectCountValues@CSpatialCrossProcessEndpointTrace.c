/*
 * XREFs of ?AddData@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I@Z @ 0x140059710
 * Callers:
 *     ?AddData@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I_N1@Z @ 0x140059870 (-AddData@-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEnd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x1400590A4 (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 8LL))(v6, a2, a3);
    *(_BYTE *)(a1 + 16) = 1;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
