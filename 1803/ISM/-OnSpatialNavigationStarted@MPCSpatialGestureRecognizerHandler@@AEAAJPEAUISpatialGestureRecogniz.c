/*
 * XREFs of ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x18005C300
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x18005D770 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs *a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rcx
  ISMTracing *v5; // rcx
  const unsigned __int16 *v6; // rdx
  _DWORD *v7; // rcx

  v3 = *((_QWORD *)this + 13);
  if ( *((_DWORD *)this + 42) == 1 )
  {
    *(_DWORD *)(v3 + 1096) = 5;
    v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      ISMTracing::Instance();
      v6 = L"ScrollStarted";
LABEL_8:
      ISMTracing::GestureRecognizer_GestureDetected_(v5, v6);
    }
  }
  else
  {
    *(_DWORD *)(v3 + 1096) = 6;
    v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v7 && *v7 )
    {
      ISMTracing::Instance();
      v6 = L"ZoomStarted";
      goto LABEL_8;
    }
  }
  return 0LL;
}
