/*
 * XREFs of ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x18005C540
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x18005D770 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  _DWORD *v6; // rdx
  ISMTracing *v7; // rcx
  const unsigned __int16 *v8; // rdx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    *(_DWORD *)(v3 + 1096) = 2;
  v5 = *((_DWORD *)this + 42);
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 == 1 )
  {
    if ( v6 && *v6 )
    {
      ISMTracing::Instance();
      v8 = L"ScrollCanceled";
LABEL_10:
      ISMTracing::GestureRecognizer_GestureDetected_(v7, v8);
    }
  }
  else if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    v8 = L"ZoomCanceled";
    goto LABEL_10;
  }
  result = 0LL;
  *((_BYTE *)this + 172) = 0;
  return result;
}
