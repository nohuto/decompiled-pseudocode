/*
 * XREFs of ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800968E0
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180096DC8 (--1CGeometry@@MEAA@XZ.c)
 */

CRgnGeometry *__fastcall CRgnGeometry::`scalar deleting destructor'(CRgnGeometry *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CRgnGeometry::`vftable';
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
