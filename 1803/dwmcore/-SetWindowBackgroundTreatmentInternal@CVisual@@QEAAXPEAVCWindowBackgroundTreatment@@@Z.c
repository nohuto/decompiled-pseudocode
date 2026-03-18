/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18004CBD8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180050D58 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  char **v2; // rcx
  struct CWindowBackgroundTreatment *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CWindowBackgroundTreatment *)`CVisual::SetWindowBackgroundTreatmentInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x10000u;
  else
    CSparseStorage::SetData(v2, 16, 8u, &v3);
}
