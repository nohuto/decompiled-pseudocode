/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001EBD4
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x18001F620 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x1800200B0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180023C30 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180025A90 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002EEB0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  if ( *((_BYTE *)this + 12) )
  {
    if ( !*((_BYTE *)this + 13) )
      ++*((_DWORD *)this + 2);
  }
  else
  {
    *((_BYTE *)this + 12) = 1;
    *((_DWORD *)this + 2) = 0;
  }
  if ( *((_DWORD *)this + 2) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
    *((_BYTE *)this + 13) = 1;
  return *((_BYTE *)this + 13) == 0;
}
