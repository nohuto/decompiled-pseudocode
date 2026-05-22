/*
 * XREFs of ?OnSpatialManipulationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCompletedEventArgs@3456@@Z @ 0x1800655D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180063910 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx

  *(_DWORD *)(*((_QWORD *)this + 13) + 1272LL) = 2;
  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v5, L"PathCompleted");
  }
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
