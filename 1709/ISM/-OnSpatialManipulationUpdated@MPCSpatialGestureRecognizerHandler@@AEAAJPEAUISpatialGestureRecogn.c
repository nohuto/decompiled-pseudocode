/*
 * XREFs of ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800654D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18006566C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180065ADC (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs *a3)
{
  char v4; // al
  __int64 v6; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h]
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+38h] [rbp-C8h]
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v11; // [rsp+44h] [rbp-BCh]
  float v12; // [rsp+48h] [rbp-B8h]

  MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(this, &v6, a3);
  v8 = v6;
  v9 = v7;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(this, v10, &v8);
  if ( v10[0] )
  {
    *(float *)(*((_QWORD *)this + 13) + 1288LL) = v11;
    *(float *)(*((_QWORD *)this + 13) + 1292LL) = v12;
    if ( !*((_BYTE *)this + 188)
      || ((float)*((int *)this + 48) != v11 || (float)*((int *)this + 49) != v12 ? (v4 = 0) : (v4 = 1),
          (*((_BYTE *)this + 188) = v4) == 0) )
    {
      *(_DWORD *)(*((_QWORD *)this + 13) + 1272LL) = 7;
    }
  }
  *((_BYTE *)this + 172) = 1;
  return 0LL;
}
