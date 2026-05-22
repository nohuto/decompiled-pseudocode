/*
 * XREFs of ?OnSpatialManipulationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationCanceledEventArgs@3456@@Z @ 0x180065620
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180063910 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx

  *(_DWORD *)(*((_QWORD *)this + 13) + 1272LL) = 2;
  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    ISMTracing::Instance();
    ISMTracing::GestureRecognizer_GestureDetected_(v5, L"PathCanceled");
  }
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
