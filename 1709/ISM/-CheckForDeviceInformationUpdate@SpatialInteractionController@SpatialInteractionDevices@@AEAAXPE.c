/*
 * XREFs of ?CheckForDeviceInformationUpdate@SpatialInteractionController@SpatialInteractionDevices@@AEAAXPEA_N@Z @ 0x1800C5168
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     <none>
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::CheckForDeviceInformationUpdate(
        SpatialInteractionDevices::SpatialInteractionController *this,
        bool *a2)
{
  char v4; // r9
  char v5; // dl
  LONGLONG v6; // r8
  bool v7; // cl
  char v8; // al
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = *((_BYTE *)this + 1080);
  v5 = *((_BYTE *)this + 504);
  v6 = PerformanceCount.QuadPart / (qword_18010F2B8 / 1000);
  v7 = *((_BYTE *)this + 408)
    && PerformanceCount.QuadPart / (qword_18010F2B8 / 1000) - *((_QWORD *)this + 134) > 500
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 101) - *((float *)this + 271))) & _xmm) >= 0.050000001;
  v8 = *((_BYTE *)this + 1081);
  *((_BYTE *)this + 1081) = 0;
  if ( v8 || v5 != v4 || v7 )
  {
    *((_BYTE *)this + 1080) = *((_BYTE *)this + 504);
    *((_DWORD *)this + 271) = *((_DWORD *)this + 101);
    *a2 = 1;
    *((_QWORD *)this + 134) = v6;
  }
  else
  {
    *a2 = 0;
  }
}
