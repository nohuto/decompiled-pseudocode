/*
 * XREFs of ?TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z @ 0x1800D3A00
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        __int64 a4,
        ...)
{
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v6; // [rsp+58h] [rbp-1h]
  __int64 v7; // [rsp+60h] [rbp+7h]
  int *v8; // [rsp+68h] [rbp+Fh]
  __int64 v9; // [rsp+70h] [rbp+17h]
  __int64 *v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  va_list v12; // [rsp+88h] [rbp+2Fh]
  __int64 v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+C0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v16 = a4;
  v15 = a3;
  v14 = a2;
  v4 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v7 = 4LL;
    v6 = &v14;
    v8 = &v15;
    v10 = &v16;
    va_copy(v12, va);
    v9 = 4LL;
    v11 = 8LL;
    v13 = 8LL;
    TlgWrite((TraceLoggingHProvider)v4, &unk_180112991, 0LL, 0LL, 6u, &pData);
  }
}
