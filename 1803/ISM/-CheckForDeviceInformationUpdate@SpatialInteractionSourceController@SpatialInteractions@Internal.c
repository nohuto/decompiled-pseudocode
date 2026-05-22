/*
 * XREFs of ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x1800D7150
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        bool *a2)
{
  char v4; // r9
  char v5; // dl
  LONGLONG v6; // r8
  bool v7; // cl
  char v8; // al
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = *((_BYTE *)this + 1144);
  v5 = *((_BYTE *)this + 316);
  v6 = PerformanceCount.QuadPart / (qword_180136738 / 1000);
  v7 = *((_BYTE *)this + 284)
    && PerformanceCount.QuadPart / (qword_180136738 / 1000) - *((_QWORD *)this + 142) > 500
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 70) - *((float *)this + 287))) & _xmm) >= 0.050000001;
  v8 = *((_BYTE *)this + 101);
  *((_BYTE *)this + 101) = 0;
  if ( v8 || v5 != v4 || v7 )
  {
    *a2 = 1;
    *((_BYTE *)this + 1144) = *((_BYTE *)this + 316);
    *((_DWORD *)this + 287) = *((_DWORD *)this + 70);
    *((_QWORD *)this + 142) = v6;
  }
  else
  {
    *a2 = 0;
  }
}
