/*
 * XREFs of ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x180065240
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180063910 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs *a3)
{
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  const unsigned __int16 *v6; // rdx
  _DWORD *v7; // rcx

  *(_DWORD *)(*((_QWORD *)this + 13) + 1272LL) = 2;
  if ( *((_DWORD *)this + 42) == 1 )
  {
    v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      ISMTracing::Instance();
      v6 = L"ScrollCanceled";
LABEL_8:
      ISMTracing::GestureRecognizer_GestureDetected_(v5, v6);
    }
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v7 && *v7 )
    {
      ISMTracing::Instance();
      v6 = L"ZoomCanceled";
      goto LABEL_8;
    }
  }
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
