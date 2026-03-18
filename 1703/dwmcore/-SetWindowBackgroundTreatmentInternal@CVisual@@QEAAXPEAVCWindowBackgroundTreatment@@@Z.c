/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180013108
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180013148 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  struct CWindowBackgroundTreatment *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CWindowBackgroundTreatment *)`CVisual::SetWindowBackgroundTreatmentInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x8000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0x11u, 8u, &v2);
}
