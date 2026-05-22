/*
 * XREFs of ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800D40AC
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5E1C (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x1800D9F24 (--$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInter.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
        SpatialInteractionDevices::SpatialInteractionHeartbeat *this,
        char a2)
{
  ULONGLONG TickCount64; // rax
  char v5; // dl
  unsigned __int64 i; // rcx
  _DWORD v7[8]; // [rsp+40h] [rbp-38h]

  TickCount64 = GetTickCount64();
  if ( a2
    || TickCount64 > SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64
                   + *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 3) = TickCount64;
    v5 = _InterlockedExchange((volatile __int32 *)this + 8, 0);
    for ( i = 0LL; i < 7; ++i )
      v7[i] = _InterlockedExchange((volatile __int32 *)((char *)this + i * 4 + 36), 0);
    SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
      (_DWORD)this,
      *((unsigned __int16 *)this + 8),
      *((unsigned __int16 *)this + 9),
      *((unsigned __int16 *)this + 10),
      v5);
  }
}
