/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800146B0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016D90 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A5C0 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180026110 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  char v1; // r8

  v1 = *((_BYTE *)this + 13);
  if ( *((_BYTE *)this + 12) )
  {
    if ( !v1 )
      ++*((_DWORD *)this + 2);
  }
  else
  {
    *((_DWORD *)this + 2) = 0;
    *((_BYTE *)this + 12) = 1;
  }
  if ( *((_DWORD *)this + 2) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
  {
    *((_BYTE *)this + 13) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
